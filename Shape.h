/* BME506 - 02: Lab 6
 * Author: Vivian Tan (500819934)
 * Due: November 22, 2020
 */

#ifndef SHAPE_H
#define SHAPE_H

#include <iostream>
using namespace std;

class Shape{
protected:
    string color, name;
    double length, breadth, radius; 
public:
    Shape(string, double, double, double, string);
    virtual double area(void) = 0; 
    virtual string getName() = 0;
    virtual double getLength() = 0;
    virtual double getBreadth() = 0;
    virtual double getRadius() = 0;
    virtual string getColor() = 0;
};

#endif /* SHAPE_H */

