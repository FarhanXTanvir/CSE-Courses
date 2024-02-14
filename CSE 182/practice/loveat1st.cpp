#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int t, T;
    float A, B;
    int a, b;
    
    cin >> T;
    if(0 <= T && T<=1000)
    {
    for(t=0; t<T; t++)
    {
        cin >> A >> B;
        if(A <= pow(10, 9) && A >= 0 && B <= pow(10, 9) && B >= 0)
        {
            a = pow(10,6)*A;
            b = pow(10,6)*B;
        if(a==b)
        {
            cout << "yes" << endl;
        }
        else
        {
            cout << "no" << endl;
        } 
        }
    }
    }
    return 0;
}
