#include <stdio.h>

int main() {
    
    int a, par = 0, imp = 0, neg = 0, pos = 0;

    for (int i = 0; i <= 4; i++) {
        scanf("%d", &a);
        if(a % 2 == 0){
            par++;
        }
        if(a % 2 != 0){
            imp++;
        }
        if(0 < a){
            pos++;
        }
        if(0 > a){
            neg++;
        }
    }
    
    printf("%d valor(es) par(es)\n", par);
    printf("%d valor(es) impar(es)\n", imp);
    printf("%d valor(es) positivo(s)\n", pos);
    printf("%d valor(es) negativo(s)\n", neg);
    return 0;
}