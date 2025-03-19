#include <stdio.h>

int main() {
    int tabuleiro[10][10] = {0}; // Inicializa o tabuleiro com água (0)

    
    int linhaNavio = 4; 
    int colunaInicio = 2; 
    for (int i = 0; i < 3; i++) { 
        tabuleiro[linhaNavio][colunaInicio + i] = 3;
    }

    // Exibe o tabuleiro no terminal
    printf("Tabuleiro do Batalha Naval:\n");
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n"); 

    return 0;
}