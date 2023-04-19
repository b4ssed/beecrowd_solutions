#include <stdio.h>

int main() {
    
    int pos = 0;
    double a;

    for (int i = 0; i <= 5; i++) {
        scanf("%lf", &a);
        if (a > 0) {
            pos++;
        }
    }
    
    printf("%d valores positivos\n", pos);
    return 0;
}