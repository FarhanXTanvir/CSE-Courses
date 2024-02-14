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
    vector <vector <int>> v; // Declared Vector of vector
    vector <int> x = {1, 2, 3, 4};

    v.push_back(x);
    cout << "Vector Size: " << v.size() << endl;  // vector
    cout << "Vector[0]_of_vector Size: " << v[0].size() << endl;  // index-0 vector

    
    vector <string> z = {"Farhan", "Tanvir", "22"};
    cout << "Vector of string Size: " << z.size() << endl;

    vector <pair<int, int>> p = {{10, 12}};
    cout << "Vector of pairs Size: " << p.size() << endl;
    cout << "Pair0: " << p[0].first << " " << p[0].second << endl;  // pair1

    return 0;
}   