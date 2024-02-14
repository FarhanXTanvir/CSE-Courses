#include <iostream>

using namespace std;

int main ()
{
    int i, n;

    cout << "Enter the nth term: ";
    cin >> n;

    for(i=1; i<=n; i=i+2)
    {
        cout << i << " ";
    }
    cout << endl;
    i=1;
    while(i<=n)
    {
        cout << i << " ";
        i = i+2;
    }
    cout << endl;
    i = 1;
    do
    {
        cout << i << " ";
        i = i+2;
    } while (i<=n);
    
}