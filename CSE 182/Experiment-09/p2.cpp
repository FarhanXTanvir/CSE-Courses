// 2. A C++ program to find the diameter, circumference, and area of a circle using functions.

#include <iostream>

using namespace std;

void diameter (float r)
{
    float d = 2*r;
    cout << "Diameter: " << d << endl;
}
void circumference (float r)
{
    float c = 2*3.14*r;
    cout << "Circumference: " << c << endl;
}
void area (float r)
{
    float area = 3.14*r*r;
    cout << "Area: " << area;
}
int main ()
{
    float r;
    cout << "Enter the radius of the circle: ";
    cin >> r;

    diameter (r);
    circumference (r);
    area (r);

    return 0;
}
