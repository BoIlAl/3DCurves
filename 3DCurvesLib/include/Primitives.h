#pragma once
#include <iostream>

namespace primitives {

	class Point {
	private:
		float _x;
		float _y;
		float _z;
	public:
		Point() = default;
		Point(float x, float y, float z);

		float x() const;
		float y() const;
		float z() const;

		void setX(float x);
		void setY(float y);
		void setZ(float z);

		friend std::ostream& operator<<(std::ostream& out, const Point& p);
	};

	class Vector : public Point {
	public:
		Vector() = default;
		Vector(float x, float y, float z);

		friend std::ostream& operator<<(std::ostream& out, const Vector& v);
	};
}