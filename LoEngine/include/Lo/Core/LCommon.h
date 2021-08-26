#pragma once
#include <stdlib.h>

#define LO_WINDOWS (_WIN32 || _WIN64)


#ifdef LO_WINDOWS

#if defined LO_EXPORTS
#define LO_API __declspec(dllexport)
#else
#define LO_API __declspec(dllimport)
#endif

#define LASSERT(x) \
{\
	if((x) == 0) {__debugbreak(); abort();}\
}

#endif
