#include <stdio.h>

void maiorMenor(int v[], int tamanho, int *maior, int *menor) {
    *maior = v[0];
    *menor = v[0];

    for(int i = 1; i < tamanho; i++) {
        if(v[i] > *maior) {
            *maior = v[i];
        }
        if(v[i] < *menor) {
            *menor = v[i];
        }
    }
}

int main() {
    int numeros[5] = {15, 3, 9, 27, 12};
    int maior, menor;

    maiorMenor(numeros, 5, &maior, &menor);
    printf("Maior valor: %d\n", maior);
    printf("Menor valor: %d\n", menor);

    return 0;
}
