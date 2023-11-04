#pragma once
#include <hzpch.h>

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

#ifdef HZ_ENABLE_ASSERTS
  #define HZ_ASSERT(x, ...) {if(!(x)) {HZ_ERROR("Assertion failed!: {0}", __VA_ARGS__); __debugbreak();}}
  #define HZ_CORE_ASSERT(x, ...) {if(!(x)) {HZ_CORE_ERROR("Assertion failed!: {0}", __VA_ARGS__); __debugbreak();}}
#else
  #define HZ_ASSERT(x, ...) 
  #define HZ_CORE_ASSERT(x, ...)
#endif