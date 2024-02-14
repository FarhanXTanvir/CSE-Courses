// 1. A C++ program to add two matrices.

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
    int A[10][10] = {{1, 2, 3}, {4, 2, 1}, {1, 1, 1}}, B[10][10]={{1, 2, 3}, {2, 2, 6}, {1, 1, 11}}, S[10][10]={0}, i, j;

    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            S[i][j] = A[i][j]+B[i][j];
        }
    }
    cout << "A + B: " << endl;
    printMat(S, 3, 3);
    
    return 0;
}

