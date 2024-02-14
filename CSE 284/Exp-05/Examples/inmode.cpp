#include <bits/stdc++.h>
using namespace std;

class base{
    private:
        int pvt1 = 5, pvt2 = 10;

    public:
        int addPvt()
        {
           return pvt1+pvt2;
        }
};
class child: public base{
    
}x;
int main()
{
    cout << x.addPvt();
    return 0;
}