//DESAFIO 3 — PILHA DE NÚMEROS
//Enunciado: Implemente uma pilha de números inteiros e:
 //Armazene 5 números digitados pelo usuário 
 //Em seguida, esvazie a pilha, mas mostrando o somatório dos valores que foram retirados da pilha.

 #include <stdio.h>
#include <stdlib.h>

struct No {
    int valor;
    struct No* prox;
};

void push(struct No** topo, int valor) {
    struct No* novo = malloc(sizeof(struct No));
    novo->valor = valor;
    novo->prox = *topo;
    *topo = novo;
}

int pop(struct No** topo) {
    if (*topo == NULL) return 0;
    struct No* temp = *topo;
    int valor = temp->valor;
    *topo = temp->prox;
    free(temp);
    return valor;
}

int main() {
    struct No* pilha = NULL;
    int num, soma = 0;

    printf("Digite 5 números:\n");
    for(int i = 0; i < 5; i++) {
        scanf("%d", &num);
        push(&pilha, num);
    }

    printf("Desempilhando...\n");
    while(pilha) {
        int valor = pop(&pilha);
        printf("Retirado: %d\n", valor);
        soma += valor;
    }

    printf("Soma total: %d\n", soma);
    return 0;
}
