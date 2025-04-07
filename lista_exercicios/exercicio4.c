// 4. Declare um vetor de 5 inteiros, atribua valores manualmente e use um `for` para imprimir cada valor na tela.
#include <stdio.h>

int main() {
    int v[5] = {1, 2, 3, 4, 5};
    for (int i = 0; i < 5; i++) {
        printf("v[%d] = %d\n", i, v[i]);
    }
    return 0;
}
