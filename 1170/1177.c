#include <stdio.h>
 
int main() {
 
    int i, j = 0, x[1000], t;
    
    scanf("%d", &t);
    
    for (i = 0; i <= 999; i++) {
        
        if (j == t){
            j = 0;
        }
        x[i] = j;
        j++;
        
        printf("N[%d] = %d\n", i, x[i]);
    }
 
    return 0;
}