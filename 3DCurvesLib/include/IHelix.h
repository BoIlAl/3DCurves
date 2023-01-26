#pragma once

#include "ICurve.h"

class IHelix : public ICurve {
public:
	virtual Point getValue(float t) const = 0;
	virtual Vector derivative(float t) const = 0;

	virtual float getRadius() const = 0;
	virtual float getStep() const = 0;

protected:
	IHelix() = default;
	virtual ~IHelix() = 0 {};
};