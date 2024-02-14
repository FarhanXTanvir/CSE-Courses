// A C++ program to find the maximum and minimum elements from an array.
#include <iostream>

using namespace std;

void bubbleSort(int *num, int n)
{
	int isSorted = 0;

	for(int i=0; i < n; i++)		// 12, 23, 35, 15, 11
	{
		isSorted = 1;
		for(int j=0; j < n; j++)  // For iterations
		{
			if(num[j] > num[j+1])  // For passes
			{
				int temp = num[j];
				num[j] = num[j+1];
				num[j+1]= temp;
				isSorted = 0;
			}
		}
		if(isSorted)
		{
			return;
		}
	}
}

int main ()
{
    int num[100], n, i;

    cout << "Number of elements: ";
    cin >> n;

    cout << "Enter the elements: ";
    for(i=0; i<n; i++)
    {
        cin >> num[i];
    }

	bubbleSort(num, n);
    cout << "Max: " << num[n-1] << endl << "Min: " << num[0];

	return 0;
}
