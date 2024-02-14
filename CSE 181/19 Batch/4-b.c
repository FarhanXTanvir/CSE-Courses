#include <stdio.h>

int main ()
{
    int x, y, a, b;
    int *p, *q, *r, *s;
    
    x=10;
    y=30;
    p=&x;
    q=&y;
    a=*q+*p;
    b=*q-*p;
    r=&b;
    s=&a;
    x=*s;
    y=*r;

    printf("a: %d, b: %d, x: %d, y: %d", a, b, x, y);

}