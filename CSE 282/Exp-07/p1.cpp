/* Problem Statment-01: A C++ program for the following Graphs to find the shortest distance from
an arbitrary source to all the nodes.
Code:
*/
#include<bits/stdc++.h>
using namespace std;
vector<int> adj[100];
int dis[100], visited[100];

void Bfs(int source)
{
    queue <int> q;
    dis[source] = 0;
    visited[source] = 1;
    q.push(source);
    while (!q.empty())
    {
        int node = q.front();
        for (int i = 0; i < adj[node].size(); ++i)
        {
            int nxt_node = adj[node][i];

            if (visited[nxt_node]) continue;
            dis[nxt_node] = 1 + dis[node];
            visited[nxt_node] = 1;
            q.push(nxt_node);
        }

        q.pop();
    }
}
int main()
{
    int i, j, k;
    int n, m;
    cout << "No.of Nodes: "; cin >> n;
    cout << "No.of Edges: "; cin >> m;
    cout <<"Enter the edge connections: " << endl;
    for (i = 0; i < m; ++i)
    {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    int source;
    cout <<"Enter the Source Node: "; cin >> source;

    Bfs(source);
    for (i = 0; i < n; ++i)
    {
            cout << "Distance " << source << " to " << i << " = "
            << dis[i] << endl;
    }
}
