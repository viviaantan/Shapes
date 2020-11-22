/* BME506 - 02: Lab 6
 * Author: Vivian Tan (500819934)
 * Due: November 22, 2020
 */


#ifndef RECTANGLE_H
#define RECTANGLE_H
#include "Shape.h"
#include "ListOfShapes.h"
#include <iostream>
#include <queue>
using namespace std; 

class Rectangle : public Shape {  
public: 
    Rectangle(string a, double b, double c, double d, string f): Shape(a,b,c,d,f){}
    double area(); double getLength(); double getBreadth(); double getRadius();
    string getColor(); string getName();
};

#endif /* RECTANGLE_H */

