#include<stdio.h>
int main(){
    int a, i, j;

    for (int a = 1; a <= 9; a += 2) {
            for (int i = a, j = 7; (j >= 5); j-=1) {
                printf("I=%d J=%d\n", i, j);

            }
        }
    return 0;
}