#include <stdio.h>
 
int main() {
 
    int a;
    
    do {
        scanf("%d", &a);
        if (a != 2002) {
            printf("Senha Invalida\n");
        }
    } while (a != 2002);
    
    printf("Acesso Permitido\n");
    
    return 0;
}