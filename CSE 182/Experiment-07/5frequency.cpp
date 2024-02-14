// 5. A C++ program to count the frequency of each element in an array.
#include <iostream>

using namespace std;

int main ()
{
    int t, T, i, n; 

    cout << "Total cases: ";
    cin >> T;
    for(t=0; t<T; t++)
    {
    int count=0, arr[100], vis[100] = {0};
    cout << "Total elements: ";
    cin >> n;

    cout << "Enter the elements: ";
    for(i=0; i<n; i++)
    { 
        cin >> arr[i];
    }
    for(i=0; i < n; i++)
    { 
        vis[arr[i]]++;
    }
    cout << "Frequency of elements: \n" ; 
    for(i=0; i < 100; i++)
    { 
        if(vis[i]>=1)
        {
            cout << "Frequency of "<< i << " : " << vis[i] << endl;
        }
    }
    cout << endl;
    }    
    return 0;
}