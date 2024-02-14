#include <iostream>

using namespace std;

void printMat(int X[10][10], int m, int n)
{
    for(int i=0; i<m; i++)
    {
        for(int j=0; j<n; j++)
        {
            cout << X[i][j] << " ";
        }
        cout << endl;
    }
}
int main ()
{
    int A[10][10]= {
        {1, 2}, {2, 4}, {1, 0}
    };
    int B[10][10]= {
        {1, 2, 4}, {1, 3, 5}
    }, C[10][10] = {0}, i, j, k;

    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            for(k=0; k<2; k++)
            {
                C[i][j]+=A[i][k]*B[k][j];
            }
        }
    }
    printMat(C, 3, 3);
    return 0;
}