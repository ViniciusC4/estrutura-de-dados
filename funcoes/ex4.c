// Exemplo 4 - Função recursiva(fatorial com recursão)(Recursão é quando a função chama a si mesma)
#include <stdio.h>

//função recursiva para calcular fatorial
int fatorial(int n) {
    //caso base: se n for 0 ou 1, o fatorial é 1
    if(n == 0 || n == 1) {
        return 1;
    }

    //chamada recursiva: n * fatorial(n-1)
    return n * fatorial(n - 1);
}

int main() {
    int numero = 6;

    //chama a função recursiva
    printf("Fatorial de %d é %d\n", numero, fatorial(numero));

    return 0;
}