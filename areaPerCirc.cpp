// Copyright (c) 2022 Sarah All rights reserved.
//.
// Created by: Sarah
// Created on: Feb. 27, 2022.
// This program calculates and displays the area
// perimeter of a circle with radius 12 mm.
#include <iostream>
#include <cmath>

int main() {
  std::cout << "For a circle that has a radius\n";
  std::cout << "of 12mm:\n";
  std::cout << "\n";
  std::cout << "Area = " << M_PI * pow(12, 2)  << " mm^2\n";
  std::cout << "Perimeter = " << 2*M_PI*12 << " mm\n";
}
