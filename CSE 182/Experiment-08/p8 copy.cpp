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
        if(flag == 0){
                break;
            }
        for(j=0; j<n; j++)
        {
            if(j<i && A[i][j] != 0){
                flag = 0;
                break;
            }
        }
    }
    if(flag==1){
        cout << "Upper-Triangular";
    }
    else{
        cout << "Non-Upper-Triangular"; 
    }
    
    return 0;
}

