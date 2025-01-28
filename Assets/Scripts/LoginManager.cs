using System;
using System.Net;
using System.Net.Http;
using System.Net.Http.Headers;
using System.Text;
using System.Threading.Tasks;
using Newtonsoft.Json;
using Newtonsoft.Json.Linq;
using UnityEngine;

public class LoginManager : MonoBehaviour
{
    private string authToken;
    public static string SessionCookie { get; private set; }

    async void Start()
    {
        try
        {
            authToken = await GetAuthToken();
            Debug.Log("CSRF Token: " + authToken);
            await LoginAsync("pragati2", "*uhKI8", authToken);
        }
        catch (Exception ex)
        {
            Debug.LogError("Async operation failed: " + ex.Message);
        }
    }

    private async Task<string> GetAuthToken()
    {
        using (var client = new HttpClient())
        {
            client.BaseAddress = new Uri("https://dashboard.mathtutor.web.cmu.edu/");
            client.DefaultRequestHeaders.Accept.Add(new MediaTypeWithQualityHeaderValue("application/json"));
            HttpResponseMessage response = await client.GetAsync("/");
            response.EnsureSuccessStatusCode();
            var data = JObject.Parse(await response.Content.ReadAsStringAsync());
            return data["authenticity_token"].ToString();
        }
    }

    private async Task LoginAsync(string username, string password, string authToken)
    {
        var handler = new HttpClientHandler() { UseCookies = true };
        handler.CookieContainer = new CookieContainer();
        using (var client = new HttpClient(handler))
        {
            client.BaseAddress = new Uri("https://dashboard.mathtutor.web.cmu.edu/");
            client.DefaultRequestHeaders.Accept.Add(new MediaTypeWithQualityHeaderValue("application/json"));
            client.DefaultRequestHeaders.Add("X-CSRF-Token", authToken);
            client.DefaultRequestHeaders.Add("Referer", "https://dashboard.mathtutor.web.cmu.edu/");
            client.DefaultRequestHeaders.Add("User-Agent", "UnityWebRequest");
            client.DefaultRequestHeaders.Add("Accept-Language", "en-US,en;q=0.5");

            var loginData = new { username, password };
            var content = new StringContent(
                JsonConvert.SerializeObject(loginData),
                Encoding.UTF8,
                "application/json");

            Debug.Log("Request Headers: " + client.DefaultRequestHeaders);
            Debug.Log("Request Content: " + await content.ReadAsStringAsync());

            HttpResponseMessage response = await client.PostAsync("login", content);
            string responseContent = await response.Content.ReadAsStringAsync();
            Debug.Log("Response Content: " + responseContent);

            if (response.IsSuccessStatusCode)
            {
                Debug.Log("Logged in successfully.");
                // Capture session cookie for WebSocket
                foreach (Cookie cookie in handler.CookieContainer.GetCookies(new Uri("https://dashboard.mathtutor.web.cmu.edu/")))
                {
                    if (cookie.Name == "session_id")
                    {
                        SessionCookie = cookie.Value;
                        Debug.Log("Session Cookie: " + SessionCookie);
                    }
                }
            }
            else
            {
                Debug.LogError($"Login failed: {response.StatusCode} - {response.ReasonPhrase}");
                Debug.LogError("Response Content: " + responseContent);
            }
        }
    }
}
