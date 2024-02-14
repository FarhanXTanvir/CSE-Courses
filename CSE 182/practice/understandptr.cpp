#include <iostream>

using namespace std;

void updateArr(int *num)
{
    cout << "Update the array: ";
    for(int i = 0; i < 5; i++)
    {
        cin >> num [i];
    }
return;    
}
void print(int *num)
{
    for(int i = 0; i < 5; i++)
    {
        cout << num [i] << " ";
    }
    cout << endl;
return;
}

int main ()
{
    int X[10] = {10, 20, 30, 40, 50}, Y = 10, *Z = &Y;

    cout << "Before update: " << endl;
    cout << "Array: ";
    print(X);
    cout << "Integer: " << Y << endl;
    updateArr(X);
    cout << "Updated Array: ";
    print(X);
    
    cout << "Update the integer: ";
    cin >> *Z;
    cout << "Updated integer: " << Y << endl;
    cout << "Integer Address: " << &Y << endl;
    cout << "Pointer Value: " << *Z << endl;
    cout << "Pointer Address: "<< Z << endl; 
    int S = 11;
    int &K = S;
    S = 20;
    cout << "Reference: " << K;
return 0;
}