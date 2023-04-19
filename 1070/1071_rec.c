#include <stdio.h>
int soma_impares(int x, int y);

int main() {
    int x, y, somaimpares;
    
    scanf("%d %d", &x, &y);
    
    if (x > y) {
        somaimpares = soma_impares(y + 1, x);
    } else {
        somaimpares = soma_impares(x + 1, y);
    }
    
    printf("%d\n", somaimpares);
    
    return 0;
}

int soma_impares(int z, int t) {
    if (z < t){
        if (z % 2 != 0) {
            return z + soma_impares(z + 1, t);
        } else {
            return soma_impares(z + 1, t);
        }
    }
    return 0;
}