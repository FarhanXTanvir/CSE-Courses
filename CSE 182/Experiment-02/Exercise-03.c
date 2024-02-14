// 3.	Write a C program to enter length in centimeter and convert it into meter and kilometer.

#include<stdio.h>

int main ()
{
float cm, m, km;

printf("Enter the Length in Centimeter: ");
scanf("%f", &cm);

m = cm/100;
km = cm/1000;

printf("%.3f cm = %.3f m = %.3f km \n", cm, m, km);

}
