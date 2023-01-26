#include <iostream>
#include <vector>
#include <functional>
#include <algorithm>
#include "libMediator.h"

using namespace primitives;

std::vector<std::shared_ptr<ICurve>> generateVect(size_t size, float radiiLimit, float stepLimit) {
    auto errorLog = "null type error: radius <=0 probably\n";

    auto vect = std::vector<std::shared_ptr<ICurve>>();

    for (size_t i = 0; i < size; ++i) {
        int random = rand() % 3;
        switch (random) {
        case 0: {
            float radius = (float)(rand() + 1) / RAND_MAX * radiiLimit;
            //std::cout << "type - circle, rad = " << radius << "\n";
            auto circle = libMediator::getCircle(radius);
            if (!circle) {
                std::cout << errorLog;
            }
            else {
                vect.push_back(circle);
            }
            break;
        }
        case 1: {
            float radiusX = (float)(rand() + 1) / RAND_MAX * radiiLimit;
            float radiusY = (float)(rand() + 1) / RAND_MAX * radiiLimit;
            //std::cout << "type - ellipse, radii = " << radiusX << " " << radiusY << "\n";
            auto ellipse = libMediator::getEllipse(radiusX, radiusY);
            if (!ellipse) {
                std::cout << errorLog;
            }
            else {
                vect.push_back(ellipse);
            }
            break;
        }
        case 2: {
            float radius = (float)(rand() + 1) / RAND_MAX * radiiLimit;
            float step = ((float)rand() / RAND_MAX * 2 - 1) * stepLimit;
            //std::cout << "type - helix, rad, step = " << radius << " " << step << "\n";
            auto helix = libMediator::getHelix(radius, step);
            if (!helix) {
                std::cout << errorLog;
            }
            else {
                vect.push_back(helix);
            }
            break;
        }
        default: break;
        }
    }
    return vect;
}

std::vector<std::shared_ptr<ICircle>> getCircleOnlyVect(const std::vector<std::shared_ptr<ICurve>>& curves) {
    auto circles = std::vector<std::shared_ptr<ICircle>>();
    for (auto curve : curves) {
        std::shared_ptr<ICircle> circle = std::dynamic_pointer_cast<ICircle>(curve);
        if (circle) {
            circles.push_back(circle);
        }
    }
    return circles;
}

void test() {
    constexpr float pi = 3.14159265358979323846f;

    srand((unsigned)time(nullptr));

    auto curves = generateVect(200, 5.0f, 10.f);
    float t = pi / 4;

    for (auto curve : curves) {
        std::cout << "curve value at " << t << " - " << curve->getValue(t) << "\n";
        std::cout << "curve first det per t = " << t << " - " << curve->derivative(t) << "\n";
    }

    std::function<bool(const std::shared_ptr<ICircle>&, const std::shared_ptr<ICircle>&)> circleRadiusComp;
    circleRadiusComp = [](const std::shared_ptr<ICircle>& c1, const std::shared_ptr<ICircle>& c2) {
        return c1->getRadius() < c2->getRadius();
    };

    auto circles = getCircleOnlyVect(curves);

    auto helix = libMediator::getHelix(5, 5);

    std::sort(circles.begin(), circles.end(), circleRadiusComp);

    std::cout << "Sorted circle radii:\n";
    float sum = 0.0f;
    for (auto circle : circles) {
        sum += circle->getRadius();
        std::cout << circle->getRadius() << " ";
    }
    std::cout << "\n";

    std::cout << "total sum of radii: " << sum;
}

int main() {
    test();
    return 0;
}


