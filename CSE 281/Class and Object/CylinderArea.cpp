#include <bits/stdc++.h>
using namespace std;

class cylinder
{
    public:
    double height;
    double radius;
    double area ()
    {
        double A = 2*3.1416*radius*(radius + height);
        return A; 
    }
} c1;
int main()
{
    cout << "Enter the height of the cylinder: "; cin >> c1.height;
    cout << "Enter the radius of the cylinder: "; cin >> c1.radius;

    cout << "Area of the cylinder: " << c1.area();
    return 0;
}

