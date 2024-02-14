// Write a C program to check whether year is leap year or not using condi�tional/ternary operator.

#include<stdio.h>

int main()
{
    int year;

    printf("Enter the Year: ");
    scanf("%d", &year);

    (year % 100 == 0) ?
    ( (year % 400 == 0)?
    (printf("%d is leap year\n", year)):
    (printf("%d is not leap year\n", year))
    ) :
    ( (year % 4 == 0)?
    (printf("%d is leap year\n", year)):
    (printf("%d is not leap year\n", year))
    );
    return 0;
}
