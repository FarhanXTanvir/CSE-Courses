/*
2. Write a C++ Program to define a class Car with the following specifications:

Private members:
car name, model name, fuel type: string type
mileage: float type
price: double type
Public members:
displaydata(): Function to display the data members on the screen.
Use Constructor (both Default and parameterized) and destructor. When no parameter is passed the default constructor will be called with the message ”Default constructor has been called”.
*/
#include <bits/stdc++.h>
using namespace std;

class Car
{
    string car_name, model_name, fuel_type;
    float mileage;
    double price;
    public:
    void displaydata()
    {
        cout << "Car Name: " << car_name << endl;
        cout << "Model Name: " << model_name << endl;
        cout << "Fuel Type: " << fuel_type << endl;
        cout << "Mileage: " << mileage << endl;
        cout << "Price: $" << price << endl;
    }
    Car()
    {
        cout << "Default constructor has been called" << endl;
    }
    Car(string a, string b, string c, float d, double e)
    {
        car_name = a;
        model_name=b;
        fuel_type=c;
        mileage=d;
        price=e;
    }
    ~Car()
    {

    }
};
int main()
{
    Car Tesla;
    Car BMW("BMW 740i xDrive", "2024 Sedan", "Petrol", 12.0, 88000.0);
    BMW.displaydata();
    return 0;
}