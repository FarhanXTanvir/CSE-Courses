// 2. A C++ program to find the second largest element in an array.
#include <iostream>

using namespace std;

int main ()
{
    int t, T, num[100], larg, larg2, n, i;

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

	if(num[1]>num[0])
	{
		larg = num[1];
		larg2 = num[0];
	}
	if(num[1]<num[0])
	{
		larg = num[0];
		larg2 = num[1];
	}
	for(i=2; i<n; i++)
	{
		if(num[i]>larg)
		{
			larg2 = larg;
			larg = num[i];
		}
		if(num[i]<larg && num[i]>larg2)
		{
			larg2 = num[i];
		}
	}
    cout << "Second largest: " << larg2 << endl << endl; 
	}
	return 0;
}