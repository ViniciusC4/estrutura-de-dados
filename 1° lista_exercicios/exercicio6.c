// 6. Crie uma função `mostrarVetor(int v[], int tamanho)` que recebe um vetor de inteiros 
//e imprime todos os seus elementos. Teste com um vetor de 6 posições.
#include <stdio.h>

void mostrarVetor(int v[], int tamanho) {
    for (int i = 0; i < tamanho; i++) {
        printf("%d ", v[i]);
    }
    printf("\n");
}
