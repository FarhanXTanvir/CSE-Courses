// 7. Write a C program to enter any number and print its prime factors.

#include <stdio.h>

int main()
{
    int t, i, j, n, flag;

    for(t=1; t<=3; t++){

    printf("\nEnter an integer to print Prime factors: ");
    scanf("%d", &n);

    printf("All Prime Factors of %d are: ", n);

    for(i=2;  i<=n; i++)
    {
        if(n%i==0)
        {
            for(j=2, flag = 1; j<i; j++)
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
