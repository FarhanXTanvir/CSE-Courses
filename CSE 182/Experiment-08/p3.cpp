// 3. A C++ program to perform Scalar matrix multiplication.

#include <iostream>

using namespace std;

int main ()
{
    int A[10][10], k, i, j, m, n;

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
    cout << "\nk= ";
    cin >> k;
    for(i=0; i<m; i++)
    {
        for(j=0; j<n; j++)
        {
            A[i][j]= k*A[i][j];
        }
    }
    cout << "A multiplied by k: " << endl;
    for(i=0; i<m; i++)
    {
        for(j=0; j<n; j++)
        {
            cout << A[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}

