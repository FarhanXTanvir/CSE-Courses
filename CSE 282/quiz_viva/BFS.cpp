#include <bits/stdc++.h>
using namespace std;

vector <int> adj[100];
queue <int> q;
int vis[1000];

void check(int x)
{
    
    if(vis[x]==0)
    {
        vis[x] = 1;
    }
}

void BFS(int s)
{
    q.push(s);
    for()

}
int main()
{
    int u, v;

    int n, m;

    cout << "Number of nodes: "; cin >> n;
    cout << "Number of edges: "; cin >> m;

    cout << "Enter the connections: \n";
    for(int i = 0; i<m; i++)
    {
        cin >> u >> v;
        adj[u].push_back(v); adj[v].push_back(u);
        check(u), check(v);
    }
    int r; cout << "root "; cin >> r;
    BFS(r);

    
    return 0
}