// Copyright (c) 2022 Joanne Santhosh All rights reserved
//
// Created by: Joanne Santhosh
// Created on: Sept 2022
// This program calculates the area of a triangle

#include <cmath>
#include <iostream>

int main() {
    // This function calculates the area
    int baseOfTriangle;
    int heightOfTriangle;
    double areaOfTriangle;

    // input
    std::cout << "Enter the base of the triangle (integer): ";
    std::cin >> baseOfTriangle;
    std::cout << "Enter the height of the triangle (integer): ";
    std::cin >> heightOfTriangle;

    // process
    areaOfTriangle = (baseOfTriangle * heightOfTriangle) / 2;

    // output
    std::cout << "" << std::endl;
    std::cout << "The area of the triangle is "
              << areaOfTriangle;
    std::cout << " cm². " << std::endl;
    std::cout << "\nDone." << std::endl;
}
