/* Problem Statement-02: A C++ program for the following Graphs to find the shortest distance and path from
an arbitrary source to an arbitrary destination node.
Code:
*/
#include<bits/stdc++.h>
using namespace std;
vector <int> adj[100], path;

int parent[100], dis[100], visited[100];
void shortest_path(int d){
    if (d!=-1){
        int p = parent[d];
        path.push_back(d);
        shortest_path(p);
    }
}
void Bfs(int source) {
    queue<int> q;
    dis[source] = 0;
    visited[source] = 1;
    parent[source] = -1;
    q.push(source);
    while (!q.empty()) {
        int node = q.front();
        for (int i = 0; i < adj[node].size(); i++) {
            int nxt_node = adj[node][i];

            if (visited[nxt_node]) continue;
            dis[nxt_node] = 1 + dis[node];
            visited[nxt_node] = 1;
            parent[nxt_node] = node;
            q.push(nxt_node);
        }
        q.pop();
    }
}

int main() {
    int i, j, k;
    int n, m;
    cout << "No.of Nodes: "; cin >> n;
    cout << "No.of Edges: "; cin >> m;
    cout << "Enter the edge connections: " << endl;
    for(i = 0; i < m; i++) {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    int source, dest;
    cout<<"Enter the Source Node: "; cin >> source;
    cout<<"Enter the Destination Node: "; cin>> dest;

    Bfs(source);
    cout << "Shortest Distance from " << source << " to " << dest << " = " << dis[dest] <<endl;
    cout << "Shortest Path is: "; shortest_path(dest);
    reverse(path.begin(), path.end());
    for(k =0;k<path.size(); k++){
        cout <<path[k] << " ";
    }
}
