// 4.	Write a C program to enter temperature in °Celsius and convert it into °Fahrenheit.

#include<stdio.h>


int main ()
{
float C, F;

printf("Enter Temperature in Degree Celsius: ");
scanf("%f", &C);

F = (C*9/5) + 32;

printf("%f Degree Celsius = %.2f Degree Fahrenheit \n", C, F);

}
