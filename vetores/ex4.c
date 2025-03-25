#include <stdio.h>

int main() {
    float notas[5], soma = 0, media;

    for(int i = 0; i < 5; i++) {
        printf("Digite a nota %d: ", i + 1);
        scanf("%f", &notas[i]);
        soma += notas[i];
    }

    media = soma / 5;
    printf("A média das notas é: %.2f\n", media);

    return 0;
}
