#include <iostream>
using namespace std;

int main ()
{
    int start, end, mid;
    int key, A[10] = {10, 20, 30, 40, 50, 60, 70, 80};
    // char key, A[10]= "abcdefgh";

    cout << "Search: ";
    cin >> key;

    start = 0, end = 7;

    cout << "Start: " << A[start] << " key: " << key << " End: " << A[end] << endl;
    if(A[start] < key && key < A[end])
    {
        for(int i=0; end>start; i++)
        {
            mid = (start+end)/2;

            if(A[mid]==key)
            {
                cout << "Position of " << key << " is: " << mid+1;
                break;
            }
            else if(key < A[mid])
            {
                end = mid-1;
                continue;
            }
            else if(A[mid] < key)
            {
                start = mid+1;
                continue;
            }
            cout << "Iteration " << i+1 << endl;
        }
    }
    else
        {
            cout << "Item not found";
        }
    return 0;
}   