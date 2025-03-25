// Estrutura básica de uma função -
#include <stdio.h>

//define uma funçaõ chamada mensagem
//não recebe nenhum parametro ()
//não retorna nada (void)

void mensagem() {
    //imprime uma mensagem na template
    printf("Bem-vindo ao estudo de funções em C!\n");
}

int main () {
    //chama a função mensagem
    mensagem();
    
    return 0; //indica que o programa terminou
}
