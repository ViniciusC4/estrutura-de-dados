//DESAFIO 2 — STRUCTS + LISTA ENCADEADA
//Enunciado: Crie uma lista encadeada de alunos, com: Nome (char[40]) Nota (float)
//O programa deve permitir: 
//1Inserir aluno ordenado por nome (ordem alfabética) 
//2 Imprimir a lista de alunos

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Aluno {
    char nome[40];
    float nota;
    struct Aluno* prox;
};

void inserirOrdenado(struct Aluno** inicio, char nome[], float nota) {
    struct Aluno* novo = malloc(sizeof(struct Aluno));
    strcpy(novo->nome, nome);
    novo->nota = nota;
    novo->prox = NULL;

    if (*inicio == NULL || strcmp(nome, (*inicio)->nome) < 0) {
        novo->prox = *inicio;
        *inicio = novo;
    } else {
        struct Aluno* atual = *inicio;
        while(atual->prox && strcmp(nome, atual->prox->nome) > 0) {
            atual = atual->prox;
        }
        novo->prox = atual->prox;
        atual->prox = novo;
    }
}

void imprimir(struct Aluno* a) {
    while(a) {
        printf("Nome: %s | Nota: %.2f\n", a->nome, a->nota);
        a = a->prox;
    }
}

int main() {
    struct Aluno* lista = NULL;
    char nome[40];
    float nota;

    for(int i = 0; i < 5; i++) {
        printf("Nome do aluno: ");
        scanf(" %[^\n]", nome);
        printf("Nota: ");
        scanf("%f", &nota);
        inserirOrdenado(&lista, nome, nota);
    }

    printf("\nLista ordenada de alunos:\n");
    imprimir(lista);

    return 0;
}
