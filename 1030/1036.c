#include <stdio.h>
#include<math.h>

int main() {
 
    double a = 0, b = 0, c = 0, del = 0;
    
    scanf("%lf %lf %lf", &a, &b, &c);
    
    del=(b*b)-(4*a*c);
    
    if( a != 0 && del > 0) {
        printf("R1 = %.5lf\nR2 = %.5lf\n", (-b+sqrt(del))/(2*a), (-b-sqrt(del))/(2*a)); 
    } else {
        printf("Impossivel calcular\n");
    }
    return 0;
}