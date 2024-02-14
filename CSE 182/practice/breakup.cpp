#include <iostream>
#include <math.h>
using namespace std;

int main ()
{
    long int a, b;
    int t, T, p, flag;

    cin >> T;
    for(t=0; t<T; t++)
    {
        flag = 0;
        cin >> a >> b;
        if(a <= pow(10, 9) && b <= pow(10, 9))
        {
            for(p=2; p<a; p++)
            {
                if((a*b)%p==0)
                {
                    if(a%p==0 && b%p!=0)
                    {
                        cout << p << endl;
                        flag = 1;
                        break;
                    }
                }
            }
            if(flag==0)
            {
                cout << "-1" << endl;
            }
        }

    }
}