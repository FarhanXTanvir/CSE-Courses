#include <iostream>

using namespace std;

int main ()
{
    int a, b;
    float avg;

    cout << "Enter two integers: ";
    cin >> a >> b;

    avg = (float)(a+b)/2;
    cout << "Average: " << avg;

    return 0;
}