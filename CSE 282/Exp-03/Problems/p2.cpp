// 2. A C++ program to implement the Selection Sort algorithm using a function(Argument passed and no Return value).

#include <iostream>
using namespace std;

void selectionSort(int *arr, int n)
{
    int i, j, min_id;

    // One by one move boundary of unsorted subarray
    for (i = 0; i < n-1; i++)
    {
        // Find the minimum element in unsorted array
        min_id = i;
        for (j = i+1; j < n; j++)
        {
            if (arr[j] < arr[min_id])
            {
                min_id = j;
            }
        }
        // Swap the found minimum element with the first element
        swap(arr[min_id], arr[i]);
    }
}

int main()
{
    int arr[] = {64, 25, 12, 22, 11};
    int n = 5;
    selectionSort(arr, n);
    cout << "Sorted array: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    } cout << endl;
    return 0;
}
