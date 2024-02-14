#include <bits/stdc++.h>
using namespace std;
class Cylinder;
class Circle{
    private:
    double radius;
    friend void area(Circle, Cylinder);
} C;
class Cylinder{
    private:
    double height;
    friend void area(Circle, Cylinder);
} Cd;

void area(Circle X, Cylinder Y){
    cout << "r: "; cin >> X.radius;
    cout << "h: "; cin >> Y.height;
    cout << "Area: " << 2*3.1416*X.radius*(X.radius + Y.height);
}

int main()
{
    area(C, Cd);

    return 0;
}