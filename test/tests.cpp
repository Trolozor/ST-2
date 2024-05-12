// Copyright 2024 Dostavalov Semyon

#include <gtest/gtest.h>
#include <cstdint>
#include "circle.h"
#include "tasks.h"

TEST(CircleTest, SettersAndGetters) {
    Circle circle(5.0);
    circle.setRadius(7.0);
    EXPECT_DOUBLE_EQ(circle.getRadius(), 7.0);
    EXPECT_DOUBLE_EQ(circle.getFerence(), 2 * M_PI * 7.0);
    EXPECT_DOUBLE_EQ(circle.getArea(), M_PI * 7.0 * 7.0);

    circle.setFerence(20.0);
    EXPECT_DOUBLE_EQ(circle.getRadius(), 20.0 / (2 * M_PI));
    EXPECT_DOUBLE_EQ(circle.getFerence(), 20.0);
    EXPECT_DOUBLE_EQ(circle.getArea(), M_PI * (20.0 / (2 * M_PI)) * (20.0 / (2 * M_PI)));

    circle.setArea(50.0);
    EXPECT_DOUBLE_EQ(circle.getRadius(), sqrt(50.0 / M_PI));
    EXPECT_DOUBLE_EQ(circle.getFerence(), 2 * M_PI * sqrt(50.0 / M_PI));
    EXPECT_DOUBLE_EQ(circle.getArea(), 50.0);
}

TEST(CircleTest, Zero) {
    Circle circle(1.0);
    EXPECT_ANY_THROW(circle.setRadius(0.0));

    circle.setFerence(1.0);
    EXPECT_ANY_THROW(circle.setFerence(0.0));

    circle.setArea(1.0);
    EXPECT_ANY_THROW(circle.setArea(0.0));
}

TEST(CircleTest, Negative) {
    Circle circle(1.0);

    EXPECT_ANY_THROW(Circle(-1.0));
    EXPECT_ANY_THROW(circle.setRadius(-1.0));
    EXPECT_ANY_THROW(circle.setFerence(-1.0));
    EXPECT_ANY_THROW(circle.setArea(-1.0));
}

TEST(CircleTest, LargeRadius) {
    Circle circle(1e12);
    EXPECT_DOUBLE_EQ(circle.getFerence(), 2 * M_PI * 1e12);
    EXPECT_DOUBLE_EQ(circle.getArea(), M_PI * 1e24);
}

TEST(TasksTest, EarthAndRope) {
    double lenghtRope = 1.0;
    double actualGap = earthAndRope(lenghtRope);
    EXPECT_DOUBLE_EQ(actualGap, 0.0016);
}

TEST(TasksTest, PoolCost) {
    double expectedCost = 1000 * ((M_PI * (3 + 1) * (3 + 1)) - (M_PI * 3 * 3)) + 2000 * (2 * M_PI * (3 + 1));
    double actualCost = poolCost();
    EXPECT_DOUBLE_EQ(actualCost, expectedCost);
}

