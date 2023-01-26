#pragma once
#include <Curves.h>
#include <functional>

using namespace curves;

class libMediator {
public:
	static std::shared_ptr<ICircle> getCircle(float radius);
	static std::shared_ptr<IEllipse> getEllipse(float radiusX, float radiusY);
	static std::shared_ptr<IHelix> getHelix (float radius, float step);
};