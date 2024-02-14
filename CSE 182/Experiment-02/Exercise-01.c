// 1.	Write a C program to enter length and breadth of a rectangle and find its area and perimeter.

#include<stdio.h>

int main ()
{
int l, b, p;
float area;

printf("Enter the Length: ");
scanf("%d", &l);

printf("Enter the Breadth: ");
scanf("%d", &b);

area = l*b;
p = 2*(l+b);

printf("\nArea of the Rectangle is %.2f",area);
printf("\nPerimeter of the Rectangle is %d \n", p);
}
