#include <stdio.h>

void pares (int i) {
    if(i <= 100) {
        printf("%d\n", i);
        pares(i+2);
    }
}

int main() {
    pares(2);
 
    return 0;
}