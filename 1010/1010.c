#include <stdio.h>
 
int main() {
 
    int cd1, cd2, qtd1, qtd2;
    double pr1, pr2;
    
    scanf("%d %d %lf", &cd1, &qtd1, &pr1);
    scanf("%d %d %lf", &cd2, &qtd2, &pr2);
    
    printf("VALOR A PAGAR: R$ %.2lf\n", qtd1 * pr1 + qtd2 * pr2);
 
    return 0;
}