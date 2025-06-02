//Dado um vetor de 6 números inteiros já preenchido, faça uma função que encontre e retorne o maior valor.

#include <stdio.h>

int encontrarMaior(int v[], int tamanho) {
    int maior = v[0];
    for(int i = 1; i < tamanho; i++) {
        if(v[i] > maior) maior = v[i];
    }
    return maior;
}

int main() {
    int v[6] = {4, 12, 7, 19, 3, 10};
    printf("Maior valor: %d\n", encontrarMaior(v, 6));
    return 0;
}
