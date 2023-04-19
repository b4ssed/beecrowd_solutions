#include <stdio.h>
 
int main() {
 
    int i, x[10];
    
    scanf("%d", &x[0]);
    
    for (i = 0; i <= 9; i++) {
        if (i != 0){
            x[i] = x[i - 1] * 2;
        }
        
        printf("N[%d] = %d\n", i, x[i]);
    }
 
    return 0;
}