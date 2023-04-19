#include <stdio.h>
 
int main() {
 
    int i;
    double x[100];
    
    scanf("%lf", &x[0]);
    
    printf("N[%d] = %.4lf\n", 0, x[0]);
    
    for (i = 1; i <= 99; i++) {
        
        x[i] = x[i-1] / (float)2;
        
        printf("N[%d] = %.4lf\n", i, x[i]);
    }
 
    return 0;
}