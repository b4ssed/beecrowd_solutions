#include <stdio.h>

int verificaSenha(int x);
void loopSenha();

int verificaSenha(int x) {
    if (x == 2002) {
        return 1;
    }
    
    return 0;
}

void loopSenha() {
    int y = 0;
    
    scanf("%d", &y);
    
    if (verificaSenha(y)) {
        printf("Acesso Permitido\n");
    } else {
        printf("Senha Invalida\n");
        loopSenha();
    }
}

int main() {
  
    loopSenha();

    return 0;
}