// 1. A C++ program to find the maximum and minimum elements from an array.

#include <iostream>

using namespace std;

int main ()
{
    int t, T, num[100], max, min, n, i;

	cout << "Total cases: ";
    cin >> T;
    for(t=0; t<T; t++)
    {
    cout << "Number of elements: ";
    cin >> n;

    cout << "Enter the elements: ";
    for(i=0; i<n; i++)
    {
        cin >> num[i];
    }

	max  = num[0];
	min = num[0];
	for(i=1; i<n; i++)
	{
		if(num[i]>max)
		{
			max = num[i];
		}
		if(num[i]<min)
		{
			min = num[i];
		}
	}
    cout << "Max: " << max << endl << "Min: " << min << endl << endl;
	}
	return 0;
}
