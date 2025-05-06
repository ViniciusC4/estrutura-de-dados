#include <stdio.h>
#include <string.h>

// Definição da struct Pessoa
struct Pessoa
{
    char nome[100]; // Campo para o nome
    int idade;      // Campo para a idade
    float altura;   // Campo para a altura
};

// Função que recebe um ponteiro para struct Pessoa
void atualizarIdade(struct Pessoa *p)
{
    p->idade += 1; // Acessa diretamente o campo idade e incrementa
}

int main()
{
    struct Pessoa pessoa;

    // Inicializando os dados
    strcpy(pessoa.nome, "Ana Paula");
    pessoa.idade = 25;
    pessoa.altura = 1.65;

    // Exibindo antes da alteração
    printf("Antes (por ponteiro): %d anos\n", pessoa.idade);

    // Passando o endereço da struct
    atualizarIdade(&pessoa);

    // Exibindo depois da alteração
    printf("Depois (por ponteiro): %d anos\n", pessoa.idade); // Agora a idade foi alterada!

    return 0;
}
