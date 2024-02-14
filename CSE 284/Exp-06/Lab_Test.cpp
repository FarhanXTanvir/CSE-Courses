/* Create class named "Trapezium"
Area = 0.5*(b1+b2)*h
*/

#include <bits/stdc++.h>
using namespace std;
class Trapezium{
    double base1, base2, height;

    public:
    double area()
    {
        return 0.5*(base1+base2)*height;
    }
    Trapezium()
    {
        //base1 = 0, base2 = 0, height = 0;
    }
    Trapezium(double b1, double b2, double h)
    {
        base1 = b1, base2 = b2, height = h;
    }
    Trapezium(double b, double h)
    {
        base1 = b, base2 = b, height = h;
    }
};
int main()
{
    Trapezium t1; 
    cout << "Area of Trapezium-1: " << t1.area() << endl;

    Trapezium t2(10, 7, 5); 
    cout << "Area of Trapezium-2: " << t2.area() << endl;

    Trapezium t3(10, 5); 
    cout << "Area of Trapezium-3: " << t3.area() << endl;
    
    return 0;
}
