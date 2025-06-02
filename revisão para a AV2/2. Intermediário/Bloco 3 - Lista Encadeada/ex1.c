//Implemente uma lista encadeada simples que permita: 
//Inserir ordenadamente (valores em ordem crescente) 
//Imprimir a lista

#include <stdio.h>
#include <stdlib.h>

struct No {
    int valor;
    struct No* prox;
};

void inserirOrdenado(struct No** head, int valor) {
    struct No* novo = malloc(sizeof(struct No));
    novo->valor = valor;
    novo->prox = NULL;

    if (*head == NULL || valor < (*head)->valor) {
        novo->prox = *head;
        *head = novo;
    } else {
        struct No* atual = *head;
        while(atual->prox && atual->prox->valor < valor) {
            atual = atual->prox;
        }
        novo->prox = atual->prox;
        atual->prox = novo;
    }
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
    inserirOrdenado(&lista, 30);
    inserirOrdenado(&lista, 10);
    inserirOrdenado(&lista, 20);
    inserirOrdenado(&lista, 5);
    imprimir(lista);
    return 0;
}
