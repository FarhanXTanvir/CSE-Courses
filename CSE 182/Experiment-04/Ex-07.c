// 7. Write a C program to calculate sum of digits of any number.

#include <stdio.h>

int main()
{
    int t, T, n, r, sum;

    printf("Test Cases: ");
    scanf("%d", &T);

    for(t=1; t<=T; t++){

        printf("\nEnter a number: ");
        scanf("%d", &n);

        sum = 0;
        while(n != 0)
        {
            r = n % 10;
            sum = sum + r;

            n = n/10;
        }

        printf("Sum: %d\n", sum);
    }
return 0;
}
