// 15. Monte um programa com menu de opções: 1 - Inserir valores no vetor | 2 - Mostrar vetor | 
// 3 - Somar elementos | 4 - Calcular média | 5 - Sair
// Use uma função diferente para cada opção do menu.

#include <stdio.h>

void inserir(int v[], int tamanho) {
    for (int i = 0; i < tamanho; i++) {
        printf("Valor %d: ", i + 1);
        scanf("%d", &v[i]);
    }
}

void mostrar(int v[], int tamanho) {
    for (int i = 0; i < tamanho; i++) {
        printf("%d ", v[i]);
    }
    printf("\n");
}

int somar(int v[], int tamanho) {
    int soma = 0;
    for (int i = 0; i < tamanho; i++) {
        soma += v[i];
    }
    return soma;
}

float media(int v[], int tamanho) {
    int soma = somar(v, tamanho);
    return (float)soma / tamanho;
}

int main() {
    int v[100], tamanho = 0, opcao;

    do {
        printf("\nMenu:\n");
        printf("1 - Inserir valores\n2 - Mostrar vetor\n3 - Somar elementos\n4 - Calcular média\n5 - Sair\n");
        printf("Escolha uma opção: ");
        scanf("%d", &opcao);
        switch (opcao) {
            case 1:
                printf("Quantos valores deseja inserir? ");
                scanf("%d", &tamanho);
                inserir(v, tamanho);
                break;
            case 2:
                mostrar(v, tamanho);
                break;
            case 3:
                printf("Soma: %d\n", somar(v, tamanho));
                break;
            case 4:
                printf("Média: %.2f\n", media(v, tamanho));
                break;
            case 5:
                printf("Saindo...\n");
                break;
            default:
                printf("Opção inválida!\n");
        }
    } while (opcao != 5);

    return 0;
}
