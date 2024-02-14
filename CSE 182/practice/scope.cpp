#include <iostream>

using namespace std;

int main ()
{
    int x = 10;
    cout << "M1: " << x << endl;

    {
        cout << "B1: "<< x << endl;
    }
    {
        int x = 30; // B2
        cout << "B2: "<< x << endl;
    }
    cout << "M2: " << x;
}