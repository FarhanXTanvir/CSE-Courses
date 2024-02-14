#include <stdio.h>

int main ()
{
    int i, r, n, d[5];

    printf("Enter a four digit integer: ");
    scanf("%d", &n);
    
    for(i=0; i<4; i++)
    {
        r = n%10;
        n = n/10;
        d[i] = r;   
    }
    for(i=3; i>=0; i--)
    {
        printf("%d\n", d[i]);    
    }
    return 0;
}