#include <stdio.h>

void quadrado_pares(int z);

int main() {
    int x;
    
    scanf("%d", &x);
    quadrado_pares(x);
    
    return 0;
}

void quadrado_pares(int z) {
    if (z == 0){
        return;
    } else if (z % 2 == 0) {
        quadrado_pares(z - 1);
        printf("%d^2 = %d\n", z, z * z);
    } else {
        quadrado_pares(z - 1);
    }
}