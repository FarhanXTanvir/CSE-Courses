// 3. A C++ program to get the largest element of an array using the function.

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
void compare(int A[100], int n)
{
    int largest;
    A[0]>A[1]? largest = A[0]: largest = A[1];
    for(int i=0; i < n; i++)
    {
        if(A[i]>largest)
        {
            largest = A[i];
        }
    }
    cout << "Largest element of the array: " << largest;
}
int main ()
{
    int A[100];
    int n = scanArr (A);
    compare (A, n);
    return 0;
}
