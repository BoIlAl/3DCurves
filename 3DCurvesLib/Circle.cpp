#include "pch.h"
#include "Circle.h"

Circle::Circle(float radius) :
    _radius(radius) {}

Point Circle::getValue(float t) const {
    return Point(_radius * cos(t), _radius * sin(t), 0.0f);
}

Vector Circle::derivative(float t) const {
    return Vector(-(_radius * sin(t)), _radius * cos(t), 0.0f);
}

float Circle::getRadius() const {
    return _radius;
}

void Circle::release() {
    delete(this);
}
