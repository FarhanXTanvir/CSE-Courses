//10. A C++ program to check whether a matrix is an identity matrix or not.

#include <iostream>

using namespace std;

int main ()
{
    int A[10][10], i, j, m, n, flag = 1;

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
        if(flag == 0 && m!=n){
            break;
        }
        for(j=0; j<n; j++)
        {
            if(i == j && A[i][j] == 0){
                flag == 0;
                break;
            }
            if(i != j && A[i][j] != 0){
                flag = 0;
                break;
            }
        }
    }
    if(flag==1){
        cout << "Identity matrix" << endl;
    }
    else{
        cout << "Non identity matrix" << endl;
    }
    return 0;
}
