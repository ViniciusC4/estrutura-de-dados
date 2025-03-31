#include <stdio.h>

int main() {
    float notas[3][3], media_alunos[3] = {0}, media_materias[3] = {0};

    printf("Digite as notas dos 3 alunos em 3 matérias:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("Aluno %d, Matéria %d: ", i + 1, j + 1);
            scanf("%f", &notas[i][j]);
            media_alunos[i] += notas[i][j];
            media_materias[j] += notas[i][j];
        }
    }

    for (int i = 0; i < 3; i++) {
        printf("Média do aluno %d: %.2f\n", i + 1, media_alunos[i] / 3);
        printf("Média da matéria %d: %.2f\n", i + 1, media_materias[i] / 3);
    }

    return 0;
}
