#include <stdio.h>
#include <math.h>

int main ()
{
    float x, A, B, C, a, b, c, d;

    printf("Enter the value of a, b, c and d accordingly: ");
    scanf("%d %d %d %d", &a, &b, &c, &d);

    A = exp(a);
    B = log10(b);
    C = pow(c, d);
    if(B*B >= 4*A*C)
    {
        x = (-B+sqrt(B*B-4*A*C))/(2*A);
        printf("%.3f\n", x);
        x = (-B-sqrt(B*B-4*A*C))/(2*A);
        printf("%.3f", x);
    }
    else
    {
        printf("roots are imaginary");
    }
    return 0;
}