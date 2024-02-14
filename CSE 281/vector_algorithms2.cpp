#include <bits/stdc++.h>
using namespace std;

void print(vector <int> v)
{
    cout << "Vector Size: " << v.size() << endl;
    for(int i=0; i<v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl << endl;
}
int main ()
{
    vector <int> v = {7, 1, 2, 9, 5, 6, 2, 2, 2, -1}; // Vector declared with 6 unsorted elements
    int i;

    print(v);  // prints the elements of the vector - Bofore
    swap(v[3], v[4]);
    cout << "New Vector after swapping 9>>5: " << endl;
    print(v);

    v.insert(v.begin()+3, 10);
    cout << "New Vector after inserting 10: " << endl;
    print(v);

    v.erase(v.begin()+2);
    cout << "New Vector after erasing index-2: " << endl;
    print(v);

    int max = *max_element(v.begin(), v.end());
    cout << "Largest element: " << max << endl;

    int min = *min_element(v.begin(), v.end());
    cout << "Smallest element: " << min << endl;

    int find_2 = find(v.begin(), v.end(), 2) - v.begin();
    cout << "Index of 2: " << find_2 << endl;

    int count_of_2 = count(v.begin(), v.end(), 2);
    cout << "Frequency of 2: " << count_of_2 << endl << endl;

    v = {9, 6, 3, 4, 12, 10, 5, 11, 7};
    sort(v.begin(), v.end());
    print(v);
    auto lower = lower_bound(v.begin(), v.end(), 4) - v.begin();
    cout << "Index of Lower Boundary(4): " << lower << endl;

    auto upper = upper_bound(v.begin(), v.end(), 10) - v.begin();
    cout << "Index of Lupper Boundary(10): " << upper << endl << endl;

    return 0;
}   