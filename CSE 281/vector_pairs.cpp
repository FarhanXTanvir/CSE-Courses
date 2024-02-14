#include <bits/stdc++.h>
using namespace std;

#define optimize() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl '\n' 

int main ()
{
    optimize();
    vector < pair <int, int> > p = {{1, 2}, {1, 3}, {2, 1}, {4, 5}};

    cout << p[0].first << " " << p[0].second << endl << endl;

    sort(p.begin(), p.end());
    for(auto u:p){cout << u.first << " " << u.second << endl;}
    cout << endl;

    p.push_back({4, 5});
    int size = unique(p.begin(), p.end()) - p.begin();
    for(int i = 0; i<size; i++){cout << p[i].first << " " << p[i].second << endl;}
    cout << endl;

    reverse(p.begin(), p.end());
    for(auto u:p){cout << u.first << " " << u.second << endl;}
    cout << endl;

    
    p.pop_back();
    for(int i = 0; i<size; i++){cout << p[i].first << " " << p[i].second << endl;}
    cout << endl;
    
    return 0;
}