//DESAFIO 5— LISTA DUPLAMENTE ENCADEADA CIRCULAR — Inserir no Fim e Remover por Valor
//Enunciado: Implemente uma Lista Duplamente Encadeada Circular que permita: 
//Inserir no fim Remover um elemento pelo valor Imprimir a lista circular 
//(faça um laço que pare quando voltar ao primeiro elemento)

#include <stdio.h>
#include <stdlib.h>

struct No {
    int valor;
    struct No* ant;
    struct No* prox;
};

void inserirFim(struct No** inicio) {
    int valor;
    printf("Digite valor para inserir: ");
    scanf("%d", &valor);

    struct No* novo = malloc(sizeof(struct No));
    novo->valor = valor;
    if (*inicio == NULL) {
        novo->prox = novo->ant = novo;
        *inicio = novo;
    } else {
        struct No* ultimo = (*inicio)->ant;
        novo->prox = *inicio;
        novo->ant = ultimo;
        ultimo->prox = novo;
        (*inicio)->ant = novo;
    }
}

void removerPorValor(struct No** inicio, int valor) {
    if (!*inicio) return;

    struct No* atual = *inicio;
    do {
        if (atual->valor == valor) {
            if (atual->prox == atual) {
                free(atual);
                *inicio = NULL;
            } else {
                atual->ant->prox = atual->prox;
                atual->prox->ant = atual->ant;
                if (atual == *inicio) *inicio = atual->prox;
                free(atual);
            }
            return;
        }
        atual = atual->prox;
    } while(atual != *inicio);
}

void imprimir(struct No* inicio) {
    if (!inicio) {
        printf("Lista vazia.\n");
        return;
    }
    struct No* atual = inicio;
    printf("Lista circular: ");
    do {
        printf("%d <-> ", atual->valor);
        atual = atual->prox;
    } while(atual != inicio);
    printf("(volta ao início)\n");
}

int main() {
    struct No* lista = NULL;

    inserirFim(&lista);
    inserirFim(&lista);
    inserirFim(&lista);
    imprimir(lista);

    int valor;
    printf("Valor para remover: ");
    scanf("%d", &valor);
    removerPorValor(&lista, valor);
    imprimir(lista);

    return 0;
}
