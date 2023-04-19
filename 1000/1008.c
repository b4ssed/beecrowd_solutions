#include <stdio.h>
 
int main() 
{
    int num;
    double hrs, hourly;
    
    scanf("%d %lf %lf", &num, &hrs, &hourly);
    
    printf("NUMBER = %d\nSALARY = U$ %.2lf\n", num, hrs * hourly);

 
    return 0;
}