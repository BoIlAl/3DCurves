#pragma once
#include "pch.h"

class Helix : public IHelix {
private:
	float _radius;
	float _zParam;
public:
	Helix(float radius, float step);

	virtual Point getValue(float t) const override;
	virtual Vector derivative(float t) const override;

	virtual float getRadius() const override;
	virtual float getStep() const override;

	virtual void release() override;
};
