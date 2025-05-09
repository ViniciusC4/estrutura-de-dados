// 14. Escreva uma função `mediaMaiorQue(float v[], int tamanho, float media)` 
//que imprime apenas os elementos maiores que a média.
#include <stdio.h>

void mediaMaiorQue(float v[], int tamanho, float media) {
    for (int i = 0; i < tamanho; i++) {
        if (v[i] > media) {
            printf("%.2f ", v[i]);
        }
    }
    printf("\n");
}
