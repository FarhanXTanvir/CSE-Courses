#include <iostream>

using namespace std;

void printArray(int *num, int n)
{

	for(int i=0; i < n; i++)
	{
		cout << num[i] << " " ;
	}
	cout << "\n";
}

void updateArray(int *num)
{
	num[0]= 10;
}
int updatevar (int n)
{
    n = n + 5;
    cout << "Inside: " << n << endl;
}

int main ()
{
	// int num[] = {12, 23, 35, 15, 11}, n = 5;
	// int num[] = {1, 2, 3, 4, 5}, n = 5;
	int num[100] = {1, 2, 4, 3, 5}, n = 5;

	printArray(num, n);  // Before update
	updateArray(num);
	printArray(num, n);	 // After update

    cout << n << endl; // Before
    n = updatevar (n);
    cout << "Outside: " << n; // After

	return 0;
}
