// 5. A C++ program to find the sum of the main diagonal elements of a matrix.

#include <iostream>

using namespace std;

int main ()
{
    int A[10][10], T = 0, i, j, m, n;

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
    for (i=0, j=0; i<m && j<n; i++, j++)
    {
        if(i==j){
            T = T + A[i][j];
        }
    }
    cout << "Trace: " << T << endl;
    
    return 0;
}

