#include <iostream>
using namespace std;

struct Person {
string name;
int roll_no;
float cgpa;
} person1;

int main ()
{
    getline(cin, person1.name);
    cin >> person1.roll_no;
    cin >> person1.cgpa;

    cout <<"Name: "<< person1.name << endl;
    cout << "Roll No.: " << person1.roll_no << endl;
    cout <<"cgpa: "<< person1.cgpa;

    return 0;
}