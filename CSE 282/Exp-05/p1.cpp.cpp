1// A C++ program to find the Inorder, Preorder and Postorder traversals of the following trees.
#include<bits/stdc++.h>
using namespace std;
int lft[100], rht[100];
void Inorder(int node) {
    if (node == -1){return;}
    Inorder(lft[node]);
    cout << node << " ";
    Inorder(rht[node]);
}
void preorder(int node) {
    if (node == -1){return;}
    cout << node << " ";
    preorder(lft[node]);
    preorder(rht[node]);
}
void postorder(int node) {
    if (node == -1){return;}
    postorder(lft[node]);
    postorder(rht[node]);
    cout << node << " ";
}
int main() {
    cout << "Number of trees: ";
    int t; cin >> t;
    while(t--){
        int i, j, k, r;
        cout <<"Number of nodes: ";
        int n; cin >> n;
        cout <<"Enter the nodes: " << endl;
        for (i = 1; i <=n; i++) {
            cout <<"Root: "; cin >> r;
            cout <<"L   R " <<endl;
            cin >> lft[r] >> rht[r];
        }
        cout << "Enter main root: ";
        int root; cin >> root;
        cout << "Tree : " << t+1 << endl;
        cout << "Inorder Traversal: " << endl;
        Inorder(root); cout << endl;
        cout << "Preorder Traversal: " << endl;
        preorder(root); cout << endl;
        cout << "Postorder Traversal: " << endl;
        postorder(root); cout << endl; //recursively called
    } cout << endl;
}
int factorial(int n):
    if n == 0:  // Base case: factorial of 0 is 1
        return 1
    else: 
        return n * factorial(n - 1)  // Recursive case: call the function with a smaller input

