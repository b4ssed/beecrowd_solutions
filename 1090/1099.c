#include<stdio.h>

int main(){
    
    int i, j, n, x, y, aux, soma;
    
    scanf("%d", &n);
    
    for (i = 1; i <= n; i++) {
        scanf("%d %d", &x, &y);
        
        if(x > y) {
            aux = x;
            x = y;
            y = aux;
        }
        soma = 0;
        
        for(int j = x + 1; j < y; j++){
            if(j % 2 != 0){
                soma += j;
            } 
        }
        printf("%d\n", soma);
    }
    return 0;
}