#include <bits/stdc++.h>
using namespace std;

int vis[1000];
vector <int> unq, adj[1000];

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
    int n; cout << "Number of nodes: "; cin >> n;
    cout << "Enter the edge connections:\n";
    int u, v; cout << "u-v"; 
    for(int i = 0; i< n-1; i++)
    {
        cin >> u >> v;
        adj[u].push_back(v); adj[v].push_back(u);
        check(u); check(v);
    }
    for(int i = 0; i<unq.size(); i++)
    {
        cout << unq[i] << " --> ";
        for(auto u: adj[unq[i]])
        {
            cout << u << " ";
        }
        cout << endl;
    }
    return 0;
}