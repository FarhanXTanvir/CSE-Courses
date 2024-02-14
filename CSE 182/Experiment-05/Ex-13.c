// 13. Write a C program to create Simple Calculator using switch case.

#include <stdio.h>

int main (){

    int a, b, t;
    float result;
    char op;

    for(t=1; t<=5; t++){

    result = 0;
    printf("Enter the function: ");
    scanf("%d %c %d", &a, &op, &b);

    switch(op){
        case '+':
            result = a+b;
            break;

        case '-':
            result = a-b;
            break;

        case '*':
            result = a*b;
            break;

        case '/':
            result = (float)a/b;
            break;

        default:
            printf("Undefined Operation");
    }
    printf("Result: %.2f\n", result);
    }
    return 0;
}
