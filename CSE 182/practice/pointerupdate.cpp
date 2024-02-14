#include <iostream>

using namespace std;

void update(int *x, int *y)
{
    *x = *x + *y;
    cout << "pa = " << x << endl;
    cout << "*pa = " << *x << endl;
    if(x>y){
        *y = x-y;
        cout << "pb = " << y << endl;
        cout << "*pb = " << *y << endl;
    }
    else{
        *y = y-x;
        cout << "pb = " << y << endl;
        cout << "*pb = " << *y << endl;
    }    
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    
    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);

    return 0;
}
