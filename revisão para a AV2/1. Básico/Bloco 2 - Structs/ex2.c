//Usando struct, leia e exiba os dados de 3 produtos: nome e preço.

#include <stdio.h>

struct Produto {
    char nome[30];
    float preco;
};

int main() {
    struct Produto p[3];
    for(int i = 0; i < 3; i++) {
        printf("Produto %d - Nome: ", i + 1);
        scanf(" %[^\n]", p[i].nome);
        printf("Preço: ");
        scanf("%f", &p[i].preco);
    }

    for(int i = 0; i < 3; i++) {
        printf("Produto: %s, Preço: %.2f\n", p[i].nome, p[i].preco);
    }
    return 0;
}
