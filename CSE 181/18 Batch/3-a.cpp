#include<stdio.h>

int main () {

    int a, b, c;

    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);


    if (a>b)
    {
        if(a>c)
        {
            printf("largest = %d", a);
        }
        else
        {
            printf("largest = %d", c);
        }
    }
    else if (b>c)
    {
        printf("largest = %d", b);
    }
    else 
    {
        printf("largest = %d", c);
    }
return 0;
}
