// 1. A C++ program to implement the insertion sort algorithm using a function(Argument passed and no Return value).
#include <iostream>
using namespace std;

void insertionSort(int *arr, int n)
{
    for(int i=1; i<n; i++)
    {
        int temp = arr[i];
        int j;
        for(j = i-1; j>=0 && arr[j]>temp; j--)
        {
            arr[j+1] = arr[j];
        }
        arr[j+1] = temp;
    }
}

int main() {
    int arr[] = {5, 4, 10, 1, 6, 2};

    int n = 6;

    insertionSort(arr, n);

    for(int i=0; i<n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
