// 3. A C++ program to perform Scalar matrix multiplication.

#include <iostream>

using namespace std;

int main ()
{
    int A[10][10], t, T, i, j, m, n;

    cin >> T;
    for(t=0; t<T; t++){
    int B[10] = {0};
    cin >> m >> n;

    for (i=0; i<m; i++)
    {
        for(j=0; j<n; j++)
        {
            cin >> A[i][j];
        }
    }
    for(i=0; i<m; i++)
    {
        for(j=0; j<n; j++)
        {
            B[i] = B[i] + A[i][j];
        }
    }
    for(i=0; i<m; i++)
    {
        cout << B[i] << endl;
    }
    cout << endl;
    }
    return 0;
}

