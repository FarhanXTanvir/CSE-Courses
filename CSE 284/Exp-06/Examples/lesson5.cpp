#include <bits/stdc++.h>
using namespace std;
// Forward Declaration
class Z;
class Y{
    private:
        string sy ="X is my friend. He can access my private data.\n";
        friend class X;
};
class X{
    private:
        string sx = "I don't consider Y as my friend. I just use Y. Z is my friend.\n";
        friend class Z;
    public:
        void accessY(Y y){
            cout << "Y: " << y.sy; // Y is talking via X
        }
        void accessZ(Z z);
};

class Z{
    private:
        string sz = "We are friends, X.\n";
        friend class X;
    public:
        void accessX(X x){
            cout << "X: " << x.sx;
        }
};

void X:: accessZ(Z z){
            cout << "Z: " << z.sz; // Z is talking via X
}
int main()
{
    X x; Y y; Z z;
    x.accessY(y);
    z.accessX(x);
    x.accessZ(z);

    return 0;
}
/*
    public:
        /*void accessX(X x){
            cout << "Y: " << "x.sx << Oops!! inaccessible.\n";
        }*/