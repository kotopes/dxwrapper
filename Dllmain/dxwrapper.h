//{{NO_DEPENDENCIES}}
// Microsoft Visual C++ generated include file.
// Used by dxwrapper.rc

#ifndef DDRAWLOG_H
#include "Logging\Logging.h"
#endif
#ifndef DXWND_H
#include "DxWnd\v2_03_60_src\dxwnd.h"
#endif
#include "Dllmain\BuildNo.rc"

// Main resource file details
#define APP_NAME				"DirectX Dynamic Link Library"
#define APP_MAJOR				1
#define APP_MINOR				0
#define APP_BUILDNUMBER			BUILD_NUMBER
#define APP_REVISION			21
#define APP_COMPANYNAME			"Sadrate Presents"
#define APP_DESCRPTION			"Wraps or hooks DirectX files to fix compatibility issues in older games. Also allows code to be executed from inside the application. Wraps the following files:  bcrypt.dll, cryptsp.dll, d2d1.dll, d3d8.dll, d3d9.dll, d3d10.dll, d3d10core.dll, d3d11.dll, d3d12.dll, d3dim.dll, d3dim700.dll, dciman32.dll, ddraw.dll, dinput.dll, dinput8.dll, dplayx.dll, dsound.dll, dxgi.dll, msacm32.dll, msvfw32.dll, vorbisfile.dll, winmm.dll and winmmbase.dll"
#define APP_COPYRIGHT			"Copyright (C) 2018 Elisha Riedlinger"
#define APP_ORIGINALVERSION		"dxwrapper.dll"
#define APP_INTERNALNAME		"DxWrapper"

// Get APP_VERSION
#define _TO_STRING_(x) #x
#define _TO_STRING(x) _TO_STRING_(x)
#define APP_VERSION _TO_STRING(APP_MAJOR) "." _TO_STRING(APP_MINOR) "." _TO_STRING(APP_BUILDNUMBER) "." _TO_STRING(APP_REVISION)

//Verify defintions exist in dxwnd.h
#ifndef APP_DXWNDNAME
#include "Missing APP_DXWNDNAME definition in dxwnd.h file"
#endif
#ifndef APP_DXWNDVERSION
#include "Missing APP_DXWNDVERSION definition in dxwnd.h file"
#endif

// Next default values for new objects
// 
#ifdef APSTUDIO_INVOKED
#ifndef APSTUDIO_READONLY_SYMBOLS
#define _APS_NEXT_RESOURCE_VALUE        101
#define _APS_NEXT_COMMAND_VALUE         40001
#define _APS_NEXT_CONTROL_VALUE         1001
#define _APS_NEXT_SYMED_VALUE           101
#endif
#endif
