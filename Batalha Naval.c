
#include <stdio.h>

#define linhas 10
#define colunas 10 
#define navio 3

int main() {
    int matriz[linhas][colunas] = {0}; // Inicializa todos os elementos com 0.
    int diagonalE = 0;
    int diagonalD = 9;
    printf("Tabuleiro: Batalha Naval \n");
    
    // loop para o navio ocupar 3 posições horizontais.
    for (int i = 0; i < navio; i++) {
        for (int j = 0; j < navio; j++)
        {
            matriz[i + 4][1] = navio;
        }
    }

    // loop para o navio ocupar 3 posições vertical.
    for (int i = 0; i < navio; i++) {
        for (int j = 0; j < navio; j++)
        {
            matriz[4][7 + j] = navio;
        }
    }

    // loop para o navio na diagonal esquerda.
    for (int i = 0; i < navio; i++)
    {
        for (int j = 0; j < navio; j++)
        {
            matriz[diagonalE][diagonalE] = navio;  
        }
        diagonalE++;
    }

    // loop para o navio na diagonal direita.
    for (int i = 0; i < navio; i++)
    {
        for (int j = 0; j < navio; j++)
        {
            matriz[diagonalD][diagonalD] = navio;  
        }
        diagonalD--;
    }

    // Mostrar o tabuleiro no painel.
    for (int i = 0; i < linhas; i++) 
    {
        for (int j = 0; j < colunas; j++)
        {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

    return 0;
}

