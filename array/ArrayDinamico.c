#include <stdio.h> #include <stdlib.h>
int main()
{
    int *vetor;
    int n = 0;
    int tamanho = 5;

    // Biblioteca padrão de entrada e saída
    // Biblioteca para alocação dinâmica de memória
    // Declara um ponteiro para inteiro
    // Número de elementos atualmente no vetor // Tamanho máximo inicial para o vetor

    vetor = malloc(tamanho * sizeof(int)); // Aloca memória para 5 inteiros

    vetor[n++] = 15;
    vetor[n++] = 25;
    vetor[n++] = 5;

    // Insere 15 na posição e
    // Insere 25 na posição 1
    // Insere 5 na posição 2

    printf("Vetor não ordenado (Array Dinâmico):\n"); // Mensagem inicial

    for (int i = 0; i < n; i++)
    {                                            // Percorre os elementos inseridos
        printf("Posição %d: %d\n", i, vetor[i]); // Exibe a posição e o valor
    }

    free(vetor); // Libera a memória alocada dinamicamente

    return 0; // Finaliza o programa
}