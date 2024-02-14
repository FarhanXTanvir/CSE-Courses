
#include<bits/stdc++.h>
using namespace std;
int lft[100], rht[100], val[100], tot_node = 0;
// Tree construction
void Insert(int root, int v) {
    if (val[root] < v) {
        if (rht[root] != -1) {
            Insert(rht[root], v);
        }
        else {
            tot_node++;
            rht[root] = tot_node;
            val[tot_node] = v;
        }
    }
    else {
        if (lft[root] != -1) {
            Insert(lft[root], v);
        }
        else {
            tot_node++;
            lft[root] = tot_node;
            val[tot_node] = v;
        }
    }
}
// Traverse method
void Inorder(int node) {
    if (node == -1) {return;}
    Inorder(lft[node]);
    cout << val[node] << " ";
    Inorder(rht[node]);
}
int main() {
    int i, j, k;
    int n;
    cin >> n;
    int root = -1;
    // initialize all the values -1
    memset(lft, -1, sizeof lft);
    memset(rht, -1, sizeof rht);
    // take the input values
    for (i = 0; i < n; ++i) {
        cin >> k;
        if (root == -1) {
            root = tot_node;
            val[root] = k;
        }
        else {
            Insert(root, k);
        }
    }
    Inorder(root);
}
