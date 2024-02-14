#include <bits/stdc++.h>
using namespace std;

struct student
{
    int id;
    string name;
}Farhan;

void disp(void)
{
    cout << "ID: " << Farhan.id << " " << "Name: " << Farhan.name;
}

int main()
{
    // student Farhan;
    Farhan.id = 2008060;
    Farhan.name = "Farhan Tanvir";
    disp();
    return 0;
}