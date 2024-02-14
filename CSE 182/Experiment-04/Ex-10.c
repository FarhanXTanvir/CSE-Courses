// 10. Write a C program to enter any number and calculate its factorial.

#include <stdio.h>

int main()
{
    int i, n, x, T, t;

    printf("Test Cases: ");
    scanf("%d", &T);


    for(t=1; t<=T; t++){
        printf("\nEnter a number = ");
        scanf("%d", &n);
        printf("%d! = ", n);

        x = 1;
        for(i= n; i > 0; i--){

            x *= i;
            printf("%d*", i);
        }

        printf(" = %d \n", x);
}
return 0;
}
