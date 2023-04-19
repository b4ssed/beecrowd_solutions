#include <stdio.h>
 
int main() {
 
    int n, i, j, k;
    
    scanf("%d", &n);
    
    int x[n];
    
    for (i = 0; i < n; i++) {
        scanf("%d", &x[i]);
    }
    
    j = x[0];
	k = 0;
	for(i = 0; i < n; i++) {
		if(j > x[i]) {
			j = x[i];
			k = i;
		}
	}
    
    printf("Menor valor: %d\n", j);
	printf("Posicao: %d\n", k);    
    
    return 0;
}