// 13. Crie uma função `ordenar(int v[], int tamanho)` que ordena o vetor em ordem crescente 
//(use bubble sort ou selection sort). Mostre o vetor antes e depois da ordenação.
#include <stdio.h>

void ordenar(int v[], int tamanho) {
    for (int i = 0; i < tamanho - 1; i++) {
        for (int j = 0; j < tamanho - i - 1; j++) {
            if (v[j] > v[j+1]) {
                int temp = v[j];
                v[j] = v[j+1];
                v[j+1] = temp;
            }
        }
    }
}
