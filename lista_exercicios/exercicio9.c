// 9. Escreva uma função `maiorMenor(int v[], int tamanho)` que imprime o maior e o menor 
//valor contido no vetor.
#include <stdio.h>

void maiorMenor(int v[], int tamanho) {
    int maior = v[0], menor = v[0];
    for (int i = 1; i < tamanho; i++) {
        if (v[i] > maior) maior = v[i];
        if (v[i] < menor) menor = v[i];
    }
    printf("Maior: %d, Menor: %d\n", maior, menor);
}
