// 1. A C program to find maximum between three numbers.

#include<stdio.h>

int main () {

    int a, b, c;

    printf("Enter three numbers: ");
    scanf("%d%d%d", &a, &b, &c);


    if (a>b){
        if(a>c){
            printf("Max = %d", a);
        }
        else{
            printf("Max = %d", c);
        }
    }
    else if (b>c){
        printf("Max = %d", b);
    }
    else {
        printf("Max = %d", c);
    }
return 0;
}
