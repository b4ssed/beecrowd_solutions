#include <stdio.h>

int main(){
    int notas, valor;
    
    scanf("%d", &notas);
    
    printf("%d\n", notas);
    printf("%d nota(s) de R$ 100,00\n", notas/100);
    valor = (notas%100);
    
    
    printf("%d nota(s) de R$ 50,00\n", valor/50);
    valor = (valor%50);
    
    printf("%d nota(s) de R$ 20,00\n", valor/20);                                                                                                                        
    valor = (valor%20);
    
    printf("%d nota(s) de R$ 10,00\n", valor/10);
    valor = (valor%10);
    
    printf("%d nota(s) de R$ 5,00\n", valor/5);
    valor = (valor%5);
    
    printf("%d nota(s) de R$ 2,00\n", valor/2);
    valor = (valor%2);
    
    printf("%d nota(s) de R$ 1,00\n", valor/1);
    return 0;
}