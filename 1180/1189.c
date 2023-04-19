#include <stdio.h>
 
int main() {
 
    char a[2];
    int x, y;
    double l = 0.0, m[12][12];
    
    scanf("%s", &a);
    
    for (x = 0; x <= 11; x++) {
        for (y = 0; y <= 11; y++) {
            scanf("%lf", &m[x][y]);
            if (x > y && y <= 10 - x) {
                l += m[x][y];
            }
        }
    }
    
    if (a[0] == 'S') {
        printf("%.1lf\n", l);
    } else if(a[0] == 'M') {
        printf("%.1lf\n", l / 30.0);
    }
    
    return 0;
}