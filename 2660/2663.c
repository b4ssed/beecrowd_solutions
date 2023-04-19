#include <stdio.h>

void insertion_sort_desc(int vetor[], int n);

void insertion_sort_desc(int vetor[], int n){
    int i, chave, j;
    for (i = 1; i < n; i++){
        chave = vetor[i];
        j = i - 1;
        while (j >= 0 && vetor[j] < chave){
            vetor[j + 1] = vetor[j];
            j = j - 1;
        }
        vetor[j + 1] = chave;
    }
}

int main() {
 
    int n, k, num = 0;
    
    scanf("%d", &n);
    scanf("%d", &k);
    
    int v[n-1];
    
    for (int i = 0; i < n; i++) {
        scanf("%d", &v[i]);
    }
    
    insertion_sort_desc(v, n);
    
    int ant;
    
    for (int i = 0; i < n; i++) {
        if (num >= k) {
            if (v[i] != ant) {
                break;
            }
        }
        num++;
        ant = v[i];
    }
    
    printf("%d\n", num);
    
    return 0;
}