// 5. Leia 5 valores inteiros do teclado e armazene-os em um vetor. Depois, mostre os valores lidos.
#include <stdio.h>

int main() {
    int v[5];
    for (int i = 0; i < 5; i++) {
        printf("Digite o valor %d: ", i+1);
        scanf("%d", &v[i]);
    }
    for (int i = 0; i < 5; i++) {
        printf("v[%d] = %d\n", i, v[i]);
    }
    return 0;
}
