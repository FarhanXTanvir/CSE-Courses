// 3. A C++ program to sort arrays using pointers and functions.
#include <iostream>

using namespace std;

void scanArray (int *num, int n)
{
	cout << "Enter the elements: ";
	for(int i=0; i < n; i++)
	{
		cin >> num[i];
	}
	return;
}
void printarray(int *num, int n)
{
	for(int i = 0; i < n; i++)
	{
		cout << num[i] << " ";
	}
	cout << endl;
}
void bubbleSort(int *num, int n)
{
	for(int i=0; i < n-1; i++)	// For iterations
	{
		int isSorted = 1;
		for(int j=0; j < n-1; j++)  // For passes
		{
			if(num[j] > num[j+1])  
			{
				int temp = num[j];
				num[j] = num[j+1];
				num[j+1]= temp;
				isSorted = 0;
			}
		}
		if(isSorted == 1)
		{
			return;
		}
	}
}
int main ()
{
	int T;

	cout << "Test Cases: ";
	cin >> T;
	for(int t=0; t < T; t++)
	{
		int num[100], n;
		cout << "Total elements: ";
		cin >> n;
		scanArray (num, n);  // Before Sorting
		bubbleSort(num, n);

		cout << "Sorted Array: ";
		printarray(num, n);	
	}
	return 0;
}
