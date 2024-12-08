#pragma once
class Triangle {
public:
    virtual double calcMedian(int side) const = 0;
    virtual double calcInscribedRadius() const = 0;
    virtual double calcCircumscribedRadius() const = 0;
    virtual void display() const = 0;
    virtual ~Triangle() {}
};