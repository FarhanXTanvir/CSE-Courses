// 4. Write a C program to check whether a number is Prime number or not.

#include <stdio.h>

int main (){

    int t, i, n, flag;

    for(t=1; t<=3; t++){
        printf("Enter a number: ");
        scanf("%d", &n);

        flag = 1;
        for (i = 2; i < n; i++){

            if (n%i == 0){
                flag = 0;
                break;
            }
        }
        if (flag==1){
        printf("Prime number\n\n");
        }
        else{
            printf("Not a Prime number\n\n");
        }
    }
    return 0;
}
