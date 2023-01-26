#pragma once
#include "ICurve.h"

class ICircle : public ICurve {
public:
	virtual Point getValue(float t) const = 0;
	virtual Vector derivative(float t) const = 0;

	virtual float getRadius() const = 0;

protected:
	ICircle() = default;
	virtual ~ICircle() = 0 {};
};