// 9. Write a C program to enter any number and print all factors of the number.

#include <stdio.h>

int main()
{
    int t, T, i, n;

    printf("Test Cases: ");
    scanf("%d", &T);

    for(t=1; t<=T; t++){
        printf("\nEnter a number = ");
        scanf("%d", &n);

        for(i = 1; i <= n; i++){

            if(n%i == 0){
                printf("%d ", i);
            }
        }
        printf("\n");
    }
return 0;
}
