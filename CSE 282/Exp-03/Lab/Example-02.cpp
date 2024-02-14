#include<iostream>
using namespace std;
int main()
{
    int arr[10] ={77, 33, 44, 11, 88, 22, 66, 55}, n=8, i, j, k;
    for (i=0; i<n; i++)
    {
        int min_index = i;
        for (j=i+1; j<n; j++)
        {
            if (arr[j]<arr[min_index])
            {
            min_index = j;
            }
        }
        cout<<"Pass: "<<i+1 << " " << " --> " << min_index+1 <<endl;
        swap(arr[i],arr[min_index]); // swap value
    }
    for (k=0; k<n; k++)
    {
        cout<< arr[k]<<" ";
    }
    cout<<endl;
    return 0;
}