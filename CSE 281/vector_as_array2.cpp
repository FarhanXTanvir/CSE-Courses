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
    vector <int> v = {10, 11, 12, 13}; // Vector declared with 10 memory slots alloted
    int i = 13;

    cout << "Vector Size: " << v.size() << endl;  // Empty vector

    v.push_back(i);  // Input/push element from the end/back of the vector
    v.push_back(14); // one after another sequencially
    v.push_back(15); // 10 11 12 13 14 15
    
    print(v);  // prints the elements of the vector

    v.pop_back(); // The last elements pops out of the vector/removed
    
    print(v);

    v[0] = 20; v[3] = 25;
    print(v);
    for(int i=4; i<v.size(); i++)
    {
        cin >> v[i];
    }
    print(v);
    cout << v.back() << endl; // prints last/back element of the vector
    cout << v.front() << endl; // prints first/front element of the vector

    return 0;
}   