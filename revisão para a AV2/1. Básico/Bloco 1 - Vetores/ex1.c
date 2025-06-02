//Declare um vetor de 5 inteiros. 
//Peça para o usuário digitar os 5 números e, ao final, exiba todos os números digitados.

#include <stdio.h>

int main() {
    int numeros[5];
    printf("Digite 5 numeros:\n");
    for(int i = 0; i < 5; i++) {
        scanf("%d", &numeros[i]);
    }

    printf("Numeros digitados:\n");
    for(int i = 0; i < 5; i++) {
        printf("%d ", numeros[i]);
    }
    return 0;
}
