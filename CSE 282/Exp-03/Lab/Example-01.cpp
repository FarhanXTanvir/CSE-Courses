#include<iostream>
using namespace std;
int main()
{
    int arr[10] ={5, 1, 4, 2, 8}, i, j, k, value,hole;
    for (i=1; i<5; i++)
    {
        value = arr[i];
        hole = i;
    while(hole>0 && arr[hole-1]>value)
    {
        arr[hole] = arr[hole-1];
        hole = hole-1;
    }
    arr[hole] = value;
    for(k=0;k<5;k++)
    {
        cout<< arr[k] <<" ";
    }
        cout<<endl;
    }
    for(k=0; k<5; k++)
    {
        cout<<arr[k]<<" ";
    }
    return 0;
}