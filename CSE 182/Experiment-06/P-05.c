// 5. A C program to find the reverse of an array.

#include <stdio.h>

int main ()
{
    int t, T, i, j, n, num[100], reverse[100];
    
    printf("Test Cases: ");
    scanf("%d", &T);
    for(t=0; t < T; t++)
	{
        printf("Total elements: ");
        scanf("%d", &n);

        printf("Enter the elements: ");
        for(i = 0;i < n; i++)
        {
            scanf("%d", &num[i]);
        }
        printf("Reversed: ");
        for(i = 0, j=n-1; i < n; i++, j--)
        {
            reverse[i] = num[j];
            printf("%d ", reverse[i]);
        }
        printf("\n\n");
	}
    return 0;
}
