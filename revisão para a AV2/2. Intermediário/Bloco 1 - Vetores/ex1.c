// Faça um programa que leia um vetor de 10 números inteiros.
//Em seguida, remova todos os números pares do vetor (desloque os elementos) e exiba o vetor atualizado.

#include <stdio.h>

int main() {
    int v[10], i, j, tamanho = 10;
    printf("Digite 10 números:\n");
    for(i = 0; i < tamanho; i++) {
        scanf("%d", &v[i]);
    }

    for(i = 0; i < tamanho; i++) {
        if(v[i] % 2 == 0) {
            for(j = i; j < tamanho - 1; j++) {
                v[j] = v[j + 1];
            }
            tamanho--;
            i--; // voltar para verificar o novo valor na posição
        }
    }

    printf("Vetor sem os pares:\n");
    for(i = 0; i < tamanho; i++) {
        printf("%d ", v[i]);
    }

    return 0;
}
