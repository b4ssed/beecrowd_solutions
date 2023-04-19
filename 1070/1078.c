#include <stdio.h>

int multiplica(int x, int y);

int multiplica(int x, int y) {
    if (x <= 10) {
        printf("%d x %d = %d\n", x, y, x * y);
        multiplica(x + 1, y);
    }
    
}

int main() {
    int n;
    scanf("%d", &n);
    
    multiplica(1, n);
    
    return 0;
}