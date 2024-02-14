#include <bits/stdc++.h>
using namespace std;
class Circle{
    private:
    double radius;
    double area(){
        cout << "Radius of the Circle: "; cin >> radius;
        return 3.1416*pow(radius, 2);
    }
    friend double R(Circle);
} C;
class Cylinder{
    private:
    double height;
    friend double H(Cylinder);
} Cd;

double R(Circle X){
    return sqrt(X.area()/3.1416);
}
double H(Cylinder Y){
    cout << "Height of the Cylinder: "; cin >> Y.height;
    return Y.height;
}


int main()
{
    double r = R(C);
    double h = H(Cd);

    double Ac = 2*3.1416*r*(r+h);
    cout << "Area: " << Ac;

    return 0;
}