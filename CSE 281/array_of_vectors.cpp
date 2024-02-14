#include <bits/stdc++.h>
using namespace std;

void print(vector <int> v)
{
    cout << "vector Size: " << v.size() << endl;
    for(int i=0; i<v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
}
int main ()
{
    vector <int> v[10]; // Array of 10 vectors // 2D Array
    int i = 2;
    v[0].resize(7);

    cout << "vector Size: " << v[0].size() << endl;  // Empty vector

    v[0].push_back(i);  // Input/push element from the end/back of the vector
    v[0].push_back(4); // one after another sequencially: 2 4
    v[0].push_back(6); // 2 4 6
    
    print(v[0]);  // prints the elements of the vector

    v[0].pop_back(); // The last elements pops out of the vector/removed
    
    print(v[0]);

    v[0][0] = 9; v[0][3] = 12;
    print(v[0]);
    for(int i=4; i<=6; i++)
    {
        cin >> v[0][i];
    }
    print(v[0]);
    cout << v[0].back() << endl; // prints last/back element of the vector
    cout << v[0].front() << endl; // prints first/front element of the vector

    return 0;
}   