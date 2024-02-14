// Problem Statement-02: A C++ program to check a Tree is BST or not
#include<bits/stdc++.h>
using namespace std;
int lft[100], rht[100], val[100], tot_node = 0;
vector <int> num(100);

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
    num.push_back(val[node]);
    Inorder(rht[node]);
}
bool isSorted(vector <int> num, int n)
{
    for(int i=1; i<n; i++)
    {
        if(num[i-1]>num[i]){return 0;}
    }
    return 1;
}
int main() {
    int i, j, k;
    int n; cout << "Total Nodes: "; cin >> n;
    int root = -1;
    // initialize all the values -1
    memset(lft, -1, sizeof lft);
    memset(rht, -1, sizeof rht);
    // take the input values
    cout << "Enter the nodes: ";
    for (i = 0; i < n; i++) {
        cin >> k;
        if (root == -1) {
            root = tot_node;
            val[root] = k;
        }
        else {
            Insert(root, k);
        }
    }
    cout << "Inorder Traversal: "; Inorder(root);

    if(isSorted(num, n)){cout << "\nBST";}
    else{cout << "\nNot a BST";}
}
