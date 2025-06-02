//Implemente uma fila usando lista encadeada. Faça operações de enqueue e dequeue.

#include <stdio.h>
#include <stdlib.h>

struct No {
    int valor;
    struct No* prox;
};

struct Fila {
    struct No* inicio;
    struct No* fim;
};

void enqueue(struct Fila* f, int valor) {
    struct No* novo = malloc(sizeof(struct No));
    novo->valor = valor;
    novo->prox = NULL;
    if (f->fim) f->fim->prox = novo;
    else f->inicio = novo;
    f->fim = novo;
}

int dequeue(struct Fila* f) {
    if (!f->inicio) return -1;
    struct No* temp = f->inicio;
    int valor = temp->valor;
    f->inicio = temp->prox;
    if (!f->inicio) f->fim = NULL;
    free(temp);
    return valor;
}

int main() {
    struct Fila f = {NULL, NULL};
    enqueue(&f, 10);
    enqueue(&f, 20);
    printf("Saiu: %d\n", dequeue(&f));
    printf("Saiu: %d\n", dequeue(&f));
    return 0;
}
