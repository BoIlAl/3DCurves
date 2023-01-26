#pragma once
#include "pch.h"

class Circle : public ICircle {
private:
	float _radius;
public:
	Circle(float radius);

	virtual Point getValue(float t) const override;
	virtual Vector derivative(float t) const override;

	virtual float getRadius() const override;

	virtual void release() override;
};