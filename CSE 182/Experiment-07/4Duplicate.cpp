// 4. A C++ program to count the total number of duplicate elements in an array.
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
    for(i=0; i<n; i++)
    {                      
        if(vis[arr[i]]==0) 
        {
            vis[arr[i]] = 1;      
        }
        else if(vis[arr[i]]==1)
        {
            count++;       
        }
    }
    cout << "Total number of duplicate elements: "; 
        
    cout << count << endl << endl;
        
    }
    return 0;
}