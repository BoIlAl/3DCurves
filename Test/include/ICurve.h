#pragma once

#include <iostream>
#include "Primitives.h"

using namespace primitives;

class ICurve {
public:
	virtual Point getValue(float t) const = 0;
	virtual Vector derivative(float t) const = 0;

	virtual void release() = 0;

protected:
	ICurve() = default;
	virtual ~ICurve() = 0 {};

private:
	ICurve(const ICurve&) = delete;
	ICurve& operator=(const ICurve&) = delete;
};