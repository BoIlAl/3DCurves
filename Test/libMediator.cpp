#include "libMediator.h"

std::shared_ptr<ICircle> libMediator::getCircle(float radius) {
    auto circPtr = GetCircle(radius);
    return std::shared_ptr<ICircle>(circPtr, std::mem_fn(&ICircle::release));
}

std::shared_ptr<IEllipse> libMediator::getEllipse(float radiusX, float radiusY) {
    auto ellPtr = GetEllipse(radiusX, radiusY);
    return std::shared_ptr<IEllipse>(ellPtr, std::mem_fn(&IEllipse::release));
}

std::shared_ptr<IHelix> libMediator::getHelix(float radius, float step) {
    auto helPtr = GetHelix(radius, step);
    return std::shared_ptr<IHelix>(helPtr, std::mem_fn(&IHelix::release));
}
