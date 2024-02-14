#include <bits/stdc++.h>
using namespace std;

#define optimize() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl '\n' 

int main ()
{
    optimize();
    vector <string> s = {"Abcd", "abcd", "abcD" ,"abdc", "abc", "abcdE", "dcba"};

    sort(s.begin(), s.end());

    for(auto u:s){cout << u << " ";} 

    return 0;
}