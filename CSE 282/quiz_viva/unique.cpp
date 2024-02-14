#include <bits/stdc++.h>
using namespace std;

int vis[1000];
vector <int> unq;

void check(int x)
{
    if(vis[x]==0)
    {
        unq.push_back(x);  
        vis[x] = 1;
    }
}

int main()
{
    int n; cout << "Number of elements: "; cin >> n;
    int num[n];

    cout << "Enter the elements:\n";
    for (int i = 0; i < n; i++)
    {
        cin >> num[i];
        check(num[i]);
    }
    for(auto u: unq){cout << u << " ";}
    
    return 0;
}