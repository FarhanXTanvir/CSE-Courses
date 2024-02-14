// 6. Write a C program to find sum of all prime numbers between 1 to n.

#include <stdio.h>

int main (){

    int t, i, j, n, flag, sum ;

    for(t=1; t<=3; t++){
        printf("Enter the value of n: ");
        scanf("%d", &n);

        sum = 0;
        for (i = 2; i <= n; i++){

            for(j=2, flag = 1; j<i; j++){
            if (i%j == 0){
                flag = 0;
                break;
            }
        }
        if (flag==1){
            sum = sum + j;
        }
        else{
            continue;
        }
        }
        printf("Sum: %d\n\n", sum);
    }
return 0;
}
