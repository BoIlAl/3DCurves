#pragma once
#include "ICircle.h"
#include "IEllipse.h"
#include "IHelix.h"

#ifdef MY3DCURVESLIB_EXPORTS
#define EXPORT __declspec(dllexport)
#else
#define EXPORT __declspec(dllimport)
#endif

namespace curves {
#ifdef __cplusplus
	extern "C"
	{
#endif

		EXPORT ICircle* GetCircle(float radius);
		EXPORT IEllipse* GetEllipse(float radiusX, float radiusY);
		EXPORT IHelix* GetHelix(float radius, float step);

#ifdef __cplusplus
	}
#endif
}