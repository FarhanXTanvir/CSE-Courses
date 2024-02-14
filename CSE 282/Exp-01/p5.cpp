// Write a C++ program to subtract two complex numbers.
#include <iostream>
using namespace std;

struct complex
{
    int real;
    int img;
} c1, c2, c3;
complex takeComplex ()
{
    struct complex c;
    cout << "a = ";
    cin >> c.real;
    cout << "b = ";
    cin >> c.img;

    return c;
}
void subComplex (complex c1, complex c2)
{
    c3.real = c1.real - c2.real;
    c3.img = c1.img - c2.img;

    if (c3.img >=0)
    {
        cout << "Result: " << c3.real << " + "<< c3.img << "i";
    }
    else
    {
        cout << "Result: " << c3.real << c3.img << "i";
    }
}
int main ()
{
    cout << "Enter the 1st complex number as a+ib: " << endl;
    c1 = takeComplex ();

    cout << "Enter the 2nd complex number as a+ib: " << endl;
    c2 = takeComplex ();

    subComplex (c1, c2);

    return 0;
}
