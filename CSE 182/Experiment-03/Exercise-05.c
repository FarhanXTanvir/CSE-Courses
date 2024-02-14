// 5. A C program to input all sides of a triangle and check whether triangle is valid or not.

#include<stdio.h>

int main () {

    int a, b, c;

    printf("Enter three sides of triangle: ");
    scanf("%d %d %d", &a, &b, &c);

    if ((a+b) > c && (b+c) > a && (c+a) > b)
    {
        printf("It is a valid triangle");
    }
    else 
    {
        printf("It is an invalid triangle");
    }
    return 0;
}
