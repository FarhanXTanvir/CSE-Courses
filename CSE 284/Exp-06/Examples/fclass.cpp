#include <iostream>
using namespace std;
// Forward Declaration
class B;
class A {
    private:
    int Na;
    friend int prod(A, B);
    
    public:
    A(){
        Na = 15;
    }
    friend 
  
};
class B {
    private:
    int Nb;
    friend int prod(A, B);

    public:
    B(){
        Nb = 2;
    }
};

int prod(A x, B y) {
return (x.Na * y.Nb);
}
int main() {
    A x;
    B y;
    cout << "Product: " << prod(x,y);
    return 0;
}