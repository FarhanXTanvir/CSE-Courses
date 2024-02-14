// 5. Write a C program to count number of digits in any number.

#include <stdio.h>

int main (){

    int t, T, num, count;

    printf("Test Cases: ");
    scanf("%d", &T);

    for(t=1; t<=T; t++){
        printf("\nEnter the number: ");
        scanf("%d", &num);

        count = 0;
        while(num!=0){

            num = num/10;
            count++;
        }
        printf("Number of digits is : %d \n", count);
    }
return 0;
}
