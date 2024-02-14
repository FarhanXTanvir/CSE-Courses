#include <stdio.h>

int main()
{
    int t, i, j, n, flag;

    for(t=1; t<=3; t++){
    printf("\nEnter any number to print Prime factors: ");
    scanf("%d", &n);

    printf("All Prime Factors of %d are: ", n);

    /* Find all Prime factors */
    for(i=2; i<=n; i++)
    {
        /* Check 'i' for factor of num */
        if(n%i==0)
        {
            /* Check 'i' for Prime */
            flag = 1;
            for(j=2; j<=i/2; j++)
            {
                if(i%j==0)
                {
                    flag = 0;
                    break;
                }
            }

            if(flag==1)
            {
                printf("%d ", i);
            }
        }
    }
    }
    return 0;
}
