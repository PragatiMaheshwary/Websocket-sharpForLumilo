using System;
using System.Net;
using System.Net.Http;
using System.Net.Http.Headers;
using System.Text;
using System.Threading.Tasks;
using Newtonsoft.Json;
using Newtonsoft.Json.Linq;
using UnityEngine;

public class GetData : MonoBehaviour
{
    private HttpClient client = new HttpClient();
    private string baseAddress = "https://dashboard.mathtutor.web.cmu.edu/";
    async void Start()
    {
        client.BaseAddress = new Uri(baseAddress);
        client.DefaultRequestHeaders.Accept.Add(new MediaTypeWithQualityHeaderValue("application/json"));
        try
        {
            await PerformApiOperations();
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
        response.EnsureSuccessStatusCode();
        Debug.Log("response status: " + response.StatusCode);
        Debug.Log("Logged in successfully.");
        // For Debugging purposes: access the page
        // HttpResponseMessage pageResponse = await client.GetAsync("https://dashboard.mathtutor.web.cmu.edu/classes");
        // pageResponse.EnsureSuccessStatusCode();
        // string pageContent = await pageResponse.Content.ReadAsStringAsync();
        // Debug.Log("Page content: " + pageContent);
    }
    private async Task<JArray> ListClassesAsync()
    {
        string requestUri = "classes";
        HttpResponseMessage response = await client.GetAsync(requestUri);
        string responseContent = await response.Content.ReadAsStringAsync();
        if (!response.IsSuccessStatusCode)
        {
            Debug.LogError($"Request to {requestUri} failed with status code {response.StatusCode} and content {responseContent}");
            if (response.StatusCode == (HttpStatusCode)422)
            {
                Debug.LogError("Detailed server validation error: " + responseContent);
            }
            throw new HttpRequestException($"HTTP error! Status: {response.StatusCode} {response.ReasonPhrase} Content: {responseContent}");
        }
        Debug.Log("Response: " + responseContent);
        return JArray.Parse(responseContent);
    }
    private async Task GetClassDashboardAsync(string schoolName, string className)
    {
        HttpResponseMessage response = await client.GetAsync($"schools/{schoolName}/classes/{className}/dashboard");
        response.EnsureSuccessStatusCode();
        Debug.Log($"Dashboard {schoolName} response status: {response.StatusCode}");
        string dashboardData = await response.Content.ReadAsStringAsync();
        Debug.Log($"Dashboard Data: {dashboardData}");
    }
    private async Task PerformApiOperations()
{
    try
    {
        string authToken = await GetAuthToken();
        await LoginAsync("pragati2", "*uhKI8", authToken);
        var classes = await ListClassesAsync();
        if (classes.Count > 0)
        {
            string selectedSchoolName = classes[18]["school_name"].ToString();
            string selectedName = classes[18]["name"].ToString();
            Debug.Log($"Selected class: {selectedSchoolName} {selectedName}");
            await GetClassDashboardAsync(selectedSchoolName, selectedName);
        }
    }
    catch (Exception ex)
    {
        Debug.LogError("API operation failed: " + ex.Message);
    }
}
}
