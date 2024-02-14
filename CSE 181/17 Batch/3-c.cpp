#include <iostream>

using namespace std;

int main ()
{
    int a, b, c, lowest;

    cout << "Enter any three integers: ";
    cin >> a >> b >> c;

    if(a>b)
    {
        if(c>b)
        {
            lowest = b;
        }
        else
        {
            lowest = c;
        }
    }
    else
    {
        if(c>a)
        {
            lowest = a;
        }
        else
        {
            lowest = c;
        }
    }
    cout << "Lowest: " << lowest;
    return 0;
}