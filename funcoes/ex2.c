// Exemplo 2 - Função que soma dois números
#include <stdio.h>

//define uma função chamada somar
//recebe dois inteiros como parametro: a e b
//retorna um inteiro (a soma)

int somar(int a, int b) {
    return a + b; //retorna a soma
}

int main() {
    int x = 10, y = 5; //declara duas variáveis
    int resultado;
    
    //chama a função somar passando x e y 
    resultado = somar(x, y);

    //imprime o resultado da soma
    printf("Resultado da soma: %d\n", resultado);
    
    return 0;
}
