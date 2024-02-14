#include <bits/stdc++.h>
using namespace std;

class rectangle {
    private:
        double width = 10;
        double length = 5;
    public:
        double AP(char x)
        {
            double A = width*length;
            double P = 2*(length + width);
            if(x=='A')
            {
                return A;
            }
            else
            {
                return P;
            }
        }
};

int main()
{
    rectangle r;
    double Area = r.area('A');
    cout << Area;
}