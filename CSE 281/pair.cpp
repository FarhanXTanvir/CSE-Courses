#include <bits/stdc++.h>
using namespace std;
 
struct pair
{
    int first;
    int second;
} p, q;
int main ()
{
    p = {1, 2};
    cout << p.first << " " << p.second << endl;

    p.first = 5; p.second = 6;
    cout << p.first << " " << p.second << endl;

    return 0;
}