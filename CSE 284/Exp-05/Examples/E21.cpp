// Example 2: A C++ program to illustrate the Multiple Inheritance.

#include<iostream>
using namespace std;
class A // base class 1
{
    int x;
    public:
    void getx()
    {
        cout << "enter value of x: "; cin >> x;
    }
    int retx()
    {
        return x;
    }
};
class B // base class 2
{
    int y;
    public:
    void gety()
    {
        cout << "enter value of y: "; cin >> y;
    }
    int rety()
    {
        return y;
    }

};
class C : public A, public B //C is derived from class A and class B
{
    public:
    void sum()
    {
        cout << "Sum = " << retx() + rety();
    }
};
int main()
{
    C obj1; //object of derived class C
    obj1.getx();
    obj1.gety();
    obj1.sum();
    return 0;
}