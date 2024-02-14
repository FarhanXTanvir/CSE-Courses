#include <iostream>

using namespace std;

int main ()
{
    int a, b, max, lcm;

    cin >> a >> b;

    max = (a>b)?a:b;

    while(1)
    {
        if(max%a==0 && max%b==0)
        {
            lcm = max;
            break;
        }
        else max++;
    }
    cout << "LCM: " << lcm;
    return 0;
}