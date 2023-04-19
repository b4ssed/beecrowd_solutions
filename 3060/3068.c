#include <stdio.h>
 
int main() {
 
    int x1, x2, y1, y2, x, y, n, i, t = 0, m = 0;
    
    do {
        scanf("%d %d %d %d", &x1, &y1, &x2, &y2);
        
        if (x1 == 0 && x2 == 0 && y1 == 0 && y2 == 0) {
            break;
        }
        
        m = 0;
        scanf("%d", &n);

        for (i = 1; i <= n; i++) {
            scanf("%d %d", &x, &y);
            if (x >= x1 && x <= x2 && y <= y1 && y >= y2) {
                m++;
            }        
        }
        t++;
        
        printf("Teste %d\n%d\n", t, m);
        
    } while (x1 != 0 && x2 != 0 && y1 != 0 && y2 != 0);
    
    return 0;
}