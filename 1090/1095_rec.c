#include <stdio.h>

void sequencia (int i, int j) {
    if(j>=0) {
        printf("I=%d J=%d\n", i, j);
        sequencia(i+3, j-5);
    }
}

int main() {
    sequencia(1, 60);
 
    return 0;
}