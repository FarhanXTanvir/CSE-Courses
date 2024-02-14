// 2. Write a C program to find HCF (GCD) of two numbers.

#include <stdio.h>

int main()
{
    int t, i, n1, n2, min, hcf;

    for(t=1; t<=3; t++){

    printf("Enter any two positive integers: ");
    scanf("%d %d", &n1, &n2);

    min = (n1<n2) ? n1 : n2;

    hcf =  1;
    for(i=1; i<=min; i++){

        if(n1%i==0 && n2%i==0){
            hcf = i;
        }
    }

    printf("HCF of %d and %d is %d.\n", n1, n2, hcf);
    }

    return 0;
}
