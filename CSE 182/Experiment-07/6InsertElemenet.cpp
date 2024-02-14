// 6. A C++ program to insert an element into an array.

#include <iostream>

using namespace std;
    
int main ()
{
    int t, T, n, i;

    cout << "Total cases: ";
    cin >> T;
    for(t=0; t<T; t++)
    {
    char in, ch[100];
    cout << "Total elements: ";
    cin >> n;

    cout << "Enter the elements: ";
    for(i=0; i<n; i++)
    { 
        cin >> ch[i];
    }

    cout << "Insert element: ";
    cin >> in;
    
    ch[n] = in;
    cout << "Updated Array: ";
    for(i=0; i<n+1; i++)
    {
        cout << ch[i] << " ";
    }   // After inserting element
    cout << endl << endl;
    }
    return 0;
}