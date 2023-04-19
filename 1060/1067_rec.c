#include <stdio.h>

void impares (int i, int j) {
    if (i <= j){
        if (i % 2== 1)
            printf("%d\n", i);
        impares(i+1, j);
    }
}

int main() {
    int i, j = 0;
    scanf("%d", &i);
    impares(1, i);
    return 0;
}