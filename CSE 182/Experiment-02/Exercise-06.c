// 6.	Write a C program to find maximum between three numbers using conditional/ternary operator.

#include<stdio.h>

int main()
{
    int a, b, c, max;

    printf("Enter Three Numbers: ");
    scanf("%d%d%d", &a, &b, &c);

    max = (a>b && a>c) ? (a):((b>c) ? b:c);

    printf("Maximum Number is = %d\n", max);
}
