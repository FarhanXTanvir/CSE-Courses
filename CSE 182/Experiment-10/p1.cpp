// A C++ Program to change the value of a constant integer using pointers.

#include <iostream>

using namespace std;

int main ()
{
    int x, t, T;

    cout << "Test Cases: ";
    cin >> T;
    for (t=0; t<T; t++)
    {
        int *p = &x;
        cout << "Enter x: ";
        cin >> x;
        cout << "Before changing pointer value: " << x << endl;
        cout << "Change pointer value: ";
        cin >> *p;
        cout << "After changing pointer value: " << x << endl;
    }
    return 0;
}
