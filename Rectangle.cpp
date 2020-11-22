/* BME506 - 02: Lab 6
 * Author: Vivian Tan (500819934)
 * Due: November 22, 2020
 */

#include "Shape.h"
#include "Rectangle.h"

using namespace std; 

double Rectangle::area(){
    double a = length*breadth;
    return a; 
}

double Rectangle::getLength(){
    return length;
}

double Rectangle::getBreadth(){
    return breadth;
}

double Rectangle::getRadius(){
    return 0;
}
string Rectangle::getColor(){
    return color;
}

string Rectangle::getName(){
    return "Rectangle";
}

