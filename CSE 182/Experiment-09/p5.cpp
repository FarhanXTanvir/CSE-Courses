// 5. A C++ program to find the sum of two one-dimensional arrays using the function.

#include <iostream>

using namespace std;

int scanArr (int A[100])
{
    int n;
    cout << "Number of elements: ";
    cin >> n;
    cout << "Enter the elements: ";
    for(int i = 0; i < n; i++)
    {
        cin >> A[i];
    }
    return n;
}
void sum (int A[100], int B[100], int n)
{
    for(int i=0; i < n; i++)
    {
        cout << A[i]+B[i] << " ";
    }
}
int main ()
{
    int A[100], B[100];

    cout << "1st Array: " << endl;
    int n = scanArr(A);
    cout << "2nd Array: " << endl;
    scanArr(B);
    cout << "Sum: ";
    sum (A, B, n);

    return 0;
}
