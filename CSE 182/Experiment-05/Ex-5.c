// 5. Write a C program to print all Prime numbers between 1 to n.

#include <stdio.h>

int main (){

    int t, i, j, n, flag;

    for(t=1; t<=3; t++){
        printf("\nEnter the value of n: ");
        scanf("%d", &n);

        for (i = 2; i <= n; i++){

            for(j=2, flag = 1; j<i; j++){
            if (i%j == 0){
                flag = 0;
                break;
            }
        }
        if (flag==1){
        printf("%d ", j);
        }
        else{
            continue;
        }
        }
    }
return 0;
}
