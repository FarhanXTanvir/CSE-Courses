// 3. Write a C program to find LCM of two numbers.

#include <stdio.h>

int main(){

    char str4[] = {'c'};
    int t, n1, n2, max;

    for(t=1; t<=3; t++){
    printf("Enter two positive integers: ");
    scanf("%d %d", &n1, &n2);

    max = (n1>n2)? n1: n2;

    while(1){
        if(max%n1 == 0 && max%n2 == 0){
            break;
        }
        max++;
    }
    printf("LCM: %d\n", max);
    }
    return 0;
}

