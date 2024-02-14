#include <stdio.h>

int main ()
{
    char ch, i, flag=0, set[20] = {'a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U'};

    printf("Enter any alphabet: ");
    scanf("%c", &ch);

    for(i=0; i<10; i++)
    {
        if(ch == set[i])
        {
            flag = 1;
        }
    }
    if(flag==1)
    {
        printf("vowel");
    }
    else
    {
        printf("non-vowel");
    }
    return 0;
}