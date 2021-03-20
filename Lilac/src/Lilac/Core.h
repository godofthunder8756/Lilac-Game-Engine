#pragma once

#ifdef LILAC_PLATFORM_WINDOWS
	#ifdef LILAC_BUILD_DLL
		#define LILAC_API __declspec(dllexport)
	#else
		#define LILAC_API __declspec(dllimport)

	#endif // LILAC_BUILD_DLL
#else
	#error Lilac only supports Windows!

#endif