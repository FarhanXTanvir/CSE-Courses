#include <bits/stdc++.h>
using namespace std;

class A{
    protected:
    int x;

    public: 
    void getx()
    {
        cout << "Value of x: " << x;
    }
}ob;
int main()
{
    ob.x = 10;
    ob.getx();
    return 0;
}