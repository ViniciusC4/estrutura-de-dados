#include <stdio.h>
#include <ctype.h>

int main() {
    char matriz[4][5];

    printf("Digite a presença (P) ou falta (F) de 4 alunos em 5 dias:\n");
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 5; j++) {
            printf("Aluno %d, Dia %d: ", i + 1, j + 1);
            scanf(" %c", &matriz[i][j]);
            matriz[i][j] = toupper(matriz[i][j]); 
        }
    }

    printf("Presenças registradas:\n");
    for (int i = 0; i < 4; i++) {
        printf("Aluno %d: ", i + 1);
        for (int j = 0; j < 5; j++) {
            printf("%c ", matriz[i][j]); 
        }
        printf("\n");
    }

    return 0;
}
