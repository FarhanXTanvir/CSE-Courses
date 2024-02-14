#include <iostream>

using namespace std;

int count (int sum, int x, int d)
{
    if(d<x)
    {
        d++;
        sum = 2*count(sum, x, d);
                                   //  5! = 5*4! = 5*4*3!....5*4*3*2*1!
        return sum;
    }
    if(d==x)
    {
        return sum;
    }
    return -1;
}
int main ()
{
    int i, n, d;

    cout << "Enter the number of ints,  days and current day: ";
    cin >> i >> n >> d;
    cout << count(i, n, d);
    return 0;
}