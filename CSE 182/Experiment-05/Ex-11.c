// 11. Write a C program print total number of days in a month using switch case.

#include <stdio.h>

int main()
{
    int t, m;

    for(t=1; t<=3; t++){

    printf("Enter any order of month: ");
    scanf("%d", &m);

    printf("Number of days: ");
    switch(m)
    {
        case 1:
        case 3:
        case 5:
        case 7:
        case 9:
        case 11:
            printf("31\n");
            break;

        case 2:
            printf("28 or 29\n");
            break;

        case 4:
        case 6:
        case 8:
        case 10:
        case 12:
            printf("30\n");
            break;

        default:
            printf("Wrong input");
            break;
    }
    }
    return 0;
}
