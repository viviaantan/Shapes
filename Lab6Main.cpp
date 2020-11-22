/* BME506 - 02: Lab 5
 * Author: Vivian Tan (500819934)
 * Due: November 8, 2020
 */
#include <cstdlib>
#include "ListOfShapes.h"
#include "Rectangle.h"
#include "Circle.h"
#include <climits>
#include <math.h>
using namespace std;

int main() {
    Shape *s; 
    shapevect shapeList;
    string name; string color; 
    double length, breadth, radius, area;
    string num;
    while (1){
        int n = shapeList.getSize();
        cout <<"======================"<<endl; 
        cout <<"[Shape List]" << endl;
        cout <<"There are currently "<< n << " shape(s) in the list" <<endl;
        cout << "Please choose an option:"<<endl;
        cout <<"1. Add Rectangle"<<endl;
        cout << "2. Add Circle" << endl;
        cout <<"3. Remove Shape" <<endl;
        cout <<"4. Display Shapes" << endl; 
        cout <<"5. Quit" <<endl; 
        
        cout<< endl << "Option: ";
        cin >> num; cout<<endl; 
        
        if ("1" == num){
            cout << "[Add Rectangle]" << endl; 
            cout << "Enter Color: " ;
            cin.clear();
            cin.ignore(INT_MAX,'\n');
            getline(cin, color, '\n'); 
            cout << endl << "Enter Length: "; 
            if (!(cin >> length)){
                std::cin.ignore();
                std::cin.clear();
                cout << "Invalid length, please try again" << endl;  
                }
            else {
                cout << endl << "Enter Breadth: ";
                if (!(cin >> breadth)){
                    std::cin.ignore();
                    std::cin.clear();
                    cout << "Invalid breadth, please try again" <<endl;
                }
                else{
                   area = length*breadth;
                   Shape * s = new Rectangle(name, length, breadth,radius, color);
                   shapeList.addShape(s);
                   cout<<endl<<"..[Adding Rectangle]"<<endl<<endl;
                }
            }
        }
        else if ("2" == num){
            cout << "[Add Circle]" << endl; 
            cout << "Enter Color: " ;
            cin.clear();
            cin.ignore(INT_MAX,'\n');
            getline(cin, color, '\n'); 
            cout << endl << "Enter Radius: "; 
            if (!(cin >> radius)){
                std::cin.ignore();
                std::cin.clear();
                cout << endl<< "Invalid radius, please try again" << endl << endl;  
                }
            else{
                area = M_PI*pow(radius,2);
                Shape *s = new Circle (name, length, breadth,radius, color);
                shapeList.addShape(s);
                cout<<"..[Adding Circle]"<<endl;
                }
            }
        
        
        else if ("3" == num){
        shapeList.remove(); 
        }
        else if ("4" == num){
           shapeList.display();
        }
        else if ("5" == num){
            cout << "[Quitting Program]" << endl;
            return 0;
        }
        else{
            cout << "Invalid option, try again"<< endl; 
        }
    }
    return 0;
}

