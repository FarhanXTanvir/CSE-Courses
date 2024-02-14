#include<bits/stdc++.h>
using namespace std;
int lft[100], rht[100];

void Inorder(int node) 
{
    if (node == -1) { return; }

    Inorder(lft[node]);
    cout << node << " ";
    Inorder(rht[node]);
}
int main() 
{
    int i, j, k, r;
    int n;
    cout<< "Number of nodes:" <<endl;  cin >> n;

    cout<< "Enter nodes: " <<endl;
    for (i = 1; i <=n; ++i) 
    {
        cout<<"Root: ";
        cin>> r;
        cout<< "L " << " R " <<endl;
        cin >> lft[r] >> rht[r];
    }
    int root = 1;
    cout<<"\nInorder Traversal: "<<endl;
    Inorder(root);
    cout << endl;
}