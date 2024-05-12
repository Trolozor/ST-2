// Copyright 2024 Dostavalov Semyon

#include "circle.h"

Circle::Circle(double radius) {
    setRadius(radius);
}

void Circle::calculateFerence() {
    ference = 2 * M_PI * radius;
}

void Circle::calculateArea() {
    area = M_PI * radius * radius;
}

void Circle::calculateRadiusFromFerence() {
    radius = ference / (2 * M_PI);
}

void Circle::calculateRadiusFromArea() {
    radius = sqrt(area / M_PI);
}

void Circle::setRadius(double newRadius) {
    if (newRadius <= 0) {
        throw std::invalid_argument("Negative or zero");
    }
    radius = newRadius;
    calculateFerence();
    calculateArea();
}

void Circle::setFerence(double newFerence) {
    if (newFerence <= 0) {
        throw std::invalid_argument("Negative or zero");
    }
    ference = newFerence;
    calculateRadiusFromFerence();
    calculateArea();
}

void Circle::setArea(double newArea) {
    if (newArea <= 0) {
        throw std::invalid_argument("Negative or zero");
    }
    area = newArea;
    calculateRadiusFromArea();
    calculateFerence();
}

double Circle::getRadius() {
    return radius;
}

double Circle::getFerence() {
    return ference;
}

double Circle::getArea() {
    return area;
}
