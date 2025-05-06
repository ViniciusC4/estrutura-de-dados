#include <stdio.h>
#include <string.h> // Biblioteca para manipulação de strings

// Definição da struct Pessoa
struct Pessoa {
    char nome[100];  // Campo para o nome
    int idade;       // Campo para a idade
    float altura;    // Campo para a altura
};

// Função que recebe uma cópia da struct (passagem por valor)
void atualizarIdade(struct Pessoa p) {
    p.idade += 1; // Modifica apenas a cópia local, NÃO afeta o original
}

int main() {
    struct Pessoa pessoa;

    // Inicializando os dados
    strcpy(pessoa.nome, "Ana Paula");
    pessoa.idade = 25;
    pessoa.altura = 1.65;

    // Exibindo antes da função
    printf("Antes (por valor): %d anos\n", pessoa.idade);

    // Chamando a função que recebe a struct por valor
    atualizarIdade(pessoa); // A idade da struct original não será alterada

    // Exibindo depois da função
    printf("Depois (por valor): %d anos\n", pessoa.idade); // A idade continua 25

    return 0;
}
