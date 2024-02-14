#include <iostream>
#include <cmath>

using namespace std;

int main ()
{
    int i;

    cout <<  "x(degrees)    sin(x)   cos(x)" << endl;
    for(i=0; i<=180; i=i+15)
    {
        printf("    %d       %.3f     %.3f\n", i, sin(i*3.1416/180), cos(i*3.1416/180));
    }
    return 0;
}