#include "pch.h"
#include "Helix.h"

Helix::Helix(float radius, float step) :
	_radius(radius), _zParam(step / 2 / pi) {}

Point Helix::getValue(float t) const {
	return Point(_radius * cos(t), _radius * sin(t), _zParam * t);
}

Vector Helix::derivative(float t) const {
	return Vector(- (_radius * sin(t)), _radius * cos(t), _zParam);
}

float Helix::getRadius() const {
	return _radius;
}

float Helix::getStep() const {
	return _zParam * 2 * pi;
}

void Helix::release() {
	delete(this);
}
