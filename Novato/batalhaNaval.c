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

    // Exemplos de exibição das habilidades:
    // Exemplo para habilidade em cone:
    // 0 0 1 0 0
    // 0 1 1 1 0
    // 1 1 1 1 1

    // Exemplo para habilidade em octaedro:
    // 0 0 1 0 0
    // 0 1 1 1 0
    // 0 0 1 0 0

    // Exemplo para habilidade em cruz:
    // 0 0 1 0 0
    // 1 1 1 1 1
    // 0 0 1 0 0

    char linha[10] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J'};
    int tabuleiro[10][10];

    // posicionando o array de letras para ficar alinhado
    printf("    ");
    for (int i = 0; i < 10; i++)
    {
        printf("%c ", linha[i]);
    }
    printf("\n");

    // posicionando o array de números
    for (int i = 0; i < 10; i++)
    {
        printf("%d - ", i);
        for (int j = 0; j < 10; j++)
        {
            // inserindo os 0
            tabuleiro[i][j] = 0;

            // navio na horizontal
            tabuleiro[3][3] = 3;
            tabuleiro[3][4] = 3;
            tabuleiro[3][5] = 3;

            // navio na vertical
            tabuleiro[6][7] = 3;
            tabuleiro[7][7] = 3;
            tabuleiro[8][7] = 3;

            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }

    return 0;
}
