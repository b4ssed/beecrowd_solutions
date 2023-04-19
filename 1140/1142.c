#include <stdio.h>
 
int main() {
 
    int i, j, a, b = 0;
    
    scanf("%d", &a);
    
    for(i = 1; i <= a; i++) {
        for(j = 1; j <= 3; j++) {
            b++;
            printf("%d ", b);
        }
        b++;
        printf("PUM\n");
    }
 
    return 0;
}