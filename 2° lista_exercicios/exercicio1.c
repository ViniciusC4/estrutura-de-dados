#include <stdio.h>
#include <stdlib.h>

struct aluno
{
    char nome[40];
    float nota;
};

typedef struct aluno Aluno;

int main()
{
    Aluno *pAluno;

    // alocação na memória
    pAluno = (Aluno *)malloc(sizeof(Aluno));

    // preenchendo os dados do aluno
    printf("Digite o nome do aluno: ");
    fgets(pAluno->nome, sizeof(pAluno->nome), stdin); // usando fgets para ler o nome

    printf("Digite a nota do aluno: ");
    scanf("%f", &pAluno->nota);

    // mostrando os resultados
    printf("\nAluno: %s", pAluno->nome);
    printf("Nota: %.2f\n", pAluno->nota);

    free(pAluno);

    return 0;
}
