// 9. Write a C program to print Fibonacci series up to n terms.
// 0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89, 144.

#include <stdio.h>

int main (){

    int a, b, c, i, t, n;

    for(t=1; t<=3; t++){
    printf("Number of terms: ");
    scanf("%d", &n);

    a = 0;
    b = 1;

    printf("Fibonacci Series: %d %d ", a, b);
    for(i=1; i<=n; i++){
        c = a+b;
        printf("%d ", c);

        a=b;
        b=c;
    }
    printf("\n");
    }
    return 0;
}
