#include <stdio.h>
#include <math.h>

int main ()
{
    int a, b, c, s;
    float A;

    printf("Enter the sides of the triangle: ");
    scanf("%d\n %d %d", &a, &b, &c);

    s = (a+b+c)/2;

    A = sqrt(s*(s-a)*(s-b)*(s-c));

    printf("Area of the triangle is: %.2f", A);
    return 0;
}