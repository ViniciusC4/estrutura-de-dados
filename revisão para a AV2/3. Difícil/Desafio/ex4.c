//DESAFIO 4 — FILA COM PRIORIDADE SIMPLES
//Enunciado: Implemente uma fila com prioridade simulada: 
//Pacientes com idade >= 60 devem entrar na frente da fila. Pacientes < 60 entram no final.

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Paciente {
    char nome[40];
    int idade;
    struct Paciente* prox;
};

void enfileirar(struct Paciente** inicio, struct Paciente** fim, char nome[], int idade) {
    struct Paciente* novo = malloc(sizeof(struct Paciente));
    strcpy(novo->nome, nome);
    novo->idade = idade;
    novo->prox = NULL;

    if (idade >= 60) {
        novo->prox = *inicio;
        *inicio = novo;
        if (*fim == NULL) *fim = novo;
    } else {
        if (*fim) (*fim)->prox = novo;
        else *inicio = novo;
        *fim = novo;
    }
}

void atender(struct Paciente* inicio) {
    printf("Ordem de atendimento:\n");
    while(inicio) {
        printf("Nome: %s | Idade: %d\n", inicio->nome, inicio->idade);
        inicio = inicio->prox;
    }
}

int main() {
    struct Paciente* inicio = NULL, *fim = NULL;
    char nome[40];
    int idade;

    for(int i = 0; i < 5; i++) {
        printf("Nome: ");
        scanf(" %[^\n]", nome);
        printf("Idade: ");
        scanf("%d", &idade);
        enfileirar(&inicio, &fim, nome, idade);
    }

    printf("\n");
    atender(inicio);

    return 0;
}
