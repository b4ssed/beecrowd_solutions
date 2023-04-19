#include <stdio.h>

void selection_sort(int vetor[], int n);

void selection_sort(int vetor[], int n) { 
  int i, j, min, aux;
  for (i = 0; i < (n-1); i++){
     min = i;
     for (j = (i+1); j < n; j++){
       if(vetor[j] < vetor[min]) 
         min = j;
     }
     if (i != min){
       aux = vetor[i];
       vetor[i] = vetor[min];
       vetor[min] = aux;
     }
  }
}

int main(){ 
    int n, aux, number = 0;
    
    scanf("%d", &n);
    
    int v[n];
    
    for (int i = 0; i < n; i++) {
        scanf("%d", &v[i]);
    }
    
    selection_sort(v, n);
   
    for (int i = 0; i <= n; i++) {
        if (i == 0) {
            aux = v[i];
            number++;
        } else if ( v[i] == aux) {
            number++;
        } else {
            printf("%d aparece %d vez(es)\n", aux, number);
            number = 1;
            aux = v[i];
        }
    }
    return 0;
}