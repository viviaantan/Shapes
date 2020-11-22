/* BME506 - 02: Lab 6
 * Author: Vivian Tan (500819934)
 * Due: November 22, 2020
 */

#include "Shape.h"
#include "Circle.h"
#include <math.h>

using namespace std; 

double Circle::area(){
    double a = M_PI*pow(radius,2);
    return a; 
}

double Circle::getLength(){
    return length;
    length = 0;
}

double Circle::getBreadth(){
    breadth = 0;
    return breadth;
}
double Circle::getRadius(){
    return radius;
}

string Circle::getColor(){
    return color;
}

string Circle::getName(){
    return "Circle";
}
