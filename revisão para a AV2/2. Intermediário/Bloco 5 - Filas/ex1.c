//Usando uma fila (implementada com lista encadeada), simule o atendimento de clientes.
//Cada cliente possui um número. Insira 5 clientes na fila e atenda-os na ordem.

#include <stdio.h>
#include <stdlib.h>

struct No {
    int cliente;
    struct No* prox;
};

struct Fila {
    struct No* inicio;
    struct No* fim;
};

void enqueue(struct Fila* f, int valor) {
    struct No* novo = malloc(sizeof(struct No));
    novo->cliente = valor;
    novo->prox = NULL;
    if (f->fim) f->fim->prox = novo;
    else f->inicio = novo;
    f->fim = novo;
}

int dequeue(struct Fila* f) {
    if (!f->inicio) return -1;
    struct No* temp = f->inicio;
    int valor = temp->cliente;
    f->inicio = temp->prox;
    if (!f->inicio) f->fim = NULL;
    free(temp);
    return valor;
}

int main() {
    struct Fila f = {NULL, NULL};
    for(int i = 1; i <= 5; i++) {
        enqueue(&f, i);
    }

    printf("Ordem de atendimento:\n");
    for(int i = 0; i < 5; i++) {
        printf("Cliente %d atendido.\n", dequeue(&f));
    }

    return 0;
}
