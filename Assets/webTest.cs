using System;
using System.Net.Http;
using System.Net.Http.Headers;
using System.Net.WebSockets;
using System.Text;
using System.Threading;
using System.Threading.Tasks;
using Newtonsoft.Json;
using Newtonsoft.Json.Linq;
using UnityEngine;

public class webTest : MonoBehaviour
{
    private HttpClient client;
    private ClientWebSocket webSocket;
    private string authToken;
    private string sessionCookie;
    private string baseAddress = "https://dashboard.mathtutor.web.cmu.edu/";

    async void Start()
    {
        client = new HttpClient();
        client.BaseAddress = new Uri(baseAddress);
        client.DefaultRequestHeaders.Accept.Add(new MediaTypeWithQualityHeaderValue("application/json"));

        try
        {
            // Step 1: Get the CSRF token and authenticate
            authToken = await GetAuthToken();
            Debug.Log("CSRF Token: " + authToken);
            await LoginAsync("pragati2", "*uhKI8", authToken);
            await NavigateToClassDashboard("62");

            // Step 2: Connect to WebSocket
            await ConnectWebSocket();
        }
        catch (Exception ex)
        {
            Debug.LogError("Async operation failed: " + ex.Message);
        }
    }

    private async Task<string> GetAuthToken()
    {
        HttpResponseMessage response = await client.GetAsync("/");
        response.EnsureSuccessStatusCode();
        var data = JObject.Parse(await response.Content.ReadAsStringAsync());
        return data["authenticity_token"].ToString();
    }

    private async Task LoginAsync(string username, string password, string authToken)
    {
        var content = new StringContent(
            JsonConvert.SerializeObject(new { username, password }),
            Encoding.UTF8,
            "application/json");

        client.DefaultRequestHeaders.Add("X-CSRF-Token", authToken);

        HttpResponseMessage response = await client.PostAsync("login", content);
        string responseContent = await response.Content.ReadAsStringAsync();
        Debug.Log("Response Content: " + responseContent);

        if (response.IsSuccessStatusCode)
        {
            Debug.Log("Logged in successfully.");

            sessionCookie = null; // Initialize sessionCookie to null

            // Inspect response headers
            foreach (var header in response.Headers)
            {
                Debug.Log($"Header: {header.Key} = {string.Join(", ", header.Value)}");
            }

            // Capture session cookie for WebSocket
            if (response.Headers.Contains("Set-Cookie"))
            {
                foreach (var cookie in response.Headers.GetValues("Set-Cookie"))
                {
                    Debug.Log($"Cookie: {cookie}");
                    if (cookie.StartsWith("session_id"))
                    {
                        sessionCookie = cookie.Split(';')[0].Split('=')[1];
                        Debug.Log("Session Cookie: " + sessionCookie);
                        break;
                    }
                }
            }
            else
            {
                Debug.LogError("Set-Cookie header is not present in the response.");
            }

            // Check if sessionCookie is still null or empty
            if (string.IsNullOrEmpty(sessionCookie))
            {
                throw new Exception("Failed to retrieve a valid session cookie.");
            }
        }
        else
        {
            Debug.LogError($"Login failed: {response.StatusCode} - {response.ReasonPhrase}");
            Debug.LogError("Response Content: " + responseContent);
        }
    }



    private async Task NavigateToClassDashboard(string classId)
    {
        string requestUri = $"classes/{classId}/dashboard";
        HttpResponseMessage response = await client.GetAsync(requestUri);
        string responseContent = await response.Content.ReadAsStringAsync();

        if (!response.IsSuccessStatusCode)
        {
            Debug.LogError($"Request to {requestUri} failed with status code {response.StatusCode} and content {responseContent}");
            throw new HttpRequestException($"HTTP error! Status: {response.StatusCode} {response.ReasonPhrase} Content: {responseContent}");
        }
        Debug.Log("Navigated to class dashboard: " + responseContent);
    }

    private async Task ConnectWebSocket()
    {
        if (string.IsNullOrEmpty(sessionCookie))
        {
            Debug.LogError("Cannot connect to WebSocket: session cookie is null or empty.");
            return;
        }

        webSocket = new ClientWebSocket();

        try
        {
            webSocket.Options.Cookies = new System.Net.CookieContainer();
            webSocket.Options.Cookies.Add(new Uri("https://dashboard.mathtutor.web.cmu.edu"), new System.Net.Cookie("session_id", sessionCookie));
            webSocket.Options.SetRequestHeader("Origin", "https://dashboard.mathtutor.web.cmu.edu");

            Uri serverUri = new Uri("wss://dashboard.mathtutor.web.cmu.edu/cable");

            Debug.Log("Connecting to WebSocket...");
            await webSocket.ConnectAsync(serverUri, CancellationToken.None);

            if (webSocket.State == WebSocketState.Open)
            {
                Debug.Log("WebSocket connection established.");
                await SubscribeToChannel();
            }
        }
        catch (WebSocketException wse)
        {
            Debug.LogError($"WebSocket Exception: {wse.Message}");
        }
        catch (Exception ex)
        {
            Debug.LogError($"Exception: {ex.Message}");
        }
    }

    private async Task SubscribeToChannel()
    {
        var subscribeMessage = new
        {
            command = "subscribe",
            identifier = JsonConvert.SerializeObject(new
            {
                channel = "ClassDashboardChannel"
            })
        };

        byte[] buffer = Encoding.UTF8.GetBytes(JsonConvert.SerializeObject(subscribeMessage));

        try
        {
            await webSocket.SendAsync(new ArraySegment<byte>(buffer), WebSocketMessageType.Text, true, CancellationToken.None);
            Debug.Log("Subscribed to channel.");
        }
        catch (Exception ex)
        {
            Debug.LogError("Error subscribing to channel: " + ex.Message);
        }
    }

    private async Task ReceiveMessages()
    {
        var buffer = new byte[2048];

        while (webSocket.State == WebSocketState.Open)
        {
            var result = await webSocket.ReceiveAsync(new ArraySegment<byte>(buffer), CancellationToken.None);
            if (result.MessageType == WebSocketMessageType.Close)
            {
                await webSocket.CloseAsync(WebSocketCloseStatus.NormalClosure, string.Empty, CancellationToken.None);
                Debug.Log("WebSocket closed by the server.");
            }
            else
            {
                var message = Encoding.UTF8.GetString(buffer, 0, result.Count);
                Debug.Log("Message received: " + message);
            }
        }
    }

    private void OnDestroy()
    {
        if (webSocket != null)
        {
            webSocket.Dispose();
        }
    }
}
