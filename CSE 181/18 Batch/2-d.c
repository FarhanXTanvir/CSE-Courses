#include <stdio.h>

int main ()
{
    int m[2]; // (i)
    *(m+1)=100;
    *m=(m+1);
    printf("%d\n\n", m[0]);

    {  // (ii)
        int m[] = {1, 2, 3, 4, 5};
        int x, y=0;
        for(x=0; x<5; x++)  
        {
            y = y+m[x];
            printf("%d", y);
        }
    }
    return 0;
}