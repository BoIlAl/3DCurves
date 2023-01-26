#pragma once
#include "ICurve.h"

class IEllipse : public ICurve {
public:
	virtual Point getValue(float t) const = 0;
	virtual Vector derivative(float t) const = 0;

	virtual float getRadiusX() const = 0;
	virtual float getRadiusY() const = 0;

protected:
	IEllipse() = default;
	virtual ~IEllipse() = 0 {};
};