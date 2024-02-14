#include <bits/stdc++.h>
using namespace std;

class student
{
    public: 
    int id; // data member // state of object
    string name;

    void disp()  // By default void / member function / behavior of the objects
    {
        cout << id << " " << name << endl;
    }
    void setValue (int x, string s) // With Parameters
    {
        id = x, name = s;
    }
}a, b;
int main()
{
    student c;
    a.setValue(01,"Farhan");
    b.setValue(02, "Raihan");
    c.setValue(03,"Tahsan");

    a.disp(), b.disp(), c.disp();
    return 0;
}