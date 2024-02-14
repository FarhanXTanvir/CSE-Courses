#include <iostream>

using namespace std;

int main ()
{
    int a=5, b=10, c=-8;
    cout << "(i) " << (a>b && a<c) << endl;     // 0
    cout << "(ii) " << (a<b && a>c) << endl;    // 1
    cout << "(iii) " << (a==c||b>a) << endl;    // 1
    cout << "(iv) " << (b>15 && c<0 || a>0) << endl;    // 1
    cout << "(v) " << (a/2.0==0.0 && b/2.0!=0.0||c<0.0);    // 1
    return 0;
}