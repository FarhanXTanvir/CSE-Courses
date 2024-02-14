#include <iostream>

using namespace std;

int main ()
{
    int M, P, C;

    cout << "Marks of Mathematics, Physics and Chemistry are: ";
    cin >> M >> P >> C;

    if ((M>=60 && P>=50 && C>=40 && (M+P+C)>=200) || (M+P) >=150)
    {
        cout << "eligible";
    }
    else
    {
        cout << "not-eligible";
    }
    return 0;
}