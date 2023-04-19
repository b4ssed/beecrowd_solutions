#include <stdio.h>

int main() {
 
    int x, y;
    double valor;
    
    scanf("%d %d", &x, &y);
    
    switch (x) {
        case 1:
            valor = 4.00 * y; 
        break;
        
        case 2:
            valor = 4.5 * y;
        break;
        
        case 3:
            valor = 5.00 * y;
        break;
        
        case 4:
            valor = 2.00 * y;
        break;
        
        case 5:
            valor = 1.5 * y;
        break;
        
        default:
            valor = 0;
    }
    
    printf("Total: R$ %.2lf\n", valor);
    
    return 0;
}