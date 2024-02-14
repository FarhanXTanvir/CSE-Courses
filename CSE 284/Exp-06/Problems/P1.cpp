// 1. Write a C++ Program to display the reverse of a number using the Friend function.

#include <bits/stdc++.h>
using namespace std;
class number{
    public:
    int n;
    friend void reverse(number);
};
void reverse(number x)
{
    int r;
    cout << "Reversed number of " << x.n << " is ";
    for(int i=10; x.n > 0; i*10)
    {
        r = x.n%i;
        x.n = x.n/i;
        cout << r;
    }
}
int main()
{
    number x;
    cout << "Enter a Number: "; cin >> x.n;
    reverse(x);
    return 0;
}