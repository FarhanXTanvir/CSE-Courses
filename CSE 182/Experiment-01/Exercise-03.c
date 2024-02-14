// A C programme to calculate the area and perimeter of a triangle

#include<stdio.h>

int main()
{
    float a, b, c, h, perimeter, area;
    a = 2;
    b = 3;
    c = 4;
    h = 2;

    /* Let height & base of a triangle are h = 2 & b = 4 respectively &
     a,b,c are the sides of the triangle. */

    perimeter = (a + b + c);

    area = 0.5*b*h ;
    
    printf("Area of the Triangle is %.2f", area);
    printf("\nPerimeter of the Triangle is %.2f", perimeter);

    return 0;
}