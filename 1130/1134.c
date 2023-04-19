#include<stdio.h>

int main(){

    int i = 0, al = 0, gl = 0, ds = 0;
    
    while (i != 4) {
        scanf("%d", &i);
        if (i == 1) {
            al+=1;
        }else if (i == 2) {
            gl += 1;
        }else if (i == 3) {
            ds += 1;
        }
    }
    printf("MUITO OBRIGADO\n");
    printf("Alcool: %d\n", al);
    printf("Gasolina: %d\n", gl);
    printf("Diesel: %d\n", ds);
}