/* BME506 - 02: Lab 6
 * Author: Vivian Tan (500819934)
 * Due: November 22, 2020
 */

#ifndef CIRCLE_H
#define CIRCLE_H
#include "Shape.h"
#include "ListOfShapes.h"
#include <iostream>
#include <queue>
#include <math.h>
using namespace std;

class Circle : public Shape{
public:
    Circle(string a, double b, double c, double d, string f): Shape(a,b,c,d,f){}
    double area(); double getLength(); double getBreadth(); double getRadius();
    string getColor(); string getName();
};

#endif /* CIRCLE_H */

