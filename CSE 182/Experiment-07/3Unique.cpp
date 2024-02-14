// 3. A C++ program to print all unique elements in the array.
#include <iostream>

using namespace std;

int main ()
{
    int t, T, i, n,  arr[100], unq[100];

    cout << "Total cases: ";
    cin >> T;
    for(t=0; t<T; t++)
    {
        int count=0, vis[100] = {0};
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
                unq[count] = arr[i];  
                count++;              
                vis[arr[i]] = 1;
            }
        }
        cout << "Unique elements: "; 
        for(i=0; i<count; i++)
        { 
            cout << unq[i] << " ";
        }
        cout << endl << endl;
    }
    return 0;
}