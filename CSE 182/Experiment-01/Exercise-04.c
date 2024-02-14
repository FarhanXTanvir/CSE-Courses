// A C programme to calculate the area and perimeter of a rectangle

#include<stdio.h>

int main()
{
    float l, w, perimeter, area;
    l = 5;
    w = 10;
    

    // Let length & width of a rectangle are l & w respectively.

    perimeter = 2*(l + w);

    area = l*w;
    
    printf("Area of the rectangle is %.2f", area);
    printf("\nPerimeter of the rectangle is %.2f", perimeter);

    return 0;
}