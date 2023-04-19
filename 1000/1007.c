#include <stdio.h>
 
int main() {
 
    int a, b, c, d = 0;
    
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);
    scanf("%d", &d);
    
    a = (a * b) - (c * d);
    
    printf("DIFERENCA = %d\n", a);
 
    return 0;
}