#include "TriangleByVertices.h"
#include <stdexcept>
#include <iostream>

using namespace std;

double TriangleByVertices::distance(double x1, double y1, double x2, double y2) const {
    return sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
}

double TriangleByVertices::calcMedian(int side) const {
    double a = distance(x2, y2, x3, y3);
    double b = distance(x1, y1, x3, y3);
    double c = distance(x1, y1, x2, y2);
    if (side == 1)
        return 0.5 * sqrt(2 * b * b + 2 * c * c - a * a);
    else if (side == 2)
        return 0.5 * sqrt(2 * a * a + 2 * c * c - b * b);
    else if (side == 3)
        return 0.5 * sqrt(2 * a * a + 2 * b * b - c * c);
    else
        throw invalid_argument("Невірний номер сторони");
}

double TriangleByVertices::calcInscribedRadius() const {
    double a = distance(x2, y2, x3, y3);
    double b = distance(x1, y1, x3, y3);
    double c = distance(x1, y1, x2, y2);
    double s = (a + b + c) / 2;
    return sqrt((s - a) * (s - b) * (s - c) / s);
}

double TriangleByVertices::calcCircumscribedRadius() const {
    double a = distance(x2, y2, x3, y3);
    double b = distance(x1, y1, x3, y3);
    double c = distance(x1, y1, x2, y2);
    double s = (a + b + c) / 2;
    return (a * b * c) / (4 * sqrt(s * (s - a) * (s - b) * (s - c)));
}

void TriangleByVertices::display() const {
    cout << "Трикутник за вершинами: (" << x1 << ", " << y1 << "), (" << x2 << ", " << y2
        << "), (" << x3 << ", " << y3 << ")" << endl;
}