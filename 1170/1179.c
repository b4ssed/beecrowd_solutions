#include <stdio.h>
 
int main() {
 
    int i, o, par[5], impar[5], n[15], j = 0, k = 0;
    
    for(i = 0; i <= 14; i++) {
        scanf("%d", &n[i]);
        
        if (n[i] % 2 == 0) {
            par[j] = n[i];
            if (j == 4) {
                par[j] = n[i];
                for(j = 0; j <= 4; j++) {
                    printf("par[%d] = %d\n", j, par[j]);
                }
                j = 0;
            }
            j++;
            
        } else {
            impar[k] = n[i];
            if (k == 4) {
                for(k = 0; k <= 4; k++) {
                    printf("impar[%d] = %d\n", k, impar[k]);
                }
                k = 0;
            }
            k++;
        }
    }
    
    for(i = 1; i < k; i++)
        printf("impar[%d] = %d\n", i-1, impar[i]);
    for(o = 1; o < j; o++)
        printf("par[%d] = %d\n", o-1, par[o]);
 
    return 0;
}