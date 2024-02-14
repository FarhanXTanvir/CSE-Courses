#include <iostream>

using namespace std;

int main ()
{
    int i, n, sum;

    cout << "Enter the nth term: ";
    cin >> n;
    
    sum = 0;
    for(i=1; i<=n; i++)
    {
        sum = sum + i;
    }
    cout << "For-sum: " << sum << endl;

    sum = 0, i=1;
    while(i<=n)
    {
        sum = sum + i;
        i++;
    }
    cout << "While-sum: " << sum << endl;

    sum = 0,i = 1;
    do
    {
        sum = sum + i;
        i++;
    } while (i<=n);
    cout << "Do-sum: " << sum << endl;
    return 0;
}