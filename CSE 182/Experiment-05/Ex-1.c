// 1. Write a C program to enter any number and check whether the number is palindrome or not.


#include <stdio.h>

int main() {
  int t, num, original, reversed, remainder;

    for(t=1; t<=2; t++){
    printf("Enter a number: ");
    scanf("%d", &num);
    original = num;

    reversed = 0;
    while (num != 0) {
        remainder = num % 10;
        reversed = reversed * 10 + remainder;
        num = num/10;
    }

    if (original == reversed)
        printf("%d is a palindrome.\n", original);
    else
        printf("%d is not a palindrome.\n", original);
    }
    return 0;
}
