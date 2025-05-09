#include <stdio.h>
#include <stdlib.h>

struct livro
{
    char titulo[100];
    int paginas;
};

typedef struct livro Livro;

int main()
{
    Livro *livros = (Livro *)malloc(2 * sizeof(Livro));

    strcpy(livros[0].titulo, "50 Tons de Cinza");
    livros[0].paginas = 480;

    strcpy(livros[1].titulo, "O Pequeno Príncipe");
    livros[1].paginas = 120;

    for (int i = 0; i < 2; i++)
    {
        printf("Livro %d:\n", i + 1);
        printf("Título: %s\n", livros[i].titulo);
        printf("Páginas: %d\n\n", livros[i].paginas);
    }

    free(livros);

    return 0;
}
