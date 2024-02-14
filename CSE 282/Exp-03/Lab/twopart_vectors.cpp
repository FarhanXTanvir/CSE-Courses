#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> original;
    int input;
    while (cin >> input) {
        original.push_back(input);
    }
    vector<int> first_half(original.begin(), original.begin() + original.size() / 2);
    vector<int> second_half(original.begin() + original.size() / 2, original.end());

    cout << "1st: ";
    for (int i = 0; i < first_half.size(); i++) {
        cout << first_half[i] << " ";
    }
    cout << endl;

    cout << "2nd: ";
    for (int i = 0; i < second_half.size(); i++) {
        cout << second_half[i] << " ";
    }
    cout << endl;

    return 0;
}
