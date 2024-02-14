#include <bits/stdc++.h>
using namespace std;
class student
{
    public:
    int id;
    string name;
    
    void disp()
    {
        cout << id << " " << name;
    }
    student(int x, string s)
    {
        id = x;
        name = s;
    }
};
int main()
{
    student Farhan(2008060, "Farhan Tanvir");
    Farhan.disp();
    return 0;
}