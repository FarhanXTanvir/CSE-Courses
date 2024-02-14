#include <iostream>

using namespace std;

int fact (int x)
{
    int f;
    if(x>1)
    {
        f = x*fact(x-1); //  5! = 5*4! = 5*4*3!....5*4*3*2*1!
        return f;
    }
    if(x==0 || x==1)
    {
        f = 1;
        return f;
    }
    return -1;
}
int main ()
{
    int n;

    cout << "Enter any integer: ";
    cin >> n;
    cout << fact(n);
    return 0;
}