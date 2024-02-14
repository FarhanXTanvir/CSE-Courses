// 2.	Write a C program to enter radius of a circle and find its diameter, circumference and area.

#include<stdio.h>

int main ()
{
int r, d;
float c, area;

printf("Enter the Radius of the Circle: ");
scanf("%d", &r);

d = 2*r;
c = 2*3.14*r;
area = 3.14*r*r;

printf("\n Diameter = %d, \n Circumference = %.2f, \n Area = %.2f, \n", d, c, area);
}
