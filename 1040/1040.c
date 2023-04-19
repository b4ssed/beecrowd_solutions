#include <stdio.h>
 
int main() {
 
    double a, b, c, d, soma, ultimo;
    
    scanf("%lf %lf %lf %lf", &a, &b, &c, &d);
    
    soma = (a * 2 + b * 3 + c * 4 + d) / 10;
    printf("Media: %.1f\n", soma);
    
    if (soma >= 7.0){
        printf("Aluno aprovado.\n");
    } else if (soma >= 5.0) {
        printf("Aluno em exame.\n");
        scanf("%lf", &ultimo);
        printf("Nota do exame: %.1f\n", ultimo);
        if (ultimo + soma / 2.0 > 5.0){
            printf("Aluno aprovado.\n");
        } else {
            printf("Aluno reprovado.\n");
        }
        printf("Media final: %.1f\n", (ultimo + soma ) / 2.0);
    } else {
        printf("Aluno reprovado.\n");
    }
 
    return 0;
}