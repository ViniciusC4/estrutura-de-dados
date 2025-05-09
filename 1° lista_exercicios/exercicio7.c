// 7. Faça uma função `somaVetor(int v[], int tamanho)` que retorna a soma de todos os 
//elementos do vetor. Mostre o resultado na `main()`.
#include <stdio.h>

int somaVetor(int v[], int tamanho) {
    int soma = 0;
    for (int i = 0; i < tamanho; i++) {
        soma += v[i];
    }
    return soma;
}
