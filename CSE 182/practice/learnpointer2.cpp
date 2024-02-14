
#include <iostream>

using namespace std;

int main ()
{
    int x = 60, y = 40, sum;
    int *p = &x, *q = &y;

    sum = *p+*q;

    cout << "Sum : " << sum;
    return 0;
}