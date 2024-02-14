// 8. A C++ program to find the sum of the upper triangular matrix.

#include <iostream>

using namespace std;

int main ()
{
    int A[10][10], i, j, m, n, flag = 1, Upsum=0;

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
    for (i=0; i<m; i++)
    {
        for(j=0; j<n; j++)
        {
            if(j > i){
                Upsum = Upsum + A[i][j];
            }
        }
    }
    cout << "Sum of the upper triangular matrix: " << Upsum;
         
    return 0;
}

