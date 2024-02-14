// 2. A C program to print all negative elements in an array.

#include <stdio.h>

int main ()
{
    int i, t, T, n, num[100];

    printf("Test Cases: ");
    scanf("%d", &T);
    for(t=0; t < T; t++)
    {
        printf("Total elements: ");
        scanf("%d", &n);

        printf("Enter the elements: ");
        for(i = 0; i < n; i++)
        {
            scanf("%d", &num[i]);
        }   
        printf("Negative elements: \n");
        for(i = 0; i < n; i++)
        {
            if(num[i] < 0)
            {
                printf("%d ", num[i]);
            }
        }
        printf("\n");
    }
    return 0;
}
