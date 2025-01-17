#pragma once

#ifdef DLR_PLATFORM_WINDOWS
	#ifdef DLR_BUILD_DLL
		#define DLR_API __declspec(dllexport)
	#else
		#define DLR_API __declspec(dllimport)
	#endif // DLR_BUILD_DLL
#else
	#error OS not supported!
#endif // DLR_PLATFORM_WINDOWS