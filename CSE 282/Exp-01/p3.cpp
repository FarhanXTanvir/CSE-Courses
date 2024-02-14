/* Enter the marks of 5 students in Chemistry, Mathematics, and Physics
(each out of 100) using a structure named Marks having elements roll no.,
name, chem_marks, maths_marks, and phy_marks and then display the
percentage of each student. */

#include <iostream>
using namespace std;

struct marks
{
    string name;
    int roll_no;
    int math_marks;
    int chem_marks;
    int phy_marks;
} student[6];
int main ()
{
    for(int i=0; i<5; i++)
    {
        cout << "Roll No.: ";
        cin >> student[i].roll_no;
        cout << "Name: ";
        cin.ignore();
        getline(cin, student[i].name);
        cout << "Marks: " << endl;
        cout << "Mathematics: ";
        cin >> student[i].math_marks;
        cout << "Chemistry: ";
        cin >> student[i].chem_marks;
        cout << "Physics: ";
        cin >> student[i].phy_marks;
    }
    for(int i=0; i<5; i++)
    {
        cout << "Name: " << student[i].name << endl;
        cout << "Roll No.: " << student[i].roll_no << endl;
        int p = (student[i].math_marks + student[i].chem_marks + student[i].phy_marks)/3;
        cout << "Percentage: " << p << endl;
        cout << endl;
    }

    return 0;
}
