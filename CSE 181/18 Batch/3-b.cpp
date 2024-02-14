#include <iostream>

using namespace std;

int main (){

int cn;
float units, bill;

cout << "Enter customer code: ";
cin >> cn;

cout << "Enter the units of electricity: ";
cin >> units;

if (0 <= units && units <= 200){
    bill = units*0.50;
    }
else if (201 <= units && units <= 400)
{
    bill = 100 + (units-200)*0.65;
}
else if (401 <= units && units <= 600)
{
    bill = 230 + (units-400)*0.80;
}
else if (601 <= units)
{
    bill = 390 + (units-600)*1.00;
} 
printf("Total Electricity Bill of %d: %.3f", cn, bill);

return 0;
}
