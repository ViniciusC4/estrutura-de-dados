#include <stdio.h>

struct pessoa
{
    char nome [50];
    float altura;
};

typedef struct pessoa Pessoa;

void atualizarAltura(Pessoa *p) {
    p->altura *= 1.10; // aumentando a altura em 10%
};

int main()
{
    Pessoa pessoa1 = {"Vinicius", 1.79};

    printf("Antes: %s tem %.2fm de altura\n", pessoa1.nome, pessoa1.altura);

    atualizarAltura(&pessoa1);

    printf("Depois de atualizar: %s tem %.2fm de altura\n", pessoa1.nome, pessoa1.altura);

    return 0;
};
