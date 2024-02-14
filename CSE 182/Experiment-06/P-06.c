// 6. A C Program to find the sum of n numbers using array.

#include <stdio.h>

int main()
{
    int t, i, T, n, num [100], sum;
    
    printf("Test Cases: ");
    scanf("%d", &T);
    for(t=0; t < T; t++)
    {
        printf("Total Numbers: ");
        scanf("%d", &n);

        printf("Enter the numbers: ");
        for(i=0, sum = 0; i < n; i++)
        {
            scanf("%d", &num[i]);
            sum = sum + num[i];
        }
        printf("Sum: %d\n\n", sum);
    }
    return 0;
}
