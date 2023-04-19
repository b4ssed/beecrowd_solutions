#include <stdio.h>
 
int main() {
 
    double hrs, speed;
    
    scanf("%lf %lf", &hrs, &speed);
    
    printf("%.3lf\n", (hrs * speed) / 12);
 
    return 0;
}