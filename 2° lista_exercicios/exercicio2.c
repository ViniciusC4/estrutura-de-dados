#include <stdio.h>

struct Pessoa
{
    int idade;
    float altura;
};

int main()
{
    struct Pessoa *p;
    p->idade = 20;
    p->altura = 1.77;
 
    printf("Idade da pessoa:%d \n", p->idade);
    printf("Altura da pessoa:%.2f \n", p->altura);

    return 0;
}
