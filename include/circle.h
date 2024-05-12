// Copyright 2024 Dostavalov Semyon

#ifndef INCLUDE_CIRCLE_H_
#define INCLUDE_CIRCLE_H_
#define _USE_MATH_DEFINES

#include <cstdint>
#include <cmath>
#include <stdexcept>

class Circle {

private:
    double radius;
    double ference;
    double area;

    void calculateFerence();
    void calculateArea();
    void calculateRadiusFromFerence();
    void calculateRadiusFromArea();
public:

    Circle(double radius);

    void setRadius(double newRadius);
    void setFerence(double newFerence);
    void setArea(double newArea);

    double getRadius();
    double getFerence();
    double getArea();
};

#endif  // INCLUDE_CIRCLE_H_
