#include <stdio.h>

int main ()
{
    int i, n, sum = 0;

    printf("Enter the nth term: ");
    scanf("%d", &n);

    for(i=1; i<=n; i=i+2)
    {
        sum = sum + i*i;
    }
    printf("Sum: %d", sum);

    return 0;
}