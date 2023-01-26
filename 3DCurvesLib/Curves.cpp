#include "pch.h"
#include "Curves.h"
#include "Circle.h"
#include "Ellipse.h"
#include "Helix.h"

ICircle* curves::GetCircle(float radius) {
	if (radius <= 0.0f) {
		return nullptr;
	}
	return new Circle(radius);
}

IHelix* curves::GetHelix(float radius, float step) {
	if (radius <= 0.0f) {
		return nullptr;
	}
	return new Helix(radius, step);
}

IEllipse* curves::GetEllipse(float radiusX, float radiusY) {
	if (radiusX <= 0.0f || radiusY <= 0.0f) {
		return nullptr;
	}
	return new Ellipse_(radiusX, radiusY);
}