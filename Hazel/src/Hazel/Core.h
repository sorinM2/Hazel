#pragma once

#ifdef HZ_PLATFORM_WINDOWS
      #ifdef HZ_BUILD_DLL
        #define HAZEL_API __declspec(dllexport)
      #else 
        #define HAZEL_API __declspec(dllimport)
   #endif // HZ_BUILD_DLL
#else 
   #error Error! Hazel only supports windows!
#endif

#define BIT(x) (1 << x)