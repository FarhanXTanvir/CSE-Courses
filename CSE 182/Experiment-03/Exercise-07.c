// 7. A C program to find all roots of a quadratic equation.

#include<stdio.h>
#include<math.h>

int main () {

    float a, b, c, x1, x2;

    printf(" a : ");
    scanf("%f", &a);

    printf(" b : ");
    scanf("%f", &b);

    printf(" c : ");
    scanf("%f", &c);

    x1 = (-b + sqrt(b*b - 4*a*c))/(2*a);
    x2 = (-b - sqrt(b*b - 4*a*c))/(2*a);

    printf("The quadric roots are: %.2f, %.2f", x1, x2);

    return 0;
    }
