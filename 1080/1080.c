#include <stdio.h>
 
int main() {
 
    int a, i, high = 0, pos;
    
    for (i = 1; i <= 100; i++) {
        scanf("%d", &a);
        if (a > high) {
            high = a;
            pos = i;
        }
    }
    
    printf("%d\n%d\n", high, pos);
    return 0;
}