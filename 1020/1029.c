#include <stdio.h>

int fib(int x, int *y);

int main() {
    int n, m, result, num_calls;
    
    scanf("%d", &n);
    
    for (int i = 0; i < n; i++) {
        scanf("%d", &m);
        num_calls = 0;
        result = fib(m, &num_calls);
        printf("fib(%d) = %d calls = %d\n", m, num_calls - 1, result);
    }

    return 0;
}

int fib(int x, int *y) {
    (*y)++;
    if (x < 2) {
        return x;
    }
    return fib(x - 1, y) + fib(x - 2, y);
}