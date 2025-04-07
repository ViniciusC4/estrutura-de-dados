// 11. Crie uma função `buscaElemento(int v[], int tamanho, int valor)` que retorna o índice 
//do valor no vetor ou -1 se não for encontrado. Teste com diferentes valores.
#include <stdio.h>

int buscaElemento(int v[], int tamanho, int valor) {
    for (int i = 0; i < tamanho; i++) {
        if (v[i] == valor) return i;
    }
    return -1;
}
