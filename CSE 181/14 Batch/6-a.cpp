#include <iostream>

using namespace std;

int main ()
{
    int a=8, b=7, c=-10;

    cout << "(i) " << ((a||b) && (a&&b)) << endl;
    cout << "(ii) " << ((b==10) && (c==-10)) << endl;
    cout << "(iii) " << ((a%2==0) || (b%3==7)) << endl;
    cout << "(iv) " << ((a!=8) && (b!=7)) << endl;
    cout << "(v) " << ((a>b) || (b>c)) << endl;

return 0;
}