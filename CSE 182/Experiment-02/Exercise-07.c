// 7.	Write a C program to check whether a number is even or odd using conditional/ternary operator.

#include<stdio.h>

int main()
{
    int n;
    printf("Enter the Number: ");
    scanf("%d", &n);

    n%2 == 0?(printf("Even")):(printf("Odd"));
    
    return 0;
}
