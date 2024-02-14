#include <bits/stdc++.h>
using namespace std;
class Polygon{
    public:
    int a, b, c;
};
class Triangle: protected Polygon{
    private:
    int h;

    public:
    Triangle(int x, int y, int z){
        a = x;
        b = y;
        c = z;
    }
    void area()
    {
        cout << "Enter the height of the triangle: "; cin >> h;
        cout << "Area of the triangle: " << 0.5*b*h << endl << endl;
    }
    void perimeter()
    {
        cout << "Perimeter of the triangle: " << a+b+c << endl;
    }
};
int main()
{
    Triangle T(3, 4, 5);
    T.area();
    T.perimeter();

    return 0;
}