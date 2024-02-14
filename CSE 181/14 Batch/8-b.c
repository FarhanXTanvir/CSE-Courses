#include <stdio.h>

int main ()
{
    int P, C, M, E;

    printf("Enter the numbers obtained in Physics, Chemistry, Math, Economics: ");
    scanf("%d %d %d %d", &P, &C, &M, &E);
    
    float avg = (float)(P+C+M+E)/4;

    printf("%d: %d\n %d: %d\n %d: %d\n %d: %d\n %d: %f", &P, P, &C, C, &M, M, &E, E, &avg, avg);
    return 0;
}