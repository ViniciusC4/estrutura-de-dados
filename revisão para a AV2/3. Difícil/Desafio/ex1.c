//DESAFIO 1 — VETORES + ORDENAÇÃO
//Enunciado: 
//Crie um programa que leia 10 números inteiros e os ordene em ordem decrescente. Imprima o vetor ordenado.

#include <stdio.h>

void ordenarDecrescente(int v[], int n) {
    for(int i = 0; i < n - 1; i++) {
        for(int j = i + 1; j < n; j++) {
            if(v[i] < v[j]) {
                int temp = v[i];
                v[i] = v[j];
                v[j] = temp;
            }
        }
    }
}

int main() {
    int v[10];
    printf("Digite 10 números:\n");
    for(int i = 0; i < 10; i++) {
        scanf("%d", &v[i]);
    }

    ordenarDecrescente(v, 10);

    printf("Vetor ordenado decrescentemente:\n");
    for(int i = 0; i < 10; i++) {
        printf("%d ", v[i]);
    }

    return 0;
}
