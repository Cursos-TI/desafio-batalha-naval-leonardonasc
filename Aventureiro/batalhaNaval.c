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

    // Nível Aventureiro - Expansão do Tabuleiro e Posicionamento Diagonal
    // Sugestão: Expanda o tabuleiro para uma matriz 10x10.
    // Sugestão: Posicione quatro navios no tabuleiro, incluindo dois na diagonal.
    // Sugestão: Exiba o tabuleiro completo no console, mostrando 0 para posições vazias e 3 para posições ocupadas.

    char linha[10] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J'};
    int tabuleiro[10][10];

    printf(" ");
    for (int i = 0; i < 10; i++)
    {
        printf(" %c", linha[i]);
        for (int j = 0; j < 10; j++)
        {
            tabuleiro[i][j] = 0;
        }
    }
    printf("\n");

    // adicionando os navios

    // horizontal
    if (tabuleiro[0][1] == 0 && tabuleiro[0][2] == 0 && tabuleiro[0][3] == 0)
    {
        tabuleiro[0][1] = 3;
        tabuleiro[0][2] = 3;
        tabuleiro[0][3] = 3;
    }
    else
    {
        printf("posicao já atribuida em [%d] e [%d]\n", 0, 1);
    }

    // vertical
    if (tabuleiro[2][5] == 0 && tabuleiro[3][5] == 0 && tabuleiro[4][5] == 0)
    {
        tabuleiro[2][5] = 3;
        tabuleiro[3][5] = 3;
        tabuleiro[4][5] = 3;
    }
    else
    {
        printf("posicao já atribuida em [%d] e [%d]\n", 2, 5);
    }

    // diagonal
    if (tabuleiro[5][0] == 0 && tabuleiro[6][1] == 0 && tabuleiro[7][2] == 0)
    {
        tabuleiro[5][0] = 3;
        tabuleiro[6][1] = 3;
        tabuleiro[7][2] = 3;
    }
    else
    {
        printf("posicao já atribuida em [%d] e [%d]\n", 5, 0);
    }

    // diagonal 2
    if (tabuleiro[8][4] == 0 && tabuleiro[7][5] == 0 && tabuleiro[6][6] == 0)
    {
        tabuleiro[8][4] = 3;
        tabuleiro[7][5] = 3;
        tabuleiro[6][6] = 3;
    }
    else
    {
        printf("posicao já atribuida em [%d] e [%d]\n", 8, 4);
    }

    // impressao do tabuleiro
    for (int i = 0; i < 10; i++)
    {
        printf("%d ", i);
        for (int j = 0; j < 10; j++)
        {
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }

    return 0;
}
