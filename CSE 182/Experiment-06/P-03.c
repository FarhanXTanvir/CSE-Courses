// 3. A C program to count the total number of even and odd elements in an array.

#include <stdio.h>

int main ()
{
    int t, T, i, n, num[100];

    printf("Test Cases: ");
    scanf("%d", &T);
    for(t=0; t < T; t++)
    {
        int even=0, odd=0;
        printf("Total numbers: ");
        scanf("%d", &n);
        
        printf("Enter the numbers: ");
        for(i = 0; i < n; i++)
        {
            scanf("%d", &num[i]);
        }
        for(i = 0; i < n; i++)
        {
            if(num[i]%2 == 0)
            {
                if(num[i] == 0)
                {
                continue;
                }
                even++;
            }
            else
            {
                odd++;
            }
        }
        printf("Number of even elements: %d\n", even);
        printf("Number of odd elements: %d\n\n", odd);
    }
    return 0;
}
