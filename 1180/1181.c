#include <stdio.h>
 
int main() {
 
    char a[2];
    int i, j, k;
    double l = 0.0, m[12][12];
    
    scanf("%d %s", &k, &a);
    
    for (i = 0; i <= 11; i++) {
        for (j = 0; j <= 11; j++) {
            scanf("%lf", &m[i][j]);
        }
    }
    
    for (i = 0; i <= 11; i++) {
        l += m[k][i];
    }
    
    if (a[0] == 'S') {
        printf("%.1lf\n", l);
    } else if(a[0] == 'M') {
        l = l / 12.0;
        printf("%.1lf\n", l);
    }
    
    return 0;
}