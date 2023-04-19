#include <stdio.h>

int main()
{
    int hrs, min, sec = 0;
    
    scanf("%d", &sec);
    
    hrs = sec / 3600;
    sec = sec - (hrs * 3600);
    
    min = sec / 60;
    sec = sec - (min * 60);
    
    printf("%d:%d:%d\n", hrs, min, sec);
    
    return 0;
}