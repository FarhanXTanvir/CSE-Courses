#include <stdio.h>

int main ()
{
    int x = 10, y=5;
    int *p, q;

    y = *p;
    x = *q;
    *p = 10;
    q = 10;
    print("x=%d and y=%d", x, y);
    return 0;
}