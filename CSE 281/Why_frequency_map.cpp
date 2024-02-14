#include <bits/stdc++.h>
using namespace std;

#define optimize() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl '\n' 

// Without using map
int main ()
{
    optimize();
    vector <int> a = {-1, 2, -1, 3, 2, 4, 2, 3} /* f[10] = {0} */;
    map <int, int> f;

    for(int i =0; i<a.size(); i++)
    {
        f[a[i]]++;
    }
    for(auto u:f)
    {
        cout << u.first << " " << u.second << endl;
    }
    cout << endl;
    string s;
    vector <string> x;
    while(cin >> s)
    {
        if(s== "done"){break;}
        x.push_back(s);
    }
    map <string, int> g;
    for(int i =0; i<x.size(); i++)
    {
        g[x[i]]++;
    }
    for(auto u:g)
    {
        cout << u.first << " " << u.second << endl;
    }
    return 0;
}