#include <stdio.h>

int main() {
    int i, n, m = 0;
    char st[43];
    
    scanf("%d", &n);
    
    for (i = 1; i <= n; i++) {
        scanf("%s", &st);
        
        char *pos = st;
    
        while(*pos != '\0'){
            char a = *(pos);
            if (a != 'a' && a != 'e' && a != 'i' && 
                a != 'o' && a != 'u' && a != 'A' && 
                a != 'E' && a != 'I' && a != 'O' && a != 'U'){
                m++;
                if (m == 3) {
                    break;
                }
            } else {
                m = 0;
            }
            pos++;
        }
        if (m == 3) {
            printf("%s nao eh facil\n", st);
        } else {
            printf("%s eh facil\n", st);
        }
        m = 0;
    } 
    return 0;
}