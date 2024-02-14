// 9. A C++ program to check whether a matrix is sparse or not.

#include <iostream>

using namespace std;

int main ()
{
    int A[10][10], i, j, m, n, count0 = 0;

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
            if(A[i][j]==0){
                count0 ++;
            }
        }
    }
    if(count0 > m*n/2){
        cout << "sparse" << endl;
    }
    else{
        cout << "non-sparse" << endl;
    }
    return 0;
}
