#include <stdio.h>
 
int main() {
 
    int e, f, c, r = 0, t;
    
    scanf("%d %d %d", &e, &f, &c);
    
    t = e + f;
    
    while (t >= c) {
        t -= c;
        t++;
        r++;
    }
    printf("%d\n", r);
 
    return 0;
}