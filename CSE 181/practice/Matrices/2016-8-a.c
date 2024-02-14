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
    int A[10][10]= {{1, 2, 3},{4, 2, 1}, {1, 1, 1}}, B[10][10]={{1, 2},{2, 2}, {1, 1}}, C[10][10] = {0};

    printf("Matrix A:\n");
    printArr(A, 3, 3);
    printf("Matrix B:\n");
    printArr(B, 3, 2);
    
    for(int i=0; i<3; i++)
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
    printArr(C, 3, 2);
}