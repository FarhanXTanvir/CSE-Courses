#include <stdio.h>

int main ()
{
    int a, b, c;

    // 1 2 3  1 3 2  3 2 1   2 1 3  
    for(int t=0; t<6; t++)
    {
    printf("Enter three differenet numbers: ");
    scanf("%d %d %d", &a, &b, &c);
    if(a<b)
    {
        if(a<c)
        {
            if(b<c)
            {
                printf("%d %d %d", a, b, c);
            }
            else
            {
                printf("%d %d %d", a, c, b);
            }
        }
        else
        {
            printf("%d %d %d", c, a, b);
        }
    }
    else
    {
        if(b<c)
        {
            if(a<c)
            {
                printf("%d %d %d", b, a, c);
            }
            else
            {
                printf("%d %d %d", b, c, a);
            }
        }
        else
        {
            printf("%d %d %d", c, b, a);
        }
    }
    printf("\n");
    }
    return 0;
}