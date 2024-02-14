/* 8. Write a C program to input electricity unit charges and calculate total electricity bill according to the given condition:

    For first 50 units Rs. 0.50/unit
    For next 100 units Rs. 0.75/unit
    For next 100 units Rs. 1.20/unit
    For unit above 250 Rs. 1.50/unit
An additional surcharge of 20% is added to the bill. */

#include<stdio.h>

int main (){

    float units, charges, bill;

    printf("Enter the units of electricity: ");
    scanf("%f", &units);

    if (units <= 50)
    {
        charges = units*0.50;
    }
    else if (units <= 150)
    {
        charges = 50*0.50 + (units-50)*0.75;
    }
    else if (units <= 250)
    {
        charges = 50*0.50 + 100*0.75 + (units-150)*1.20;
    }
    else if (units > 250)
    {
        charges = 50*0.50 + 100*0.75 + 100*1.20 + (units-250)*1.50;
    }
    bill = charges + charges*0.2;
    printf("Total Electricity Bill: %.3f", bill);

    return 0;
}
