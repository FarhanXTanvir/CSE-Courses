#include <stdio.h>

int main ()
{
    int x, *p, y;

    x=10;
    p=&x;
    y=*p-1;
    p=&y;
    x=*p;

    printf("x: %d, y: %d", x, y);
    return 0;
}