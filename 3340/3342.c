#include <stdio.h>

int main() {
    int n, m;
    
    scanf("%d", &n);
    m = (n * n) / 2;
    
    if (n % 2 != 0) {
        printf("%d casas brancas e %d casas pretas\n", m + 1, m);
    } else {
        printf("%d casas brancas e %d casas pretas\n", m, m);
    }
    
    return 0;
}