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
    int i, n, j = 0;
	char a, b, c, d, e, f, g, h;
	Pilha *pilha;
	pilha = inicializa();

	scanf("%d", &n);

	for (i = 0; i < n; i++){
		if (vazia(pilha)) {
			pilha = push (pilha, 'F');
			pilha = push (pilha, 'A');
			pilha = push (pilha, 'C');
			pilha = push (pilha, 'E');
		}
		
		scanf(" %c %c %c %c ", &a, &b, &c, &d);
		
		h = pilha->info;
		pop(&pilha);
		g = pilha->info;
		pop(&pilha);
		f = pilha->info;
		pop(&pilha);
		e = pilha->info;
		pop(&pilha);
		
		if (a == h && b == g && c == f && d == e) {
		    j++;
		} else {
		    pilha = push (pilha, e);
		    pilha = push (pilha, f);
		    pilha = push (pilha, g);
		    pilha = push (pilha, h);
		    pilha = push (pilha, a);
		    pilha = push (pilha, b);
		    pilha = push (pilha, c);
		    pilha = push (pilha, d);
		}
	}
	printf("%d\n", j);
	return 0;
}

Pilha* inicializa (void) { return NULL; }

Pilha* push (Pilha* p, char v) {
	Pilha* novo = (Pilha*) malloc(sizeof(Pilha));
	novo->info = v;
	novo->prox = p;
	return novo;
}

int vazia (Pilha* p) { 
    return (p==NULL); 
}

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