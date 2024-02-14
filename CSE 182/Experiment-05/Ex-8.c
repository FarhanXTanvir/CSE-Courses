// 8. Write a C program to check whether a number is Strong number or not.

#include <stdio.h>

int main()
{
    int t, i, org, n, last, sum;
    long f;

    for(t=1; t<=3; t++){

    printf("\nEnter any integer to check Strong number: ");
    scanf("%d", &n);

    org = n;
    sum = 0;

    while(n > 0)
    {

        last = n % 10;

        f = 1;
        for(i=1; i<=last; i++)
        {
            f = f * i;
        }

        sum = sum + f;

        n = n / 10;
    }

    if(sum == org)
    {
        printf("%d is a Strong Number", org);
    }
    else
    {
        printf("%d is not a Strong Number", org);
    }
    }
    return 0;
}
