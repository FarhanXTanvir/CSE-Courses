/* 1. Write a C++ program to calculate the area and perimeter of a rectangle. Use
Multiple Inheritance.
Hints: Create two base classes Area, Perimeter and One derived class Rectangle
who inherits from both Area, Perimeter base class. */

#include <bits/stdc++.h>
using namespace std;

int l, w;
class Area{
    // int length, width;
    public:
    double calcArea(){
        return l*w;
    }
};
class Perimeter{
    // int length, width;
    public: 
    double calcPerimeter()
    {
        return 2*(l+w);
    }
};
class Rectangle: public Area, public Perimeter{
    public:
        void input()
        {
            cout << "Length: "; cin >> l;
            cout << "Width: "; cin >> w;
            
        }
}rect;

int main()
{
    rect.input();  
    cout << "Area of the rectangle: " << rect.calcArea() << endl;
    cout << "Perimeter of the rectangle: " << rect.calcPerimeter();
    return 0;
}