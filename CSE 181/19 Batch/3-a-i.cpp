#include <iostream>

using namespace std;

int main ()
{
    int n;

    cout << "Enter an integer: ";
    cin >> n;

    if (n%2==0)
    {
        cout << "NUMBER IS EVEN";
    }
    else
    {
        cout << "NUMBER IS ODD";
    }
    return 0;
}