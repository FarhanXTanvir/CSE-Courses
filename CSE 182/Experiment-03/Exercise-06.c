// 6. A C program to check whether the triangle is equilateral, isosceles or scalene triangle.

#include<stdio.h>

int main () {

    int a, b, c;

    printf("Enter three sides of triangle: ");
    scanf("%d%d%d", &a, &b, &c);

    if ((a+b) > c && (b+c) > a && (c+a) > b)
    {
        if ( a == b && b == c)
        {
            printf("It is an equilateral triangle");
            // all equal
        }
        else if (a == b || b == c || c == a)
        {
            printf("It is an isosceles triangle");
            // any two equal
        }
        else
        {
            printf("It is an scalene triangle");
            // a != b != c
        }
    }
    else 
    {
        printf("It is an invalid triangle");
    }
    return 0;
}
