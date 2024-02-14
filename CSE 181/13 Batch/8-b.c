#include <stdio.h>

int main ()
{
    int x, *p, y;

    x=10;
    p = & x;
    y=*p;
    *p=20;

    printf("x: %d, y: %d", x, y);
}