#include <iostream>

using namespace std;

int main ()
{
    char cc;
    int calls;
    float bill;

    cout << "Enter customer code: ";
    cin >> cc;
    cout << "Enter the number of calls: ";
    cin >> calls;

    if(calls<=100)
    {
        bill = 250;
    }
    else
    {
        bill = 250 + 1.25*(calls%100);
    }
    cout << "Customer Code: " << cc << endl;
    cout << "Bill: " << bill;

    return 0;
}