﻿using UnityEngine;
using System.Collections;

public class TakeScreenshot : MonoBehaviour
{    
	private int screenshotCount = 0;
	string imagePath;
	
	// Check for screenshot key each frame
	void Update()
	{
		// take screenshot on up->down transition of F9 key
		if (Input.GetKeyDown("f1"))
		{        
			string screenshotFilename;
			do
			{
				screenshotCount++;
				screenshotFilename = "screenshot" + screenshotCount + ".png";
				
			} while (System.IO.File.Exists(screenshotFilename));
			
			ScreenCapture.CaptureScreenshot(screenshotFilename);
			if (Application.platform == RuntimePlatform.Android || Application.platform == RuntimePlatform.IPhonePlayer)
				
				imagePath = Application.persistentDataPath;
			
			else if (Application.platform == RuntimePlatform.WindowsPlayer)
				
				imagePath = Application.dataPath;
			
			else if (Application.platform == RuntimePlatform.WindowsEditor)
			{
				
				imagePath = Application.dataPath;
				
				imagePath = imagePath.Replace("/Assets", null);
				
			}
			
			imagePath = imagePath + screenshotFilename;
		}
	}
}
