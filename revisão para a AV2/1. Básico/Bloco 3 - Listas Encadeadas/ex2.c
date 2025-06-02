#include <stdio.h>
#include <stdlib.h>

struct No
{
    int valor;
    struct No *prox;
};

void push(struct No **topo, int valor)
{
    struct No *novo = malloc(sizeof(struct No));
    novo->valor = valor;
    novo->prox = *topo;
    *topo = novo;
}

int pop(struct No **topo)
{
    if (*topo == NULL)
        return -1;
    struct No *temp = *topo;
    int valor = temp->valor;
    *topo = temp->prox;
    free(temp);
    return valor;
}

void imprimirPilha(struct No *topo)
{
    printf("Pilha atual:\n");
    while (topo != NULL)
    {
        printf("%d\n", topo->valor);
        topo = topo->prox;
    }
}

int main()
{
    struct No *pilha = NULL;

    push(&pilha, 1); // Pilha: 1
    push(&pilha, 2); // Pilha: 2 -> 1
    push(&pilha, 3); // Pilha: 3 -> 2 -> 1

    imprimirPilha(pilha);

    printf("Pop: %d\n", pop(&pilha)); // Remove 3
    imprimirPilha(pilha);

    printf("Pop: %d\n", pop(&pilha)); // Remove 2
    imprimirPilha(pilha);

    return 0;
}