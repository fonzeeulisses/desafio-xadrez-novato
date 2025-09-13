#include <stdio.h>

// Definindo constantes para o número de casas de movimento de cada peça
#define BISPO_CASAS 5
#define TORRE_CASAS 5
#define RAINHA_CASAS 8

int main() {
    printf("--- Movimentacao das Pecas de Xadrez ---\n");
    printf("\n");

    // --- Movimentação do Bispo (5 casas na diagonal superior direita) ---
    // Usando um loop 'for' para simular o movimento do Bispo
    printf("Movimento do Bispo:\n");
    for (int i = 0; i < BISPO_CASAS; i++) {
        // Para simular a diagonal, usamos a combinação de 'Cima' e 'Direita'
        printf("Cima, Direita\n");
    }
    printf("\n");

    // --- Movimentação da Torre (5 casas para a direita) ---
    // Usando um loop 'while' para simular o movimento da Torre
    printf("Movimento da Torre:\n");
    int contador_torre = 0;
    while (contador_torre < TORRE_CASAS) {
        printf("Direita\n");
        contador_torre++;
    }
    printf("\n");

    // --- Movimentação da Rainha (8 casas para a esquerda) ---
    // Usando um loop 'do-while' para simular o movimento da Rainha
    printf("Movimento da Rainha:\n");
    int contador_rainha = 0;
    do {
        printf("Esquerda\n");
        contador_rainha++;
    } while (contador_rainha < RAINHA_CASAS);
    printf("\n");

    return 0;
}