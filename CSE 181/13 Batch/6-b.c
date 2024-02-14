#include <stdio.h>

int main ()
{
    int m, n, a, b, x;

    {
        m=5, n=15;
        a = m++;
        b = --n;
        x = a++ - --b;
        printf("m: %d, n: %d, a: %d, b: %d\n", m, n, a, b);
    }
    {
        m=5, n=10;
        a = --m;
        b = n++;
        x = ++a + --b;
        printf("m: %d, n: %d, a: %d, b: %d", m, n, a, b);
    }

}