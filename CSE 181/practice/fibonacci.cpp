#include <iostream>

using namespace std;

int main ()
{
    int a, b, c, i, n;

    cout << "Enter the number of terms: ";
    cin >> n;

    cout << "Fibonacci Series: 0 1";

    for(a = 0, b = 1, i=0; i < n-2; i++)
    {
        c = a+b;
        cout << " " << c;

        a = b;
        b = c;  // 0 1 1 2 3 5....n
    }
    return 0; 
}