#include "pch.h"
#include "Ellipse.h"

Ellipse_::Ellipse_(float radiusX, float radiusY) :
	_radiusX(radiusX), _radiusY(radiusY) {}

Point Ellipse_::getValue(float t) const {
	return Point(_radiusX * cos(t), _radiusY * sin(t), 0.0f);
}

Vector Ellipse_::derivative(float t) const {
	return Vector(-(_radiusX * sin(t)), _radiusY * cos(t), 0.0f);
}

float Ellipse_::getRadiusX() const {
	return _radiusX;
}

float Ellipse_::getRadiusY() const {
	return _radiusY;
}

void Ellipse_::release() {
	delete(this);
}
