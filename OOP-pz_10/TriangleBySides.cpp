#include "TriangleBySides.h"
#include <stdexcept>
#include <iostream>

using namespace std;

double TriangleBySides::area() const {
    double s = (a + b + c) / 2;
    return sqrt(s * (s - a) * (s - b) * (s - c));
}

double TriangleBySides::calcMedian(int side) const {
    if (side == 1)
        return 0.5 * sqrt(2 * b * b + 2 * c * c - a * a);
    else if (side == 2)
        return 0.5 * sqrt(2 * a * a + 2 * c * c - b * b);
    else if (side == 3)
        return 0.5 * sqrt(2 * a * a + 2 * b * b - c * c);
    else
        throw invalid_argument("Невірний номер сторони");
}

double TriangleBySides::calcInscribedRadius() const {
    return area() / ((a + b + c) / 2);
}

double TriangleBySides::calcCircumscribedRadius() const {
    return (a * b * c) / (4 * area());
}

void TriangleBySides::display() const {
    cout << "Трикутник за сторонами: a = " << a << ", b = " << b << ", c = " << c << endl;
}