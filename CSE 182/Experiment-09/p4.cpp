// 4. A C++ program to find the reverse of an array using the function.

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
void reverse (int A[100], int n)
{
    int R[100];
    for(int i = 0; i<n; i++)
    {
        R[i] = A[n-1-i];
        cout << R[i] << " ";
    }
}

int main ()
{
    int n, A[100];
    n = scanArr(A);
    cout << "Reverse of the array: ";
    reverse(A, n);

}
