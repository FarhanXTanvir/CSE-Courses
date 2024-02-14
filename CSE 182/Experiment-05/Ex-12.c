// 12. Write a C program to check whether an alphabet is vowel or consonant using switch case.

#include <stdio.h>

int main(){
    int t;
    char ch;

    for(t=1; t<=3; t++){
    printf("Enter any alphabet: ");
    scanf(" %c", &ch);

    switch(ch)
    {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
        case 'A':
        case 'E':
        case 'I':
        case 'O':
        case 'U':
            printf("Vowel\n");
            break;

        default:
            printf("Consonant\n");
            break;
    }
    }
    return 0;
}
