#include <stdio.h>

void imprimirVetor(int v[], int tamanho) {
    for(int i = 0; i < tamanho; i++) {
        printf("%d ", v[i]);
    }
    printf("\n");
}

int main() {
    int numeros[5] = {1, 2, 3, 4, 5};
    imprimirVetor(numeros, 5);
    return 0;
}
