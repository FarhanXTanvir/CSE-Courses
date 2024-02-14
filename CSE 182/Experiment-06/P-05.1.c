#include <stdio.h>

int main ()
{
    int i, num[5] = {2, 4, 5, 7, 9}, b[5], reverse[5];

    printf("reverse[5] = {");
    for(i = 0; i < 5; i++)
    {
        reverse[i] = num[4-i];
        printf("%d,", reverse[i]);
    }
    printf("}");
    return 0;
}
