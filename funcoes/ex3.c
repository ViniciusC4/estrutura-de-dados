// Exemplo 3 - Função com estrutura de repetição (calcular o fatorial de um número)
#include <stdio.h>

//função que calcula o fatorial usando repetição
int fatorial(int n) {
    int resultado = 1; //inicializa com 1 (neutro da multiplicação)

    for(int i = 1; i <= n; i++) {
        resultado *= i; //multiplica resultado por i em cada passo
    }

    return resultado; //retorna o fatorial
}

int main() {
    int numero = 5;

    //chama a função fatorial com número 5
    printf("Fatorial de %d é %d\n", numero, fatorial(numero));

    return 0;
}
