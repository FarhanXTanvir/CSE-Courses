#include <bits/stdc++.h>
using namespace std;
class Circle;
class Cylinder{
    int height;
    friend class Circle;
}Cd;
class Circle{
    int radius;
    int circumference(Cylinder C){
        cout << "Radius: "; cin >> radius;
        cout << "Height: "; cin >> C.height;
        cout << "Circumference: " << 2*3.1416*radius*C.height;
    }
}C;

int main()
{
    C.circumference(Cd);
    return 0;
}