// 3. Faça uma função `soma(int a, int b)` que retorna a soma de dois números inteiros.
// Solicite os dois números na `main()` e exiba o resultado da função.
#include <stdio.h>

int soma(int a, int b) {
    return a + b;
}

int main() {
    int x, y;
    printf("Digite dois números: ");
    scanf("%d %d", &x, &y);
    printf("Soma: %d\n", soma(x, y));
    return 0;
}
