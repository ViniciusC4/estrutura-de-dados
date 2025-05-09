#include <stdio.h>

struct produto
{
    char nome[50];
    float preco;
};

typedef struct produto Produto;

int main()
{
    Produto produtos[3];
    Produto *ptr;

    ptr = produtos;

    // preenchendo dados dos vetores
    for (int i = 0; i < 3; i++)
    {
        printf("Digite o nome do %d° produto: ", i + 1);
        scanf("%s", ptr[i].nome);

        printf("Digite o preço do %d° produto: ", i + 1);
        scanf("%f", &ptr[i].preco);

        printf("\n");
    }

    for (int i = 0; i < 3; i++)
    {
        printf("Produto %d: %s, Preço: R$%.2f\n", i + 1, ptr[i].nome, ptr[i].preco);
    }

    return 0;
}
