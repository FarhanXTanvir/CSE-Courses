#include <iostream>

using namespace std;

int main ()
{
    int i;
    float sum = 0, n;

    cout << "Enter the nth term: ";
    cin >> n;
    for(i=1; i<=n; i++)
    {
        sum = sum + (1/(float)i);
        cout << "1/" << i << " ";
    }
    cout << "\nSum of the series: " << sum;
    return 0;
}