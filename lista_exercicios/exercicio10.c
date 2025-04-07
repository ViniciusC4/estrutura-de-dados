// 10. Faça uma função `parOuImpar(int numero)` que retorna 1 se for par e 0 se for ímpar. 
//Leia 5 números do usuário e informe se são pares ou ímpares, utilizando a função.
#include <stdio.h>

int parOuImpar(int numero) {
    return numero % 2 == 0 ? 1 : 0;
}
