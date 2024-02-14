// Example 2: A C++ program to access overridden function to the base class.
// in main() using the scope resolution operator ::
#include <iostream>
using namespace std;
class Base {
    public:
    void print() {
        cout << "Base Function" << endl;
    }
};
class Derived : public Base {
    public:
    void print() {
        cout << "Derived Function" << endl;
    }
};
int main() {
    Derived d1, d2;
    d1.print();
    // access print() function of the Base class
    d2.Base::print();
    return 0;
}