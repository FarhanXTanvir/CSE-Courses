#include <bits/stdc++.h>
using namespace std;

bool isSorted(int *num, int n)
{
    for(int i=1; i<n; i++)
    {
        if(num[i-1]>num[i]){return 0; break;}
    }
    return 1;
}
int main()
{
    int n; cout << "Array Size: "; 
    cin >> n; int num[n];
    cout << "Enter the integers: " << endl;
    for(int i = 0; i<n; i++)
    {
        cin >> num[i];
    }
    if(isSorted(num, n)){cout << "YES";}
    else{cout << "NO";}
    return 0;
}
