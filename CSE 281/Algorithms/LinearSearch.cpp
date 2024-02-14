#include <iostream>
using namespace std;

int main ()
{
    int Lst [10] = {5, 7, 1, 6, 2, 4, 10, 8, 3, 9};

    for(int i=0; i<10; i++)
    {
        if(Lst[i]==4)
        {
            cout << "Position of 4: " << i+1;
            break;
        }
    }
    return 0;
}