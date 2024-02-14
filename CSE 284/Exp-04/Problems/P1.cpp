/*
1. Write a C++ program to add two numbers. Accept these two numbers from
the user in base class and display the sum of these two numbers in derived class.
*/
#include <bits/stdc++.h>
using namespace std;

class InputNumbers {
protected:
    double num1;
    double num2;

public:
    // Function to input two numbers from the user
    void inputNumbers() {
        cout << "Enter the first number: ";
        cin >> num1;

        cout << "Enter the second number: ";
        cin >> num2;
    }
};

class CalculateSum : public InputNumbers {
protected:
    double sum;

public:
    // Function to calculate the sum of two numbers
    void calculateSum() {
        sum = num1 + num2;
    }

    // Function to display the sum
    void displaySum() {
        cout << "Sum of the two numbers: " << sum << endl;
    }
};

int main() {
    CalculateSum calculator;

    // Input two numbers from the user
    calculator.inputNumbers();

    // Calculate and display the sum
    calculator.calculateSum();
    calculator.displaySum();

    return 0;
}
