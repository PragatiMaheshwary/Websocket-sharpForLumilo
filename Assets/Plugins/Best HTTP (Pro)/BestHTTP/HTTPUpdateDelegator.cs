﻿using UnityEngine;

#if NETFX_CORE || BUILD_FOR_WP8
    using System.Threading.Tasks;
#endif

namespace BestHTTP
{
    /// <summary>
    /// Will route some U3D calls to the HTTPManager.
    /// </summary>
    [ExecuteInEditMode]
    public sealed class HTTPUpdateDelegator : MonoBehaviour
    {
        #region Public Properties

        /// <summary>
        /// The singleton instance of the HTTPUpdateDelegator
        /// </summary>
        public static HTTPUpdateDelegator Instance { get; private set; }

        /// <summary>
        /// True, if the Instance property should hold a valid value.
        /// </summary>
        public static bool IsCreated { get; private set; }

        /// <summary>
        /// Set it true before any CheckInstance() call, or before any request sent to dispatch callbacks on another thread.
        /// </summary>
        public static bool IsThreaded { get; set; }

        /// <summary>
        /// It's true if the dispatch thread running.
        /// </summary>
        public static bool IsThreadRunning { get; private set; }

        /// <summary>
        /// How much time the plugin should wait between two update call. Its default value 100 ms.
        /// </summary>
        public static int ThreadFrequencyInMS { get; set; }

        /// <summary>
        /// Called in the OnApplicationQuit function. If this function returns False, the plugin will not start to
        /// shut down itself.
        /// </summary>
        public static System.Func<bool> OnBeforeApplicationQuit;

        #endregion

        private static bool IsSetupCalled;

        static HTTPUpdateDelegator()
        {
            ThreadFrequencyInMS = 100;
        }

        /// <summary>
        /// Will create the HTTPUpdateDelegator instance and set it up.
        /// </summary>
        public static void CheckInstance()
        {
            try
            {
                if (!IsCreated)
                {
                    GameObject go = GameObject.Find("HTTP Update Delegator");

                    if (go != null)
                        Instance = go.GetComponent<HTTPUpdateDelegator>();

                    if (Instance == null)
                    {
                        go = new GameObject("HTTP Update Delegator");
                        go.hideFlags = HideFlags.HideAndDontSave;

                        GameObject.DontDestroyOnLoad(go);

                        Instance = go.AddComponent<HTTPUpdateDelegator>();
                    }
                    IsCreated = true;

#if UNITY_EDITOR
                    if (!UnityEditor.EditorApplication.isPlaying)
                    {
                        UnityEditor.EditorApplication.update -= Instance.Update;
                        UnityEditor.EditorApplication.update += Instance.Update;
                    }

                    UnityEditor.EditorApplication.playModeStateChanged -= Instance.OnPlayModeStateChanged;
                    UnityEditor.EditorApplication.playModeStateChanged += Instance.OnPlayModeStateChanged;
#endif
                }
            }
            catch
            {
                HTTPManager.Logger.Error("HTTPUpdateDelegator", "Please call the BestHTTP.HTTPManager.Setup() from one of Unity's event(eg. awake, start) before you send any request!");
            }
        }

        private void Setup()
        {
#if !BESTHTTP_DISABLE_CACHING && (!UNITY_WEBGL || UNITY_EDITOR)
            Caching.HTTPCacheService.SetupCacheFolder();
#endif

#if !BESTHTTP_DISABLE_COOKIES && (!UNITY_WEBGL || UNITY_EDITOR)
            Cookies.CookieJar.SetupFolder();
            Cookies.CookieJar.Load();
#endif

#if UNITY_WEBGL && !UNITY_EDITOR
            // Threads are not implemented in WEBGL builds, disable it for now.
            IsThreaded = false;
#endif
            if (IsThreaded)
            {
#if NETFX_CORE
                Windows.System.Threading.ThreadPool.RunAsync(ThreadFunc);
#else
                System.Threading.ThreadPool.QueueUserWorkItem(new System.Threading.WaitCallback(ThreadFunc));
#endif
            }

            IsSetupCalled = true;
        }

#if NETFX_CORE
        async
#endif
        void ThreadFunc(object obj)
        {
            HTTPManager.Logger.Information ("HTTPUpdateDelegator", "Update Thread Started");

            try
            {
                IsThreadRunning = true;
                while (IsThreadRunning)
                {
                    HTTPManager.OnUpdate();

#if NETFX_CORE
	                await Task.Delay(ThreadFrequencyInMS);
#else
                    System.Threading.Thread.Sleep(ThreadFrequencyInMS);
#endif
                }
            }
            finally
            {
                HTTPManager.Logger.Information("HTTPUpdateDelegator", "Update Thread Ended");
            }
        }

        void Update()
        {
            if (!IsSetupCalled)
            {
                IsSetupCalled = true;
                Setup();
            }

            if (!IsThreaded)
                HTTPManager.OnUpdate();
        }

#if UNITY_EDITOR
    void OnPlayModeStateChanged(UnityEditor.PlayModeStateChange state)
    {
        switch (state)
        {
            case UnityEditor.PlayModeStateChange.ExitingPlayMode:
                // Handle Exiting Play Mode
                IsThreadRunning = false;
                break;

            case UnityEditor.PlayModeStateChange.EnteredEditMode:
                // Handle Entered Edit Mode
                UnityEditor.EditorApplication.update += Update;
                break;

            case UnityEditor.PlayModeStateChange.ExitingEditMode:
                // Handle Exiting Edit Mode
                UnityEditor.EditorApplication.update -= Update;
                break;

            case UnityEditor.PlayModeStateChange.EnteredPlayMode:
                // Handle Entered Play Mode
                break;
        }
    }
#endif


        void OnDisable()
        {
#if UNITY_EDITOR
            if (UnityEditor.EditorApplication.isPlaying)
#endif
                OnApplicationQuit();
        }

        void OnApplicationQuit()
        {
            if (OnBeforeApplicationQuit != null)
            {
                try
                {
                    if (!OnBeforeApplicationQuit())
                    {
                        HTTPManager.Logger.Information("HTTPUpdateDelegator", "OnBeforeApplicationQuit call returned false, postponing plugin shutdown.");
                        return;
                    }
                }
                catch(System.Exception ex)
                {
                    HTTPManager.Logger.Exception("HTTPUpdateDelegator", string.Empty, ex);
                }
            }

            IsThreadRunning = false;

            if (!IsCreated)
                return;

            IsCreated = false;

            HTTPManager.OnQuit();

#if UNITY_EDITOR
    UnityEditor.EditorApplication.playModeStateChanged -= OnPlayModeStateChanged;
    UnityEditor.EditorApplication.playModeStateChanged += OnPlayModeStateChanged;
#endif

        }
    }
}