// 4. A C program to copy all elements from an array to another array.

#include <stdio.h>

int main ()
{
    int i, t, T, n, a[100], b[100];
    
    printf("Test Cases: ");
    scanf("%d", &T);
	for(t=0; t < T; t++)
	{
		printf("Total elements: ");
        scanf("%d", &n);
		
		printf("Enter the elements: ");
		for(i = 0; i < n; i++)
		{
			scanf("%d", &a[i]);
		}
		printf("Copied elements to another array: ");
		for(i = 0; i < n; i++)
		{
			b[i] = a[i];
			printf("%d ", b[i]);
		}
		printf("\n\n");
	}
    return 0;
}
