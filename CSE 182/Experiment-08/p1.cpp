// 1. A C++ program to add two matrices.

#include <iostream>

using namespace std;

int main ()
{
    int A[10][10], B[10][10], S[10][10]={0}, i, j, m, n;

    cout << "Row by Col: ";
    cin >> m >> n;
    cout << "Enter the matrix A: ";
    for (i=0; i<m; i++)
    {
        for(j=0; j<n; j++)
        {
            cin >> A[i][j];
        }
    }
    cout << "Enter the matrix B: ";
    for (i=0; i<m; i++)
    {
        for(j=0; j<n; j++)
        {
            cin >> B[i][j];
        }
    }

    for(i=0; i<m; i++)
    {
        for(j=0; j<n; j++)
        {
            S[i][j] = A[i][j]+B[i][j];
        }
    }
    cout << "A + B: " << endl;
    for(i=0; i<m; i++)
    {
        for(j=0; j<n; j++)
        {
            cout << S[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}

