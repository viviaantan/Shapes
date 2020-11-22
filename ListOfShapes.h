/* BME506 - 02: Lab 6
 * Author: Vivian Tan (500819934)
 * Due: November 22, 2020
 */

#ifndef LISTOFSHAPES_H
#define LISTOFSHAPES_H
#include <iostream>
#include <queue>
using namespace std; 
#include "Shape.h"
#include "Rectangle.h"
#include "Circle.h"

class shapevect{
private:
    vector <Shape*> s;
public:
    void addShape(Shape *s); int getSize();
    void display(); void remove(); 
};


#endif /* LISTOFSHAPES_H */

