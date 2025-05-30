#include <stdio.h>

#define TAM_LINHAS 10
#define TAM_COLUNAS 10 
#define TAM_NAVIO 3

int main() {
    int tabuleiro[TAM_LINHAS][TAM_COLUNAS] = {0}; // Tabuleiro zerado
    printf("Mapa: Jogo Batalha Naval\n\n");

    // Navio horizontal na linha 2 (índice 1), colunas 3 a 5
    for (int i = 0; i < TAM_NAVIO; i++) {
        tabuleiro[1][2 + i] = TAM_NAVIO;
    }

    // Navio vertical na coluna 8 (índice 7), linhas 5 a 7
    for (int i = 0; i < TAM_NAVIO; i++) {
        tabuleiro[4 + i][7] = TAM_NAVIO;
    }

    // Navio na diagonal esquerda: posições (1,1), (2,2), (3,3)
    for (int i = 0; i < TAM_NAVIO; i++) {
        tabuleiro[1 + i][1 + i] = TAM_NAVIO;
    }

    // Navio na diagonal direita: posições (2,7), (3,6), (4,5)
    for (int i = 0; i < TAM_NAVIO; i++) {
        tabuleiro[2 + i][7 - i] = TAM_NAVIO;
    }

    // Exibir o tabuleiro
    for (int l = 0; l < TAM_LINHAS; l++) {
        for (int c = 0; c < TAM_COLUNAS; c++) {
            printf("%d ", tabuleiro[l][c]);
        }
        printf("\n");
    }

    return 0;
}