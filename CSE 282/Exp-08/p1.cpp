/* Problem Statment-01: A C++ program for the following Graphs to find the shortest distance from an
arbitrary source to all the nodes.
Code:
*/
#include<bits/stdc++.h>
using namespace std;
vector<int> adj[100], lst;
int dis[100], visited[100];

void Dfs(int source)
{
    stack <int> st;
    dis[source] = 0;
    visited[source] = 1;
    st.push(source);
    while (!st.empty())
    {
        int node = st.top();
        lst.push_back(st.top()); st.pop();
        for (int i = 0; i < adj[node].size(); ++i)
        {
            int nxt_node = adj[node][i];
            if (visited[nxt_node]) continue;
            dis[nxt_node] = 1 + dis[node];
            visited[nxt_node] = 1;
            st.push(nxt_node);
        }
    }
}
int main()
{
    int i, j, k;
    int n, m;
    cout<< "No.of Nodes: "; cin >> n;
    cout<< "No.of Edges: "; cin >> m;
    cout<<"Enter the edge connections: " << endl;
    for (i = 0; i < m; ++i)
    {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    int source;
    cout<<"Enter the Source Node: "; cin >> source;

    Dfs(source);
    for(auto u:lst)
    {
        cout << "Distance " << source << " to " << u << " = "
        << dis[u] << endl;
    }
}
