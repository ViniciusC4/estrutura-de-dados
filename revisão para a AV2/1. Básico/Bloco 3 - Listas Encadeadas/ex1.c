//Implemente uma lista encadeada simples que permita inserir valores no início e imprimir a lista.

#include <stdio.h>
#include <stdlib.h>

struct No {
    int valor;
    struct No* prox;
};

void inserirInicio(struct No** head, int valor) {
    struct No* novo = malloc(sizeof(struct No));
    novo->valor = valor;
    novo->prox = *head;
    *head = novo;
}

void imprimir(struct No* head) {
    while(head) {
        printf("%d -> ", head->valor);
        head = head->prox;
    }
    printf("NULL\n");
}

int main() {
    struct No* lista = NULL;
    inserirInicio(&lista, 10);
    inserirInicio(&lista, 20);
    inserirInicio(&lista, 30);
    imprimir(lista);
    return 0;
}
