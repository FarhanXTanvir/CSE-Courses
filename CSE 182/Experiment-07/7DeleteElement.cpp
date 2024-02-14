// 7. A C++ program to delete an element from an array.

#include <iostream>

using namespace std;
    
int main ()
{
    int t, T, i, del, pos, n;

    cout << "Total cases: ";
    cin >> T;
    for(t=0; t<T; t++)
    {
    char ch[100];
    cout << "Total elements: ";
    cin >> n;

    cout << "Enter the elements: ";
    for(i=0; i<n; i++)
    { 
        cin >> ch[i];
    }

    cout << "Delete position: ";   
    cin >> pos;

    del=0;
    for(i=pos-1; (pos < n && pos >= 0) && i < (n-1); i++)
    {
        ch[i] = ch[i+1];
        del = 1;
    } 
    if(del==0)
    {
        cout << "Item doesn't exist" << endl;
        cout << "Updated Array: ";
        for(i=0; i<n; i++)
        {
            cout << ch[i] << " ";
        }
        cout << endl;
    }
    else{
        cout << "Updated Array: "; // After deleting element
        for(i=0; i<n-1; i++)
        {
            cout << ch[i] << " ";
        }
        cout << endl;  
    }
    cout << endl;
    }
    return 0;
}