#include <bits/stdc++.h>
using namespace std;

#define optimize() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl '\n' 
/* struct pair
{
    int first;
    int second;
} p; */
int main ()
{
    optimize();
    pair <int, int> p = {1, 2}, q;

    cout << p.first << " " << p.second << endl;
    
    p.first = 4, p.second = 3;
    cout << p.first << " " << p.second << endl;
    
    p.first = p.first + 5;
    cout << p.first << " " << p.second << endl;

    p = make_pair(10, 12);
    cout << p.first << " " << p.second << endl;


    q = {12, 10};
    bool r =p<q;
    cout << r << endl;

    q = {10, 11};
    r =p<q;
    cout << r << endl;

    return 0;
}