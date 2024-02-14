#include <bits/stdc++.h>
using namespace std;
//Forward Definition
class Y{
    private:
        string sy ="Here is Y's Confidential Information.\n";
        friend class X;
};
class X{
    private:
        string sx = "I don't consider Y as my friend. I just use Y.\n";
    public:
        void accessY(Y y){
            cout << "X: " << y.sy << sx;
        }
};

int main()
{
    X x; Y y;
    x.accessY(y);

    return 0;
}