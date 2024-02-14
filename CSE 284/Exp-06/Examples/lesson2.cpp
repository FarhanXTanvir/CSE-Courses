#include <bits/stdc++.h>
using namespace std;
// Forward declaration of the friend class.
class Y;
class X{
    private:
    int nX = 10;
    friend int add(X, Y); //Declared Common friend of class X and Y.
};
class Y{
    private:
    int nY = 5;
    friend int add(X, Y); // declared again    
};
int add(X a, Y b){
    return (a.nX + b.nY);
}
int main()
{
    X x;
    Y y;
    cout << add(x, y);
    return 0;
}