// 5.	Write a C program to convert days into years, months, weeks and days.

#include<stdio.h>

int main()
{
int n_days, years, months, weeks, days;

printf("Enter the Number of Days: ");
scanf("%d", &n_days);

years = n_days/365;
months = (n_days%365)/30;
weeks = ((n_days%365)%30)/7;
days = (((n_days%365)%30)%7);

printf("%d days = %d years %d months %d weeks %d days \n", n_days, years, months, weeks, days);

}
