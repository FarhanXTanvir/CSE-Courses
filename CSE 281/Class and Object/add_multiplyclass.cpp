#include <bits/stdc++.h>
using namespace std;
class num
{
    public:
    int n, m;

    int add ()
    {
        int sum = n+m;
        return sum;
    }
    int prod ()
    {
        int p = n*m;
        return p;
    }
} x;
int main()
{
    cout << "Enter two integers: "; cin >> x.n >> x.m;
    cout << "Sum: " << x.add() << endl << "Product: " << x.prod();
    
    return 0;
}