/* BME506 - 02: Lab 6
 * Author: Vivian Tan (500819934)
 * Due: November 22, 2020
 */

#include "Shape.h"
#include "Rectangle.h"
#include "Circle.h"
#include "ListOfShapes.h"
#include "math.h"
#include <iomanip>
#include <queue>
#define _USE_MATH_DEFINES

using namespace std;
using std::setw;

int shapevect::getSize(){
    int n = s.size();
    return n; 
}

void shapevect::addShape(Shape *r){
    s.push_back(r);  
}

void shapevect::remove(){
    cout <<"..[Removing Shape]" << endl; 
    int n = s.size();
    Shape *a = s[n-1];
    delete a; a = 0; 
    s.pop_back();
}

void shapevect::display(){
    cout <<"[Displaying Shapes]"<<endl;
    if (s.empty()){
        cout << "No shapes to be displayed" << endl << endl; 
    }
    for (int i = 0; i<s.size();i++){
        if (s[i]->getName() == "Rectangle"){
            cout << s[i]->getName() << setw(6) << "L = " << s[i]->getLength() << setw(6)
                    << "B = " << s[i]->getBreadth() << setw(10) << "Area = " << s[i]->area()
                    << setw(6) << s[i]->getColor() << endl;
        }
        if (s[i]->getName() == "Circle"){
            cout << s[i]->getName() << setw(6) << "R = " << s[i]->getRadius() << setw(10)
                    << "Area = " << s[i]->area() << setw(6) << s[i]->getColor() << endl;
        }
    }
    cout << endl;
}