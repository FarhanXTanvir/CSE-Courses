 #include <stdio.h>

int main ()
{
    int n;
    char *words[] = {"one", "two", "three", "four", "five", "six", "seven", "eight", "nine","Greater than 9"};
    
    scanf("%d", &n);
    printf("%s\n", (n <= 10) ? words[n-1] : words[9]);
    return 0;
}
 
 