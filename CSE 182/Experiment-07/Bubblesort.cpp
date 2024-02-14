#include <iostream>

using namespace std;

void printarray(int *num, int n)
{

	for(int i=0; i < n; i++)
	{
		cout << num[i] << " " ;
	}
	cout << "\n";
}

void bubbleSort(int *num, int n)
{
	int isSorted = 0;

	for(int i=0; i < n-1; i++)		// 12, 23, 35, 15, 11
	{
		isSorted = 1;
		cout << "Iteration " << i+1 << " processing\n";
		for(int j=0; j < n-1; j++)  // For iterations
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
		printarray(num, n);
	}
}

int main ()
{
	// int num[] = {12, 23, 35, 15, 11}, n = 5;
	// int num[] = {1, 2, 3, 4, 5}, n = 5;
	int num[100] = {1, 2, 4, 3, 5}, n = 5;

	printarray(num, n);  // Before Sorting
	bubbleSort(num, n);
	cout << "After sorting: ";
	printarray(num, n);	 // After Sorting

	return 0;
}
