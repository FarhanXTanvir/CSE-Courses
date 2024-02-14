//2. A C++ program to add two numbers using pointers.

#include <iostream>

using namespace std;

int main ()
{
    int x, y, sum, t, T;
    int *p = &x, *q = &y;

    cout << "Test Cases: ";
    cin >> T;
    for(t=0; t<T; t++)
    {
        cout << "Enter x and y: ";
        cin >> x >> y;
        sum = *p + *q;
        cout << "Sum: " << sum << endl;
    }
    return 0;
}
