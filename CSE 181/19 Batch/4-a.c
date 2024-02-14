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
    int A[10][10]= {{1, 2},{2, 4},{1, 0}}, B[10][10]={{1, 2, 4},{1, 3, 5}}, C[10][10] = {0};

    printf("Matrix A:\n");
    printArr(A, 3, 2);
    printf("Matrix B:\n");
    printArr(B, 2, 3);
    
    for(int i=0; i<3; i++)
    {
        for(int j=0; j<3; j++)
        {
            for(int k=0; k<2; k++)
            {
                C[i][j] += A[i][k]*B[k][j];
            }
        }
    }
    printf("Matrix C:\n");
    printArr(C, 3, 3);
}