#include <stdio.h>

void bubble_sort(int vetor[], int n, int *y);

void bubble_sort (int vetor[], int n, int *y) {
    int k, j, aux;

    for (k = 1; k < n; k++) {
        for (j = 0; j < n - 1; j++) {

            if (vetor[j] > vetor[j + 1]) {
                aux          = vetor[j];
                vetor[j]     = vetor[j + 1];
                vetor[j + 1] = aux;
                (*y)++;
            }
        }
    }
}

int main() {
	int n, i, largada[24], chegada[24], aux[24];
    
	while(scanf("%d", &n) != EOF) {
    	for (i = 0; i < n; i++) {
        	scanf("%d", &largada[i]);
    	}
   	 
    	for (i = 0; i < n; i++) {
        	scanf("%d", &chegada[i]);
    	}
   	    
   	    for (i = 0; i < n; i++) {
   	        for (int j = 0; j < n; j++) {
   	            if (largada[i] == chegada[j]) {
   	                aux[i] = j;
   	            }
   	        }
   	    }
   	    
        int num_ult = 0;
        bubble_sort(aux, n, &num_ult);
        
        printf("%d\n", num_ult);
   	    
	}
    
	return 0;
}