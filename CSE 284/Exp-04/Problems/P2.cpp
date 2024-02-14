/*
2. Write a C++ program to calculate the percentage of a student. Accept the marks of five subjects 
(Physics, Chemistry, Math, Biology, and English) in baseclass. A class will derived from the base class 
which includes a function to find the total marks obtained and another class derived from this first derived class
which calculates and displays the percentage of student.
Hints: Use array for taking the marks of a student.
*/
#include <bits/stdc++.h>
using namespace std;

class Student {
protected:
    int marks[5];  // Array to store marks in five subjects

public:
    // Function to input marks for each subject
    void inputMarks() {
        cout << "Enter marks for Physics: ";
        cin >> marks[0];

        cout << "Enter marks for Chemistry: ";
        cin >> marks[1];

        cout << "Enter marks for Math: ";
        cin >> marks[2];

        cout << "Enter marks for Biology: ";
        cin >> marks[3];

        cout << "Enter marks for English: ";
        cin >> marks[4];
    }
};

class TotalMarks : public Student {
protected:
    int totalMarks;  // Total marks obtained

public:
    // Function to calculate total marks
    void calculateTotalMarks() {
        totalMarks = 0;
        for (int i = 0; i < 5; i++) {
            totalMarks += marks[i];
        }
    }

    // Function to display total marks
    void displayTotalMarks() {
        cout << "Total Marks Obtained: " << totalMarks << endl;
    }
};

class Percentage : public TotalMarks {
public:
    // Function to calculate and display percentage
    void calculatePercentage() {
        double percentage = (double)totalMarks/ 5;
        cout << "Percentage: " << percentage << "%" << endl;
    }
};

int main() {
    Percentage student;

    // Input marks for each subject
    student.inputMarks();

    // Calculate total marks
    student.calculateTotalMarks();

    // Display total marks
    student.displayTotalMarks();

    // Calculate and display percentage
    student.calculatePercentage();

    return 0;
}
