//Defina uma struct Aluno com nome, nota1, nota2. 
//Leia os dados de 5 alunos e imprima os nomes dos alunos com média >= 7.0.

#include <stdio.h>

struct Aluno {
    char nome[40];
    float nota1, nota2;
};

int main() {
    struct Aluno alunos[5];
    for(int i = 0; i < 5; i++) {
        printf("Nome do aluno %d: ", i + 1);
        scanf(" %[^\n]", alunos[i].nome);
        printf("Nota 1: ");
        scanf("%f", &alunos[i].nota1);
        printf("Nota 2: ");
        scanf("%f", &alunos[i].nota2);
    }

    printf("Alunos com média >= 7.0:\n");
    for(int i = 0; i < 5; i++) {
        float media = (alunos[i].nota1 + alunos[i].nota2) / 2;
        if(media >= 7.0) {
            printf("%s\n", alunos[i].nome);
        }
    }

    return 0;
}
