// 2. Write a C program to print all alphabets from a to z -using while loop.

#include<stdio.h>

int main () {

    char Ch;

    printf("a to z: \n");
    Ch='a';
    while(Ch <= 'z'){

        printf("%c ", Ch);
        Ch++;
    }

return 0;
}
