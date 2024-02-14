// Palindrome Number

#include <stdio.h>

int main ()
{
    int root, remainder, reversed, div, t, T;

    printf("Test cases: ");
    scanf("%d", &T);

    for(t=1; t <= T; t++){
    printf("\nEnter any number: ");
    scanf("%d", &root);

    for(div = root, reversed = 0; div > 0; div /= 10 )
    {
        remainder = div%10;
        reversed = reversed*10 + remainder;
    }
    printf("%d\n", reversed);
    if(reversed == root){
        printf("Palindrome Number");
    }
    else{
        printf("Non-Palindrome Number");
    }
    }

    return 0;
}
