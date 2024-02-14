#include <iostream>

using namespace std;

int main ()
{
    int i, n, countu=0, countf=0, arr[100], frq[100]={0}, frqn[100] = {0}, unq[100], vis[100] = {0};

    cout << "Total elements: ";
    cin >> n;

    cout << "Enter the elements: ";
    for(i=0; i<n; i++)
    { 
        cin >> arr[i];
    }
    for(i=0; i<n; i++)
    {                       // arr : 1 5 1 4 5 1
        if(vis[arr[i]]==0)  // vis : 0 0 0 0 0 0 0 0 0 0 0 0......0 0
        {
            unq[countu] = arr[i];  // unq : 0 0 0 0 0 0 0 0 0 0 0 0......0 0
            countu++;        // count = 0  // vis : 0 0 0 0 0 0 0 0 0 0 0 0......0 0
            vis[arr[i]] = 1;      
        }
        else
        {
            frq[arr[i]] = frq[arr[i]]+1;  // frq : 0 0 0 0 0 0 0 0 0 0 0 0......0 0
            countf++;        // count = 0  // vis : 0 0 0 0 0 0 0 0 0 0 0 0......0 0
            vis[arr[i]] = 1;      
        }
    }
    cout << "Unique elements: "; 
        for(i=0; i<countu; i++)
        { 
            cout << unq[i] << " ";
        }
        cout << endl;
    for(i=0; i<countu; i++)
    {
        {
            frqn[i]= frq[unq[i]];
        }
    }
    cout << "Frequency of elements: \n" ; 
        for(i=0; i<countu; i++)
        { 
            cout << unq[i] << " : " << frqn[i]+1 << endl;
        }
        cout << endl;
    return 0;
}