using System;
using System.Collections;
using System.IO;
using UnityEngine;
using UnityEngine.Android;

public class BluetoothPermissionChecker : MonoBehaviour
{
    bool onCheck = false;

    private void Start()
    {
        PressBtnCapture();
    }

    public void PressBtnCapture()
    {
        if (onCheck == false)
        {
            StartCoroutine(PermissionCheckCoroutine());
        }
    }

    IEnumerator PermissionCheckCoroutine()
    {
        Debug.Log("11111111111");
        onCheck = true;

        yield return new WaitForEndOfFrame();
        if (Permission.HasUserAuthorizedPermission(Permission.FineLocation) == false)
        {
            Permission.RequestUserPermission(Permission.FineLocation);

            yield return new WaitForSeconds(0.2f);
            yield return new WaitUntil(() => Application.isFocused == true);

            if (Permission.HasUserAuthorizedPermission(Permission.FineLocation) == false)
            {
                OpenAppSetting();

                onCheck = false;
                yield break;
            }
        }

        onCheck = false;
    }
    private void OpenAppSetting()
    {
        try
        {
#if UNITY_ANDROID
            using (var unityClass = new AndroidJavaClass("com.unity3d.player.UnityPlayer"))
            using (AndroidJavaObject currentActivityObject = unityClass.GetStatic<AndroidJavaObject>("currentActivity"))
            {
                string packageName = currentActivityObject.Call<string>("getPackageName");

                using (var uriClass = new AndroidJavaClass("android.net.Uri"))
                using (AndroidJavaObject uriObject = uriClass.CallStatic<AndroidJavaObject>("fromParts", "package", packageName, null))
                using (var intentObject = new AndroidJavaObject("android.content.Intent", "android.settings.APPLICATION_DETAILS_SETTINGS", uriObject))
                {
                    intentObject.Call<AndroidJavaObject>("addCategory", "android.intent.category.DEFAULT");
                    intentObject.Call<AndroidJavaObject>("setFlags", 0x10000000);
                    currentActivityObject.Call("startActivity", intentObject);
                }
            }
#endif
        }
        catch (Exception ex)
        {
            Debug.LogException(ex);
        }
    }
}
