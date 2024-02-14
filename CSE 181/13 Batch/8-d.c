#include <stdio.h>

float ratio(float a, int b, int c, int d)
{
    float ratio = (a+b)/(c+d);

    return ratio;
}
int main ()
{
    int  b, c, d; 
    float a, r;

    printf("Enter four integers: ");
    scanf("%f %d %d%d", &a, &b, &c, &d);

    r = ratio(a, b, c, d);
    printf("%.2f", r);
    return 0;
}