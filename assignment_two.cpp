// Copyright (c) 2019 Joseph Palermo All rights reserved.
//
// Created by: Joseph Palermo
// Created on: October 2019
// This program calculates the area of a sector of a circle

#define _USE_MATH_DEFINES

#include <math.h>
#include <iostream>
#include <iomanip>
double pow(double x, double y);


int main() {
    // This function calculates area of a sector of a circle

    // variables
    const float pi = M_PI;
    float radius;
    float angle;
    float area;

    // input
    std::cout << "Enter the radius: " << std::endl;
    std::cin >> radius;
    std::cout << "Enter the angle: " << std::endl;
    std::cin >> angle;

    // process
    area = pi*(radius*radius)*angle/360;

    // output
    std::cout << "" << std::endl;
    std::cout << "The area is " << std::fixed
    << std::setprecision(2) << std::setfill('0')
    << area << "cm^2" << std::endl;
}
