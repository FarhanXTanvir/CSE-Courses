#include <stdio.h>

void printArr (int X[10][10],int m,int n)
{
    for(int i=0; i<m; i++)
    {
        for(int j=0; j<n; j++)
        {
            printf("%d ", X[i][j]);
        }
        printf("\n");
    }
}
int main ()
{
    int A[10][10]={{1, 2, 7},{5, 4, 8}}, B[10][10]= {{3, 2},{6, 4},{9, 10}}, C[10][10] = {0};

    printf("Matrix A:\n");
    printArr(A, 2, 3);
    printf("Matrix B:\n");
    printArr(B, 3, 2);
    
    for(int i=0; i<2; i++)
    {
        for(int j=0; j<2; j++)
        {
            for(int k=0; k<3; k++)
            {
                C[i][j] += A[i][k]*B[k][j];
            }
        }
    }
    printf("Matrix C:\n");
    printArr(C, 2, 2);
    return 0;
}