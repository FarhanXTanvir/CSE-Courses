#include <bits/stdc++.h>
using namespace std;

class student
{
    public: 
    int id; // data member // state of object
    string name;

    void disp()  // member function // behavior of the objects
    {
        cout << id << " " << name << endl;
    }
}a, b;
int main()
{
    student c;
    a.id = 01; a.name = "Farhan";
    b.id = 02; b.name = "Raihan";
    c.id = 03; c.name = "Tahsan";

    a.disp(), b.disp(), c.disp();
    return 0;
}