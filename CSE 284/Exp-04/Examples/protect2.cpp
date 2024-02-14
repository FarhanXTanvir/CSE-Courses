#include <bits/stdc++.h>
using namespace std;

class A{
    protected:
    int x;

    public: 
    void getx()
    {
        cout << "Value of x: " << x << endl;
    }
};
class B: public A{
    public:
    void retx(){
        x = 10;
        cout << "Value of x: " << x;
    }
}ob;
int main()
{
    // ob.x = 10;
    ob.getx();
    ob.retx();
    return 0;
}