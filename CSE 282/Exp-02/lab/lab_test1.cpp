#include <bits/stdc++.h>
using namespace std;

int main ()
{
    vector <int> num;
    int n, even;

    for(int i=0; i<10; i++)
    {
        cin >> n;
        num.push_back(n);
    }
    for(int i=0; i < num.size(); i++)
    {
        if(num[i]%2==0)
        {
            even++;
        }
    }
    cout << "Even numbers: " << even;


    return 0;
}
