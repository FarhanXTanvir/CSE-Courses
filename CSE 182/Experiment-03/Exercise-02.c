// 2. A C program to check whether a number is negative, positive or zero.

#include<stdio.h>

int main () {

    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    if (n>0){
        printf("%d is positive", n);
        }

    else if (n<0){
        printf("%d is negative", n);
        }

    else {
        printf("It is Zero", n);
    }
return 0;
}
