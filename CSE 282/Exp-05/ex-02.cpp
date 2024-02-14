#include<bits/stdc++.h>
using namespace std;
int lft[100], rht[100];

void Preorder(int node) 
{
    if (node == -1) { return; }
    cout << node << " " ;
    Preorder(lft[node]);
    Preorder(rht[node]);
}
int main() 
{
    int i, j, k, r;
    int n;
    cout<< "Number of nodes:" <<endl;
    cin >> n;
    cout<< "Enter nodes: " <<endl;
    for (i = 1; i <=n; ++i) 
    {
        cout<< "Root: ";
        cin>>r;
        cout<< "L " << " R " <<endl;
        cin >> lft[r] >> rht[r];
    }
    int root = 1;
    cout<<"\nPreorder Traversal: "<<endl;
    Preorder(root);
    cout << endl;
}