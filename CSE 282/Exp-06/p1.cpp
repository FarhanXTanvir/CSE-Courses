// Problem Statement-01: A C++ program to find the Inorder, Preorder, and Postorder traversals
// of the BST having values = {20, 10, 3, 2. 7, 9, 80, 100, 65, 43, 21, 47, 32, 21}.
#include <bits/stdc++.h>
using namespace std;

int lft[100], rht[100], val[100], tot_node = 0;

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

void Inorder(int node) {
    if (node == -1) {
        return;
    }
    Inorder(lft[node]);
    cout << val[node] << " ";
    Inorder(rht[node]);
}

void Preorder(int node) {
    if (node == -1) { return; }
    cout << val[node] << " ";
    Preorder(lft[node]);
    Preorder(rht[node]);
}

void Postorder(int node) {
    if (node == -1) { return; }
    Postorder(lft[node]);
    Postorder(rht[node]);
    cout << val[node] << " ";
}

int main() {
    int n; 
    cout << "Total Nodes: "; cin >> n;
    int root = -1;
    
    memset(lft, -1, sizeof lft);
    memset(rht, -1, sizeof rht);
    
    cout << "Enter the nodes: ";
    for (int i = 0; i < n; ++i) {
        int k; cin >> k;
        if (root == -1) {
            root = tot_node;
            val[root] = k;
        }
        else {
            Insert(root, k);
        }
    }
    cout << "Inorder Traversal: ";
    Inorder(root); cout << endl;
    
    cout << "Preorder Traversal: ";
    Preorder(root); cout << endl;
    
    cout << "Postorder Traversal: ";
    Postorder(root); cout << endl;

    return 0;
}