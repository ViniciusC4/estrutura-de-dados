#include <stdio.h>

int main() {
    int matriz[3][3], soma = 0;
    float media;

    printf("Digite os 9 valores da matriz 3x3:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("Digite o valor para a posição [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
            soma += matriz[i][j];
        }
    }

    media = soma / 9.0;

    printf("Soma: %d\n", soma);
    printf("Média: %.2f\n", media);
    printf("Diagonal principal: %d %d %d\n", matriz[0][0], matriz[1][1], matriz[2][2]);

    return 0;
}
