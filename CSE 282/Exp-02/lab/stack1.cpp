#include <bits/stdc++.h>
using namespace std;

int main ()
{
    int n;
    stack <int> mystack;

    for(int i=0; i< 10; i++)
    {
        cin >> n;
        mystack.push(n);
    }
    while(!mystack.empty())
    {
        cout << mystack.top();
        mystack.pop();
    }
    
    return 0;
}
