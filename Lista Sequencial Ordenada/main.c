#include <stdio.h>
#include <stdlib.h>
#define MAX 50
#define ERRO -1
#define true 1
#define false 0

typedef int bool;

typedef int TIPOCHAVE;

typedef struct {
    TIPOCHAVE chave;
    // outros campos...
}REGISTRO;

typedef struct {
    REGISTRO A[MAX+1];
    int nroElem;
} LISTA;

/* Inicialização da lista sequencial */

void inicializarLista(LISTA* l) {
    l->nroElem = 0;
}

//Exibição da lista sequencial
void exibirLista(LISTA* l){
    int i;
    printf("Lista: \"");
}


int main()
{
    printf("Hello world!\n");
    return 0;
}
