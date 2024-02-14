// 1. A C program to print all natural numbers in reverse (from n to 1). - using while loop

#include<stdio.h>

int main () {

    int t, T, i, n;

    printf("Test Cases: ");
    scanf("%d", &T);

    for(t=1; t<=T; t++){

    printf("\nEnter the starting number: ");
    scanf("%d", &n);

    printf("Series: ");

    i= n;
    while(i >= 1){

        printf("%d ", i);
        i--;
    }
    printf("\n");
}

return 0;
}
