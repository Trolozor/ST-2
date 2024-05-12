// Copyright 2024 Dostavalov Semyon

#ifndef INCLUDE_TASKS_H_
#define INCLUDE_TASKS_H_

const double earthRadiusMeters = 63781000.0;
const double poolRadius = 3.0;
const double trackWidth = 1.0;
const double concreteCostPerSquareMeter = 1000.0;
const double fenceCostPerMeter = 2000.0;

double earthAndRope(double lenghtRope);
double poolCost();

#endif  // INCLUDE_TASKS_H_

