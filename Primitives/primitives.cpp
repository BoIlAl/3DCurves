#include "pch.h"
#include "framework.h"

primitives::Point::Point(float x, float y, float z) :
	_x(x), _y(y), _z(z) {}

float primitives::Point::x() const {
	return _x;
}

float primitives::Point::y() const{
	return _y;
}

float primitives::Point::z() const {
	return _z;
}

void primitives::Point::setX(float x) {
	_x = x;
}

void primitives::Point::setY(float y) {
	_y = y;
}

void primitives::Point::setZ(float z) {
	_z = z;
}

std::ostream& primitives::operator<<(std::ostream& out, const Point& p) {
	return out << "(" << p._x << " " << p._y << " " << p._z << ")";
}

primitives::Vector::Vector(float x, float y, float z) :
	Point(x, y, z) {}

std::ostream& primitives::operator<<(std::ostream& out, const Vector& v) {
	return out << "{" << v.x() << " " << v.y() << " " << v.z() << "}";
}
