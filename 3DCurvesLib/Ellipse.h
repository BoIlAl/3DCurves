#pragma once
#include "pch.h"

class Ellipse_ : public IEllipse {
private:
	float _radiusX;
	float _radiusY;
public:
	Ellipse_(float radiusX, float radiusY);

	virtual Point getValue(float t) const override;
	virtual Vector derivative(float t) const override;

	virtual float getRadiusX() const override;
	virtual float getRadiusY() const override;

	virtual void release() override;
};