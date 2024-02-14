#include <stdio.h>

int main ()
{
    int x=10, y=5;  // V
    int *p, q;  // *p is a pointer but q is an integer

    // printf("A: x= %d, y = %d, p = %d, q = %d\n", x, y);

     y = *p;
    /* x = q;

    printf("B: x= %d, y = %d, p = %d, q = %d\n", x, y, p, q);*/
    *p = 10;
    q =10;

    printf("C: x= %d, y = %d, p = %d, q = %d\n", x, y, *p, q);


    return 0;
}