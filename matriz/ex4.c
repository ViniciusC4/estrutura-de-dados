#include <stdio.h>

int verificar_vencedor(char tabuleiro[3][3]) {
    //linhas e colunas
    for (int i = 0; i < 3; i++) {
        if (tabuleiro[i][0] != ' ' && tabuleiro[i][0] == tabuleiro[i][1] && tabuleiro[i][1] == tabuleiro[i][2])
            return (tabuleiro[i][0] == 'X') ? 1 : 2;
        if (tabuleiro[0][i] != ' ' && tabuleiro[0][i] == tabuleiro[1][i] && tabuleiro[1][i] == tabuleiro[2][i])
            return (tabuleiro[0][i] == 'X') ? 1 : 2;
    }

    //diagonais
    if (tabuleiro[0][0] != ' ' && tabuleiro[0][0] == tabuleiro[1][1] && tabuleiro[1][1] == tabuleiro[2][2])
        return (tabuleiro[0][0] == 'X') ? 1 : 2;
    if (tabuleiro[0][2] != ' ' && tabuleiro[0][2] == tabuleiro[1][1] && tabuleiro[1][1] == tabuleiro[2][0])
        return (tabuleiro[0][2] == 'X') ? 1 : 2;

    return 0; 
}

void imprimir_tabuleiro(char tabuleiro[3][3]) {
    printf("Tabuleiro atualizado:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf(" %c ", tabuleiro[i][j]);
            if (j < 2) printf("|");
        }
        printf("\n");
        if (i < 2) printf("---+---+---\n");
    }
}

int main() {
    char tabuleiro[3][3] = {{' ', ' ', ' '}, {' ', ' ', ' '}, {' ', ' ', ' '}};
    int linha, coluna, jogador = 0, vencedor = 0;

    for (int jogadas = 0; jogadas < 9; jogadas++) {
        printf("Jogador %d, escolha linha e coluna (1-3): ", jogador + 1);
        scanf("%d %d", &linha, &coluna);

        linha--; 
        coluna--;

        if (linha >= 0 && linha < 3 && coluna >= 0 && coluna < 3 && tabuleiro[linha][coluna] == ' ') {
            tabuleiro[linha][coluna] = (jogador == 0) ? 'X' : 'O';
            imprimir_tabuleiro(tabuleiro);

            vencedor = verificar_vencedor(tabuleiro);
            if (vencedor) {
                printf("Jogador %d venceu!\n", vencedor);
                return 0;
            }

            jogador = 1 - jogador;
        } else {
            printf("Posição inválida ou ocupada! Tente novamente.\n");
            jogadas--;
        }
    }

    printf("Empate! Nenhum jogador venceu.\n");
    return 0;
}
