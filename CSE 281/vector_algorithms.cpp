#include <bits/stdc++.h>
using namespace std;

void print(vector <int> v)
{
    cout << "Vector Size: " << v.size() << endl;
    for(int i=0; i<v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl << endl;
}
int main ()
{
    vector <int> v = {7, 2, 3, 5, 2, -1}; // Vector declared with 6 unsorted elements
    int i;

    print(v);  // prints the elements of the vector - Bofore

    sort(v.begin(), v.end()); // Sorts the elements: Non-decreasing order
    cout << "Sorting-Non-decreasing order" << endl;
    print(v); // prints the elements of the vector - After

    sort(v.rbegin(), v.rend()); // Sorts the elements: Non-increasing order
    cout << "Sorting-Non-increasing order" << endl;
    print(v); // prints the elements of the vector - After

    sort(v.begin(), v.begin()+4); // Partial Sorting-4 elements: Non-decreasing order
    cout << "Partial Sorting-Non-decreasing order" << endl;
    print(v); // prints the elements of the vector - After

    for(int i=0; i<v.size(); i++)
    {
        cin >> v[i];
    }
    cout << "New Vector: " << endl;
    print(v);

    reverse(v.begin(), v.end()); // Reverse the order of the elements
    cout << "Back: " << v.back() << endl; // prints last/back element of the vector
    cout << "Front: " << v.front() << endl; // prints first/front element of the vector
    cout << "Reversed order of New Vector: " << endl;
    print(v);

    reverse(v.begin(), v.end()-3); // Reverse the order of the elements partially
    cout << "Partially Reversed order of New Vector: " << endl;
    print(v);

    v.clear();
    cout << "Vector Size: " << v.size() << "(Cleared)" << endl;

    if(v.empty())
    {
        cout << "Is empty?: " << v.empty() << endl;
        v.push_back(5);
    }
    else
    {
        cout << "Is empty?: " << v.empty() << endl;
        for(int i = 0; i<v.size(); i++)
        {
            cin >> v[i];
        }
    }
    for(auto u:v) // auto u detects vector type and u:v stores elements in u (each iteration)
    {
        cout << u << " ";  // u = contains vector elements one by one // 
    }

    return 0;
}   