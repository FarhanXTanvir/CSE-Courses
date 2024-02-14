/* Suppose you are assigned to design a very simple student result management system for a particular course. 
Where each student's information is stored as an object. A student has the following basic information: 
Student ID, Age, Level, Term.
Construct another class named "Course_student" which is derived from the basic student class and 
additionally stores the marks of the 4 class tests of that course. The class "Course_student" has a member function which 
calculates the sum of best 3 class tests marks and another member function which prints the basic information of the student 
along with his or her obtained class tests marks.

Implement the classes according to the above description. Declare an array of 180 objects of the class "Course_student". 
Store the information of at least one student, calculate the sum of best 3 class tests marks of that student and 
print the student's information using the respective member function. */

#include <bits/stdc++.h>
using namespace std;

class student
{
    public:
        int  stdID;
        int age;
        int lvl;
        int term;
        student(int a, int b, int c, int d)
        {
            stdID = a, age = b, lvl = c, term = d;
        }
}Css;
class Course_student:public student 
{
    public:
    int ct1, ct2, ct3, ct4;

    int best3 ()
    {
        int best = ct1 + ct2 + ct3 + ct4 - min({ct1, ct2, ct3, ct4});
        return best;
    }
    void print ()
    {
        cout << "Student ID: " << stdID << endl
            << "Age: " << age << endl
            << "Level: " << lvl << " " << "Term: " << term << endl
            << "CT Marks: " << best3();
    }
}Cs;

int main()
{
    Css(60, 22, 2, 1);
    
    return 0;
}