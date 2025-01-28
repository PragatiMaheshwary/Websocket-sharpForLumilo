using System;
using System.Collections.Generic;
using System.Linq;
using System.Net.Http;
using System.Net.Http.Headers;
using System.Security.Authentication;
using System.Text;
using System.Threading.Tasks;
using Newtonsoft.Json;
using Newtonsoft.Json.Linq;
using UnityEngine;
using WebSocketSharp;

public class WebSocketAC : MonoBehaviour
{
    private HttpClient client;
    private WebSocket ws;
    private string authToken;
    private string sessionCookie;
    private string additionalCookies;
    private string baseAddress = "https://dashboard.mathtutor.web.cmu.edu/";

    private List<WebSocketSharp.Net.Cookie> cookiesList = new List<WebSocketSharp.Net.Cookie>();


    async void Start()
    {
        client = new HttpClient();
        client.BaseAddress = new Uri(baseAddress);
        client.DefaultRequestHeaders.Accept.Add(new MediaTypeWithQualityHeaderValue("application/json"));

        try
        {
            authToken = await GetAuthToken();
            Debug.Log("CSRF Token: " + authToken);
            await LoginAsync("pm", "pm", authToken);
            await NavigateToClassDashboard("65");
            ConnectWebSocket();
        }
        catch (Exception ex)
        {
            Debug.LogError("Async operation failed: " + ex.Message);
            if (ex.InnerException != null)
            {
                Debug.LogError("Inner Exception: " + ex.InnerException.Message);
            }
            Debug.LogError("Stack Trace: " + ex.StackTrace);
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

            // Capture all cookies
            IEnumerable<string> cookieHeaders;
            if (response.Headers.TryGetValues("Set-Cookie", out cookieHeaders))
            {
                foreach (var cookie in cookieHeaders)
                {
                    var cookieParts = cookie.Split(';')[0].Split('=');
                    var name = cookieParts[0];
                    var value = cookieParts.Length > 1 ? cookieParts[1] : "";

                    // Store cookies for later use
                    var webSocketCookie = new WebSocketSharp.Net.Cookie(name, value, "/", "dashboard.mathtutor.web.cmu.edu");
                    cookiesList.Add(webSocketCookie);
                }
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
        string requestUri = $"schools/1/classes/{classId}/dashboard";
        HttpResponseMessage response = await client.GetAsync(requestUri);
        string responseContent = await response.Content.ReadAsStringAsync();

        if (!response.IsSuccessStatusCode)
        {
            Debug.LogError($"Request to {requestUri} failed with status code {response.StatusCode} and content {responseContent}");
            throw new HttpRequestException($"HTTP error! Status: {response.StatusCode} {response.ReasonPhrase} Content: {responseContent}");
        }
        Debug.Log("Navigated to class dashboard: " + responseContent);
    }

    private void ConnectWebSocket()
    {
        try
        {
            string websocketURL = "wss://dashboard.mathtutor.web.cmu.edu/cable";
            ws = new WebSocket(websocketURL, "actioncable-v1-json");

            // Set the cookies collected during login
            foreach (var cookie in cookiesList)
            {
                ws.SetCookie(cookie);
            }

            ws.OnOpen += (sender, e) =>
            {
                Debug.Log("WebSocket Connection opened.");
                SubscribeToChannel();
            };

            ws.OnMessage += (sender, e) =>
            {
                HandleWebSocketMessage(e.Data);
            };

            ws.OnClose += (sender, e) =>
            {
                Debug.LogError($"WebSocket Connection closed. Close code: {e.Code}, Reason: {e.Reason}");
            };

            ws.OnError += (sender, e) =>
            {
                Debug.LogError("WebSocket Error: " + e.Message);
                if (e.Exception != null)
                {
                    Debug.LogError("Exception: " + e.Exception);
                }
            };

            // SSL Configuration
            ws.SslConfiguration.EnabledSslProtocols = System.Security.Authentication.SslProtocols.Tls12;
            ws.SslConfiguration.TargetHost = "dashboard.mathtutor.web.cmu.edu";
            ws.SslConfiguration.ServerCertificateValidationCallback = (sender, certificate, chain, sslPolicyErrors) =>
            {
                Debug.LogWarning("SSL validation bypassed. Proceeding without validation.");
                return true; // Always accept the certificate
            };

            ws.Origin = "https://dashboard.mathtutor.web.cmu.edu";

            Debug.Log("Connecting to WebSocket...");
            ws.Connect();
        }
        catch (Exception ex)
        {
            Debug.LogError("WebSocket connection failed: " + ex.Message);
        }
    }


    private void HandleWebSocketMessage(string messageData)
    {
        Debug.Log("WebSocket Message received: " + messageData);

        JObject message;
        try
        {
            message = JObject.Parse(messageData);
        }
        catch (Exception ex)
        {
            Debug.LogError("Failed to parse message data: " + ex.Message);
            return;
        }

        if (message["type"] != null)
        {
            string messageType = message["type"].ToString();
            HandleMessageType(messageType, message);
        }
        else if (message["identifier"] != null && message["message"] != null)
        {
            // Parse the identifier
            string identifierString = message["identifier"].ToString();
            JObject identifier;
            try
            {
                identifier = JObject.Parse(identifierString);
            }
            catch (Exception ex)
            {
                Debug.LogError("Failed to parse identifier: " + ex.Message);
                return;
            }

            string channel = identifier["channel"]?.ToString() ?? "Unknown";
            string classId = identifier["class_id"]?.ToString() ?? "Unknown";

            // Log the channel and class ID
            Debug.Log($"Received data on channel: {channel}, class_id: {classId}");

            // Parse the message content dynamically
            JToken messageContent = message["message"];
            if (messageContent != null)
            {
                ProcessDynamicMessageContent(messageContent);
            }
            else
            {
                Debug.Log("Message content is null.");
            }
        }
        else
        {
            Debug.Log("Received unrecognized message format.");
        }
    }

    private void ProcessDynamicMessageContent(JToken token, string indent = "")
    {
        if (token is JObject obj)
        {
            foreach (var property in obj.Properties())
            {
                Debug.Log($"{indent}Property Name: {property.Name}");
                ProcessDynamicMessageContent(property.Value, indent + "  ");
            }
        }
        else if (token is JArray array)
        {
            Debug.Log($"{indent}Array with {array.Count} items.");
            foreach (var item in array)
            {
                ProcessDynamicMessageContent(item, indent + "  ");
            }
        }
        else
        {
            // For other types (string, number, bool, etc.)
            Debug.Log($"{indent}Value: {token.ToString()}");
        }
    }

    private void HandleMessageType(string messageType, JObject message)
    {
        switch (messageType)
        {
            case "welcome":
                Debug.Log("Connection established with Action Cable server.");
                break;
            case "ping":
                Debug.Log("Received ping from server.");
                break;
            case "confirm_subscription":
                Debug.Log("Subscription confirmed.");
                SendMessageCommand();
                break;
            case "reject_subscription":
                Debug.LogError("Subscription rejected.");
                break;
            case "disconnect":
                Debug.LogError("Disconnected: " + message["reason"]);
                break;
            default:
                Debug.Log("Unhandled message type: " + messageType);
                break;
        }
    }

    private void SubscribeToChannel()
    {
        var identifierObject = new
        {
            channel = "ClassDashboardChannel",
            class_id = "4jZq1yki9YBaDhuBkYRTnA4a"
        };

        var subscribeMessage = new
        {
            command = "subscribe",
            identifier = JsonConvert.SerializeObject(identifierObject)
        };

        var messageJson = JsonConvert.SerializeObject(subscribeMessage);
        ws.Send(messageJson);
        Debug.Log("Subscription message sent: " + messageJson);
    }

    private void SendMessageCommand()
    {
        Debug.Log("SendMessageCommand() called.");
        try
        {

            var identifierObject = new
            {
                channel = "ClassDashboardChannel",
                class_id = "4jZq1yki9YBaDhuBkYRTnA4a" // Replace with other class_id
            };

            var dataObject = new
            {
                disconnectedAt = (string)null,
                action = "send_course_info"
            };

            var message = new
            {
                command = "message",
                identifier = JsonConvert.SerializeObject(identifierObject),
                data = JsonConvert.SerializeObject(dataObject)
            };

            var messageJson = JsonConvert.SerializeObject(message);
            ws.Send(messageJson);
            Debug.Log("Message command sent: " + messageJson);
        }

        catch (Exception ex)
        {
            Debug.LogError("Exception in SendMessageCommand(): " + ex.Message);
        }
    }
}

