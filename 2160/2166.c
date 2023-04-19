#include <stdio.h>

int main() {
    int n;
    long double k = 0.0;
    
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        k += 2.0;
        k = 1.0 / k;
    }
    k += 1.0;
    printf("%.10Lf\n", k);
    return 0;
}