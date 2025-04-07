// 8. Crie uma função `mediaNotas(float notas[], int qtd)` que calcula a média de notas
// e retorna o valor. Leia 4 notas do usuário, chame a função e mostre a média com duas casas decimais.
#include <stdio.h>

float mediaNotas(float notas[], int qtd) {
    float soma = 0;
    for (int i = 0; i < qtd; i++) {
        soma += notas[i];
    }
    return soma / qtd;
}
