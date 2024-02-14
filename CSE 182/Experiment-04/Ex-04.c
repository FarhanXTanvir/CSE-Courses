// 4. Write a C program to find sum of all natural numbers between 1 to n.

#include<stdio.h>

int main ()
{
int t, T, i, sum, n;

    printf("Test Cases: ");
    scanf("%d", &T);

    for(t=1; t<=T; t++){
        printf("\nEnter the value of n: ");
        scanf("%d",&n);

        sum = 0;
        for(i=1; i<= n; i++){
            sum = sum + i;
        }
    printf("Sum: %d\n", sum);
    }
return 0;
}
