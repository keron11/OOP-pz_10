#pragma once
#include "Triangle.h"
#include <cmath>

class TriangleBySides : public Triangle {
private:
    double a, b, c;

public:
    TriangleBySides(double side1, double side2, double side3) : a(side1), b(side2), c(side3) {}
    double area() const;
    double calcMedian(int side) const override;
    double calcInscribedRadius() const override;
    double calcCircumscribedRadius() const override;
    void display() const override;
};
