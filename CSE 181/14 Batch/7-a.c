#include <stdio.h>
#include <math.h>
int main ()
{
    int i, n, r, d, sum = 0;

    printf("Enter any number: ");
    scanf("%d", &n);

    d=n;
    for(i=1; d>0; i++)
    {
        r = d%10;
        sum = pow(r, 3) + sum;
        d=d/10;
    }
    if(sum==n)
    {
        printf("Armstrong Number");
    }
    else
    {
        printf("Non-Armstrong Number");
    }

    return 0;
}