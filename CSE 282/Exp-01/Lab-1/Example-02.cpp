#include <iostream>
using namespace std;

struct person
{
    int age;
    int weight;
};
int main ()
{
    person person1, *personPtr;
    personPtr = &person1;

    cin >> (*personPtr).age;
    cin >> (*personPtr).weight;

    cout << "Age: " << person1.age << endl;
    cout << "Weight: " << person1.weight;

    return 0;
}