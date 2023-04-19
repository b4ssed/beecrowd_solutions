#include <stdio.h>
 
int main() {
 
    double a;
    
    scanf("%lf", &a);
    
    if (a > 0 && a <= 400) {
        printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: 15 %%\n", ( a + ( a * .15)), ( a * .15));
    } else if (a <= 800) {
        printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: 12 %%\n", ( a + ( a * .12)), ( a * .12));
    } else if (a <= 1200) {
        printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: 10 %%\n", ( a + ( a * .1)), ( a * .1));
    } else if (a <= 2000) {
        printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: 7 %%\n", ( a + ( a * .07)), ( a * .07));
    } else {
        printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: 4 %%\n", ( a + ( a * .04)), ( a * .04));
    }
 
    return 0;
}