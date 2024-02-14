// 5. A C++ program to find the sum of the minor diagonal elements of a matrix.

#include <iostream>

using namespace std;

int main ()
{
    int A[10][10], S = 0, i, j, m, n;

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
    for(i=0, j=n-1; i<m && j>=0; i++, j--)
    {
        S = S + A[i][j];
    }
    cout << "Sum: " << S << endl;
    
    return 0;
}

