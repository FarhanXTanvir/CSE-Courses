// Write a C++ program to store and print the roll no., name, age, and marks of a student using structures.
#include <iostream>
using namespace std;

struct info
{
    string name;
    int roll_no;
    int age;
    int marks;
} student;
int main ()
{
    cout << "Name: ";
    getline(cin, student.name);
    cout << "Roll No.: ";
    cin >> student.roll_no;
    cout << "Age: ";
    cin >> student.age;
    cout << "Marks: ";
    cin >> student.marks;

    cout << "Details: ";
    cout << "\nName: " << student.name << endl;
    cout << "Roll No.: " << student.roll_no << endl;
    cout << "Age: " << student.age << endl;
    cout << "Marks: " << student.marks << endl;

    return 0;
}