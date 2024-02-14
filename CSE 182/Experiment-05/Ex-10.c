// 10. Write a C program to print day of week name using switch case.

#include <stdio.h>

int main()
{
    int t, day;

    for(t=1; t<=3; t++){

    printf("Enter order of day of week: ");
    scanf("%d", &day);

    // Let, order of Saturday: 1
    switch(day)
    {
        case 1:
            printf("Saturday\n");
            break;
        case 2:
            printf("Sunday\n");
            break;
        case 3:
            printf("Monday\n");
            break;
        case 4:
            printf("Tuesday\n");
            break;
        case 5:
            printf("Wednesday\n");
            break;
        case 6:
            printf("Thursday\n");
            break;
        case 7:
            printf("Friday\n");
            break;

        default:
            printf("Invalid input\n");
            break;
    }
    }
    return 0;
}
