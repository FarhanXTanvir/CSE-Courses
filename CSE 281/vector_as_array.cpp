#include <bits/stdc++.h>
using namespace std;

void print(vector <int> v)
{
    cout << "Vector Size: " << v.size() << endl;
    for(int i=0; i<v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
}
int main ()
{
    vector <int> v(10); // Vector declared with 10 memory slots alloted
    int i = 2;

    cout << "Vector Size: " << v.size() << endl;  // Empty vector

    v.push_back(i);  // Input/push element from the end/back of the vector
    v.push_back(4); // one after another sequencially: 2 4
    v.push_back(6); // 2 4 6
    
    print(v);  // prints the elements of the vector

    v.pop_back(); // The last elements pops out of the vector/removed
    
    print(v);

    v[0] = 9; v[3] = 12;
    print(v);
    for(int i=4; i<=6; i++)
    {
        cin >> v[i];
    }
    print(v);
    cout << v.back() << endl; // prints last/back element of the vector
    cout << v.front() << endl; // prints first/front element of the vector

    return 0;
}   