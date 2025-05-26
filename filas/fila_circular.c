#include <stdio.h>
#include <stdlib.h>

#define TAM 5 // Tamanho máximo da Fila

// Estrutura da fila circular
struct Fila
{
    int dados[TAM]; // Vetor que armazena os elementos
    int inicio;     // Índice do primeiro elemento (onde remove)
    int fim;        // Índice do próximo espaço livre (onde insere)
    int quantidade; // Número de elementos atualmente na fila
};

// Inicializa a fila: todo começa vazio
void inicializarFila(struct Fila *f)
{
    f->inicio = 0;     // Início começa em 0
    f->fim = 0;        // Fim começa em 0
    f->quantidade = 0; // Nenhum elemento na fila
}

// Verifica se a fila está cheia
int filaCheia(struct Fila *f)
{
    return f->quantidade == TAM; // Cheia se atingiu o tamanho máximo
}

// Verifica se a fila está vazia
int filaVazia(struct Fila *f)
{
    return f->quantidade == 0; // Vazia se não há elementos
}

// Insere elemento no fim da fila
void enfileirar(struct Fila *f, int valor)
{
    if (filaCheia(f))
    {
        printf("Fila cheia! Não é possível inserir.\n");
        return;
    }

    f->dados[f->fim] = valor;    // Insere o valor na posição 'fim'
    f->fim = (f->fim + 1) % TAM; // Avança fim de forma circular
    f->quantidade++;

    printf("Elemento %d inserido com sucesso.\n", valor);
}

// Remove elemento do início da fila
void desenfileirar(struct Fila *f)
{
    if (filaVazia(f))
    {
        printf("Fila vazia! Nada para remover.\n");
        return;
    }

    int removido = f->dados[f->inicio]; // Pega o valor a ser removido
    f->inicio = (f->inicio + 1) % TAM;  // Avança o início de forma circular
    f->quantidade--;                    // Diminui a contagem de elementos

    printf("Elemento %d removido da fila.\n", removido);
}

// Mostrar a fila do início ao fim
void mostrarFila(struct Fila *f)
{
    if (filaVazia(f))
    {
        printf("Fila vazia.\n");
        return;
    }

    printf("Fila atual: ");
    int i = f->inicio; // Começa pelo início
    int count = 0;

    while (count < f->quantidade)
    {
        printf("%d ", f->dados[i]);
        i = (i + 1) % TAM; // Avança circularmente
        count++;           // Controla o número de elementos mostrados
    }
    printf("\n");
}

// Função principal com menu
int main()
{
    struct Fila fila;       // Declara a fila
    inicializarFila(&fila); // Inicializa a fila

    int opcao, valor;

    do
    {
        // Menu de opções
        printf("\n==== MENU - FILA CIRCULAR COM VETOR ====\n");
        printf("1. Inserir elemento\n");
        printf("2. Remover elemento\n");
        printf("3. Mostrar fila\n");
        printf("0. Sair\n");
        printf("Escolha uma opção: ");
        scanf("%d", &opcao);

        switch (opcao)
        {
        case 1:
            printf("Digite o valor a ser inserido: ");
            scanf("%d", &valor);
            enfileirar(&fila, valor);
            break;
        case 2:
            desenfileirar(&fila);
            break;
        case 3:
            mostrarFila(&fila);
            break;
        case 0:
            printf("Encerrando o programa.\n");
            break;
        default:
            printf("Opção inválida. Tente novamente.\n");
        }
    } while (opcao != 0); // Repete até o usuário escolher sair

    return 0;
}