#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n, m, i, j, a[100], b[100];

    cin >> n >> m;
    if(1 <= n && n <= pow(10, 18) && 1 <= m && m <= 40)
    {
    for(i=0; i<m; i++)
    {
        cin >> a[i];
        if(1 > m && m > 40)
        {
            return 0;
        }
    }
    for(i=1; i<=n; i++)
    {
        for(j=0; j<m; j++)
        {
           if(i%a[j]==0)
            {

            }
        b[i] = i+1; 
        }
        
    }
    }
    return 0;
}
