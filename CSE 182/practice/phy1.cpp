#include <iostream>

using namespace std;

int main ()
{
    int  v, t, i, T;

    cin >> T;
    for(i=0; i<T; i++){
        cin >> v >> t;
        if((-100 <= v && v <= 100) && (0<= t && t <= 200))
        {
            cout << v*2*t << endl;
        }
    }
    return 0;
}