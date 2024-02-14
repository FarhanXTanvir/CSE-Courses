/*
2. Write a C++ Program to calculate the area of different geometric shapes such as Circle, Triangle, and Rectangle. 
Use function overloading.
Class Name: Shape
*/
#include <bits/stdc++.h>
using namespace std;
class Shape{
    public:
        double Area(int r) // Circle
        {
            return 3.1416*r*r;
        }
        double Area(double b, double h) // Triangle
        {
            return 0.5*b*h;
        }
        double Area(int a, int b) // Rectangle
        {
            return a*b;
        }
}Circle, Triangle, Rectangle;

int main()
{
    cout << "Area of the Circle: " << Circle.Area(2) << endl;
    cout << "Area of the Triangle: " << Triangle.Area(5.0, 10.5) << endl;
    cout << "Area of the Rectangle: " << Rectangle.Area(10, 12) << endl;

    return 0;
}