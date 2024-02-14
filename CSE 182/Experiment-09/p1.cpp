/* 1. Write a C++ program to add, subtract, multiply and divide two integers
using the following types of user-defined functions -
• No Argument Passed and No return value
• No Argument Passed but return a value
• Argument Passed but no return value
• Argument passed and returns a value */ 

#include <iostream>

using namespace std;

void add (void)
{
    int a, b, sum;
    cout << "Enter two integers to add: ";
    cin >> a >> b;

    sum = a + b;
    cout << a << " + " << b << " = " << sum << endl;
    return;
}
int sub (void)
{
    int a, b, sub;
    cout << "Enter two integers to substract: ";
    cin >> a >> b;

    sub = a - b;
    cout << a << " - " << b << " = ";
    return sub;
}
void mult (int a, int b)
{
    int mult;
    mult = a*b;
    cout << a << "*" << b << " = " << mult << endl;
    return;
}
float divide (int a, int b)
{
    float div;
    div = a/b;

    return div;
}
int main ()
{
    int x, y, s;
    float d;
    add();
    s = sub();
    cout << s << endl;
    cout << "Enter two integers to multiply: ";
    cin >> x >> y;
    mult(x, y);
    cout << "Enter two integers to divide: ";
    cin >> x >> y;
    d = divide (x, y);
    cout << x << "/" << y << " = " << d << endl; 
    return 0;
}