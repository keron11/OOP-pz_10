#pragma once
#include "Triangle.h"
#include <cmath>

class TriangleByVertices : public Triangle {
private:
    double x1, y1, x2, y2, x3, y3;
    double distance(double x1, double y1, double x2, double y2) const;

public:
    TriangleByVertices(double _x1, double _y1, double _x2, double _y2, double _x3, double _y3)
        : x1(_x1), y1(_y1), x2(_x2), y2(_y2), x3(_x3), y3(_y3) {}
    double calcMedian(int side) const override;
    double calcInscribedRadius() const override;
    double calcCircumscribedRadius() const override;
    void display() const override;
};

