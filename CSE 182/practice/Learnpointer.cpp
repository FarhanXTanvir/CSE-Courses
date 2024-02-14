#include <iostream>

using namespace std;

int main ()
{
    int x = 60;
    int *p = &x;

    cout << "Value of x: " << x << endl;
    cout << "Address of x: " << &x << endl;
    cout << "Address of x by p: " << p << endl;
    cout << "Value of x pointed address: " << *p << endl;
    return 0;
}