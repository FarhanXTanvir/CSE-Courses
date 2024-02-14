#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
	
    int i, sum = 0, r, flag=0;
    long int n, d;
    
    scanf("%d", &n);
    
    for(i=0, d = n; (10000<= n && n <= 99999) && i<5; i++)
    {
        r = d%10; // 123 4 5
        sum = sum + r;
        d = d/10;
        flag=1;
    }
    if(flag==1)
    {
        printf("%d", sum);
    }
    return 0;
}