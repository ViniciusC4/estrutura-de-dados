#include <stdio.h>

int main() {
    int vetor[5];

    for(int i = 0; i < 5; i++) {
        printf("Digite o valor para a posição %d: ", i);
        scanf("%d", &vetor[i]);
    }

    printf("Valores armazenados:\n");
    for(int i = 0; i < 5; i++) {
        printf("%d ", vetor[i]);
    }

    return 0;
}
