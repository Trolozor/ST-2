// Copyright 2024 Dostavalov Semyon

#include "circle.h"
#include "tasks.h"

double earthAndRope(double lenghtRope) {
    Circle earth(earthRadiusMeters);

    double initialFerence = earth.getFerence();
    earth.setFerence(initialFerence + lenghtRope);

    double gap = earth.getFerence() - initialFerence;
    return gap;
}

double poolCost() {
    Circle pool(poolRadius);
    double poolArea = pool.getArea();

    Circle track(poolRadius + trackWidth);
    double trackArea = track.getArea() - poolArea;

    double fenceLength = track.getFerence();

    double concreteCost = trackArea * concreteCostPerSquareMeter;
    double fenceCost = fenceLength * fenceCostPerMeter;
    double totalCost = concreteCost + fenceCost;

    return totalCost;
}

