#include <iostream>

using namespace std;

int main ()
{
    int a, b, min, gcd;

    cin >> a >> b;

    min = (a<b)?a:b;

    for(int i = 1; i<=min; i++)
    {
        if(a%i==0 && b%i==0)
        {
            gcd=i;
        }
    }
    cout << "GCD: " << gcd;
    return 0;
}