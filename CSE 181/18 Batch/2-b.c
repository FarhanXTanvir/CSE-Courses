#include <stdio.h>

int main ()
{
    int m = -13, n = 3;  // (i)

    printf("%d\n", m%n*10);

    for(m=0; m<3; m++)  // (ii)
    {
        printf("%d\n",(m%2)?m:m+2);
    }
}