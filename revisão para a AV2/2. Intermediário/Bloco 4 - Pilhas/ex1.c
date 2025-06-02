//Usando pilha (implementada com lista encadeada), 
//leia uma palavra e verifique se ela é um palíndromo (ex: "arara").

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct No {
    char letra;
    struct No* prox;
};

void push(struct No** topo, char letra) {
    struct No* novo = malloc(sizeof(struct No));
    novo->letra = letra;
    novo->prox = *topo;
    *topo = novo;
}

char pop(struct No** topo) {
    if (!*topo) return '\0';
    struct No* temp = *topo;
    char letra = temp->letra;
    *topo = temp->prox;
    free(temp);
    return letra;
}

int main() {
    char palavra[100];
    printf("Digite uma palavra: ");
    scanf("%s", palavra);

    struct No* pilha = NULL;
    for(int i = 0; palavra[i] != '\0'; i++) {
        push(&pilha, palavra[i]);
    }

    int palindromo = 1;
    for(int i = 0; palavra[i] != '\0'; i++) {
        if (pop(&pilha) != palavra[i]) {
            palindromo = 0;
            break;
        }
    }

    if (palindromo) {
        printf("É palíndromo!\n");
    } else {
        printf("Não é palíndromo.\n");
    }

    return 0;
}
