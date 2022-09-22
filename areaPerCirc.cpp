// Copyright [2020] <Mr. Coxall>"  [legal/copyright]
//
// Date : 09 - 18 - 22
// This program calculates the area and circumference of a circle.
// with the radius of 15 mm

#include <math.h>
#include <iostream>
#include <cmath>


int main() {
    std::cout << "If a circle has the radius" << std::endl;
    std::cout << "15 mm" << std::endl;
    std::cout << "The formula for area is 'Pi * r^2'" << std::endl;
    std::cout << "The formula for circumference is 'Pi * r * 2'" << std::endl;
    std::cout << "" << std::endl;
    std::cout << "Area is: " << (M_PI * pow(15, 2)) << "mm^2" << std::endl;

    std::cout << "Circumference is: " << (M_PI * 15 *2) << "mm" << std::endl;
}
