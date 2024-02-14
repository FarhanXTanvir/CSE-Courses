#include <bits/stdc++.h>
using namespace std;
class Cylinder;
class Circle{
    int radius;
    friend void circumference(Circle, Cylinder);
}C;
class Cylinder{
    int height;
    friend void circumference(Circle, Cylinder);
}Cd;
void circumference(Circle x, Cylinder y){
    cout << "Radius: "; cin >> x.radius;
    cout << "Height: "; cin >> y.height;
    cout << "Circumference: " << 2*3.1416*x.radius*y.height;
};
int main()
{
     circumference(C, Cd);
    return 0;
}