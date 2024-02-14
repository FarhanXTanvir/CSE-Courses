#include <bits/stdc++.h>
using namespace std;
//Forward Definition
class Y{
    private:
        string sy ="Y: We are friends, right?\n";
        void sad(){cout << "Y: Thanks for everything blud!";}
        friend class X;
};
class X{
    private:
        string sx = "X: I don't consider you as my friend. We are just classmates\n";
    public:
        void accessY(Y y){
            cout << y.sy  << sx;
        }
        void displayY(Y y){y.sad();}
};

int main()
{
    X x; Y y;
    x.accessY(y);
    x.displayY(y);

    return 0;
}