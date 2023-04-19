#include <stdio.h>
 
int main() {
 
    int i, j, n, pontx, distd, ma = 0, jo = 0;
    
    scanf("%d", &n);
    
    for (i = 1; i <= n; i++) {
        for (j = 0; j <= 5; j++) {
            scanf("%d %d", &pontx, &distd);
            if (j <= 2) {
                jo += pontx * distd;
            } else {
                ma += pontx * distd;
            }
        }
        if (ma > jo) {
            printf("MARIA\n");
        } else {
            printf("JOAO\n");
        }
        ma = 0;
        jo = 0;
    }
    
 
    return 0;
}