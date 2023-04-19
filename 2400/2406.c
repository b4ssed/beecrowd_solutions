#include <stdio.h>
#include <stdlib.h>

struct pilha {
	char info;
    struct pilha* prox;
};

typedef struct pilha Pilha;

Pilha* inicializa (void);
Pilha* push (Pilha* p, char v);
int vazia (Pilha* p);
int pop (Pilha** p);

int main() {
    int i, j, n, saida;
	char a[100000];

	scanf("%d", &n);

	for (i = 0; i < n; i++){

		scanf("%s", a);

		saida = 1;
		Pilha *pilha;
		pilha = inicializa();

		for (j = 0; a[j]; ++j) {
			if (a[j] == '{' || a[j] == '[' || a[j] == '(') {
				pilha = push (pilha, a[j]);
			} else {
				if (vazia(pilha)) {
					saida = 0;
					break;
				}
				if (a[j] == '}' && pilha->info == '{') {
					pop(&pilha);
				} else if (a[j] == ']' && pilha->info == '[') {
					pop(&pilha);
				} else if (a[j] == ')' && pilha->info == '(') {
					pop(&pilha);
				} else {
					saida = 0;
					break;
				}
			}
		}
		if (!vazia(pilha)) {
			saida = 0;
		}
		printf("%s\n", saida ? "S" : "N");
	}
}

Pilha* inicializa (void) { return NULL; }

Pilha* push (Pilha* p, char v) {
	Pilha* novo = (Pilha*) malloc(sizeof(Pilha));
	novo->info = v;
	novo->prox = p;
	return novo;
}

int vazia (Pilha* p) { return (p==NULL); }

int pop (Pilha** p) {
	int valor;
	if (vazia(*p)) {
		printf("Pilha vazia.\n");
        return(-1);
    }
    valor = (*p)->info;
    Pilha* primeiro = *p; 
    *p = (*p)->prox;
    free(primeiro);  
    return valor;	
}