#include <stdio.h>

int main(void)
{
    int height, i, j;

    do
    {
        printf("Digite a altura da pirâmide (entre 1 e 8): ");
        if (scanf("%d", &height) != 1) // Verifica se o usuário inseriu um número válido
        {
            printf("Erro: você deve inserir um número válido.\n");
            while (getchar() != '\n'); // Descarta caracteres inválidos do buffer
            continue;
        }
    }
    while (height < 1 || height > 8);

    for (i = 1; i <= height; i++)
    {
        // Pirâmide esquerda
        for (j = 1; j <= height - i; j++)
        {
            printf(" ");
        }
        for (j = 1; j <= i; j++)
        {
            printf("#");
        }

        // Espaço entre as pirâmides
        printf(" ");

        // Pirâmide direita
        for (j = 1; j <= i; j++)
        {
            printf("#");
        }
        printf("\n");
    }

    return 0;
}
