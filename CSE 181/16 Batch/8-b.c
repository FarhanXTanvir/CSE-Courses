// 4. Write a C program to check whether a number is Prime number or not.

#include <stdio.h>

int checkPrime (int n)
{
    int flag = 1;
    for (int i = 2; i <= n/2; i++)
    {
        if (n%i == 0){
            flag = 0;
            break;
        }
    }
    return flag;
}
int main (){

    int i, n, flag;

    printf("Enter a number: ");
    scanf("%d", &n);

    flag = checkPrime(n);
    if (flag==1)
    {
    printf("Prime number\n\n");
    }
    else
    {
        printf("Not a Prime number\n\n");
    }
    return 0;
}
