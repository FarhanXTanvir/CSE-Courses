#include <stdio.h>
#include <math.h>

int main ()
{
    int a, b, c, x;

    printf("Enter the values of a, b and c accordingly: ");
    scanf("%d %d %d", &a, &b, &c);

    if(a==0 && b==0)
    {
        printf("No solution");
    }
    else if(a==0)
    {
        printf("x: %d", x = -c/b);
    }
    else if(b*b-4*a*c <0)
    {
        printf("No real roots");
    }
    else
    {
    x = (-b + sqrt(b*b-4*a*c))/2*a;
    printf("Roots: x1 = %x, ", x);
    x = (-b - sqrt(b*b-4*a*c))/2*a;
    printf("Roots: x2 = %x", x);
    }
    return 0;
}