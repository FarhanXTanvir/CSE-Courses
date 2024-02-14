#include <stdio.h>

main ()
{
    int x=100;

    printf("%d/n", 10 + x++);
    printf("%d/n", ++x);
}

/* 
Output:
warning: return type defaults to 'int'  
    3 | main ()
110/n102/n
*/