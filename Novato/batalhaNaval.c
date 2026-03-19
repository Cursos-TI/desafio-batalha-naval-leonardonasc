#include <stdio.h>

// Desafio Batalha Naval - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de Batalha Naval.
// Siga os comentários para implementar cada parte do desafio.

int main()
{
    // Nível Novato - Posicionamento dos Navios
    // Sugestão: Declare uma matriz bidimensional para representar o tabuleiro (Ex: int tabuleiro[5][5];).
    // Sugestão: Posicione dois navios no tabuleiro, um verticalmente e outro horizontalmente.
    // Sugestão: Utilize `printf` para exibir as coordenadas de cada parte dos navios.

    char linha[5] = {'A', 'B', 'C', 'D', 'E'};
    int tabuleiro[5][5];

    // posicionando o array de letras para ficar alinhado
    printf("    ");
    for (int i = 0; i < 5; i++)
    {
        printf("%c ", linha[i]);
    }
    printf("\n");

    // posicionando o array de números
    for (int i = 0; i < 5; i++)
    {
        printf("%d - ", i);
        for (int j = 0; j < 5; j++)
        {
            // inserindo os 0
            tabuleiro[i][j] = 0;

            // navio na horizontal
            tabuleiro[0][1] = 3;
            tabuleiro[0][2] = 3;
            tabuleiro[0][3] = 3;

            // navio na vertical
            tabuleiro[2][4] = 3;
            tabuleiro[3][4] = 3;
            tabuleiro[4][4] = 3;

            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }

    return 0;
}
