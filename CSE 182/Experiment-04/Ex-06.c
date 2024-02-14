// 6. Write a C program to find first and last digit of any number.

#include<stdio.h>

int main()
{
    int t, T, n, FirstDigit, LastDigit;

    printf("Test Cases: ");
    scanf("%d", &T);

    for(t=1; t<=T; t++){

        printf("\nEnter a number = ");
        scanf("%d", &n);

        LastDigit = n % 10;

        while(n >= 10)
        {
            n = n / 10;
        }
        FirstDigit = n;

        printf("First Digit: %d and Last Digit:  %d\n", FirstDigit, LastDigit);
    }
return 0;
}
