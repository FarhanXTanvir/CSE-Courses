// 8. Write a C program to enter any number and print its reverse.

#include <stdio.h>

int main()
{
    int t, T, n, x;

    printf("Test Cases: ");
    scanf("%d", &T);

    for(t=1; t<=T; t++){
        printf("\nEnter a number: ");
        scanf("%d", &n);

        printf("Reversed number: ");
        while(n != 0)
        {
            x = n % 10;
            printf("%d", x);

            n = n/10;
        }
        printf("\n");
    }
return 0;
}
