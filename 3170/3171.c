#include<stdio.h>
#include<stdlib.h>

typedef struct no{
	int vertice;
	struct no *prox;
}tipo_no;

typedef struct grafo{
	int num_vertices;
	tipo_no *VETOR_list_adj;
}tipo_grafo;

typedef struct queue {
	tipo_no* ini;
	tipo_no* fim;
} fila;

void inicializa(fila* q) {
	q->ini = q->fim = NULL;
}

int filaVazia(fila q) {
	return q.ini == NULL;
}

void enfilera(fila* q, int value) {
	tipo_no* newNo = (tipo_no*) malloc(sizeof(tipo_no));
	newNo->vertice = value;
	newNo->prox = NULL;
	if (filaVazia(*q)) {
    	q->ini = q->fim = newNo;
	} else {
    	q->fim->prox = newNo;
    	q->fim = newNo;
	}
}

int desenfilera(fila* q) {
	if (filaVazia(*q)) {
	    return -1;
	} else {
    	tipo_no* temp = q->ini;
    	int u = temp->vertice;
    	q->ini = temp->prox;
    	free(temp);
    	if (q->ini == NULL) {
        	q->fim = NULL;
    	}
    	return u;
	}
}

tipo_grafo *criaGRAFO(int n){
	tipo_grafo *G = (tipo_grafo*) malloc(sizeof(tipo_grafo));
	if (G){
  	  G->num_vertices = n;
  	  G->VETOR_list_adj = (tipo_no*) malloc(n*sizeof(tipo_no));
  	  if (G->VETOR_list_adj){
     	 
  		  for (int i = 0; i < n; i++)
  			  G->VETOR_list_adj[i].prox = NULL;
  		  return G;
  	  }
  	  return NULL;
	}
	return NULL;
}

tipo_no * criaNO(int v){
	tipo_no *novoNO = (tipo_no *) malloc(sizeof(tipo_no));
	novoNO->vertice = v;
	novoNO->prox = NULL;
    
	return novoNO;
}

void addARESTA(tipo_grafo *G, int origem, int destino){
	tipo_no *novoNO = criaNO(destino);
	novoNO->prox = G->VETOR_list_adj[origem].prox;
	G->VETOR_list_adj[origem].prox = novoNO;
    
	novoNO = criaNO(origem);
	novoNO->prox = G->VETOR_list_adj[destino].prox;
	G->VETOR_list_adj[destino].prox = novoNO;
    
}

void buscaLargura(tipo_grafo *g, int ini, int visit) {
    int i, cor[visit], dist[visit], ant[visit];
    fila q;
	inicializa(&q);
	enfilera(&q, ini); 
	for(i = 0; i < visit; i++) {
	    cor[i] = 0;
	}
    while(!filaVazia(q)) {
        int u = desenfilera(&q);
        tipo_no *p = g->VETOR_list_adj[u].prox;
        while(p) {
            if (cor[p->vertice] == 0) {
        		cor[p->vertice] = 1;
        		dist[p->vertice] = dist[u]+1;
        		ant[p->vertice] = u;
        		enfilera(&q, p->vertice);
        		p = p->prox;
            } else {
                p = p->prox;
            }
        }
    cor[u] = 2;
    }
    
    int aux = 0;
    
    for(i = 0; i < visit; i++) {
        if(cor[i] == 0) {
            aux = 1;
            break;
        }
    }
    
    if (aux == 1) {
        printf("INCOMPLETO\n");
    } else {
        printf("COMPLETO\n");
    }
}

int main(){
    int i, n, l, x, y;
    
    scanf("%d %d", &n, &l);
    
    tipo_grafo *G = criaGRAFO(n);
    if (G == NULL)
    	return -1;
    
    for (int i = 0; i < l; i++) {
    	scanf("%d %d", &x, &y);
    	addARESTA(G, x-1, y-1);
    }
    
    buscaLargura(G, 0, n);
    
	return 0;
}