#include <iostream>

using namespace std;

int main ()
{
    int x= 10, y=20, m=2, n=3, p=4, q=5;

    cout << "(a1) ((x-(y/5)+2)%8)+25 => " << ((x-(y/5)+2)%8)+25 << endl;
    cout << "(a2) ((x-y/5+2)%8)+25 => " << ((x-y/5+2)%8)+25 << endl;
    cout << "(a3) (x-y/5+2)%8+25 => " << (x-y/5+2)%8+25 << endl;
    cout << "(a4) x-y/5+2%8+25 => " << x-y/5+2%8+25 << endl;
    cout << "(b1) ((x-y)*p)+q => " << ((x-y)*p)+q << endl;
    cout << "(b2) (x-y)*p+q => " << (x-y)*p+q << endl;
    cout << "(b3) x-y*p+q => " << x-y*p+q << endl;
    cout << "(c1) (m*n)+(-x/y) => " << (m*n)+(-x/y) << endl;
    cout << "(c2) m*n+(-x/y) => " << m*n+(-x/y) << endl;
    cout << "(c3) m*n+-x/y => " << m*n+-x/y << endl;
    cout << "(d1) x/(3*y) => " << x/(3*y) << endl;
    cout << "(d2) x/3*y => " << x/3*y << endl;
    
    return 0;
}