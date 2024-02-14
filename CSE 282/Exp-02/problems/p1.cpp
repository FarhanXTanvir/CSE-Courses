// 1. Take 5 integer values into a stack. Find the summation of all the stack elements.
#include <bits/stdc++.h>
using namespace std;

int main ()
{
    stack <int> s;
    int n, sum = 0;
    for(int i = 0; i < 5; i++)
    {
        cin >> n;
        s.push(n);
    }
    while(!s.empty())
    {
        sum = sum + s.top();
        s.pop();
    }
    cout << "Sum: " << sum;

    return 0;
}