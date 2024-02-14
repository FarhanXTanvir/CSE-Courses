// 3. A C++ program to perform Scalar matrix multiplication.

#include <iostream>

using namespace std;

int main ()
{
    int A[10][10], B[10][10], M[10][10]={0}, i, j, k, m, n;

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
            for(k=0; k<m; k++)
            {
            M[i][j] = M[i][j] + A[i][k]*B[k][j];
            }
        }
    }
    cout << "A + B: " << endl;
    for(i=0; i<m; i++)
    {
        for(j=0; j<n; j++)
        {
            cout << M[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}

