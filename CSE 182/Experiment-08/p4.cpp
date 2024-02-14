// 4. A C++ program to check whether two matrices are equal or not.

#include <iostream>

using namespace std;

void takeMat (int X[10][10], int m, int n)
{
    int i, j;

    

}

int main ()
{
    int A[10][10], B[10][10], i, j, m, n, flag = 1;

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
        if(flag == 0){
            break;
        }
        for(j=0; j<n; j++)
        {
            if(A[i][j]==B[i][j])
            {
                continue;
            }
            else{
                flag = 0;
                break;
            }
        }
    }
    if(flag == 1){
        cout << "A and B are equal." << endl;
    }
    else{
        cout << "A and B are not equal." << endl;
    } 
    return 0;
}

