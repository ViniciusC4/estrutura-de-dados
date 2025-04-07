// 12. Faça uma função `contarOcorrencias(int v[], int tamanho, int valor)` 
//que retorna quantas vezes um valor aparece no vetor.
#include <stdio.h>

int contarOcorrencias(int v[], int tamanho, int valor) {
    int cont = 0;
    for (int i = 0; i < tamanho; i++) {
        if (v[i] == valor) cont++;
    }
    return cont;
}
