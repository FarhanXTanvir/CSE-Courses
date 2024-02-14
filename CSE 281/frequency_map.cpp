#include <bits/stdc++.h>
using namespace std;

#define optimize() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl '\n' 

// Without using map
int main ()
{
    optimize();
    int a[7] = {1, 2, 3, 2, 4, 2, 3} /* f[10] = {0} */;
    map <int, int> f;

    for(int i =0; i<7; i++)
    {
        f[a[i]]++;
    }
    for(auto u:f)
    {
        cout << u.first << " " << u.second << endl;
    }

    return 0;
}