#include <stdio.h>

void moverTorre(int casasRestantes) {
    if (casasRestantes <= 0)
        return;
    printf("Direita\n");
    moverTorre(casasRestantes - 1); // chamada recursiva
}

void moverRainha(int casasRestantes) {
    if (casasRestantes <= 0)
        return;
    printf("Esquerda\n");
    moverRainha(casasRestantes - 1); // chamada recursiva
}

void moverBispoRecursivo(int casas) {
    if (casas <= 0)
        return;

    // Movimento do bispo com recursividade
    printf("Cima Direita\n");
    moverBispoRecursivo(casas - 1);
}

void moverBispoComLoops(int casasVerticais, int casasHorizontais) {
    printf("Movimento do Bispo com Loops Aninhados:\n");
    for (int v = 0; v < casasVerticais; v++) {
        for (int h = 0; h < casasHorizontais; h++) {
            if (v == h) {
                printf("Cima Direita\n");
                break; // Uma casa diagonal por vez
            }
        }
    }
}

void moverCavalo() {
    printf("Movimento do Cavalo:\n");

    int movimentosVerticais = 2;
    int movimentosHorizontais = 1;

    for (int i = 0; i < movimentosVerticais + 1; i++) {
        for (int j = 0; j < movimentosHorizontais + 1; j++) {

            if (i < movimentosVerticais) {
                printf("Cima\n");
                printf("Direita\n");
            } else {
            }
        }
    }
}

int main() {
    // ==================== Torre ====================
    printf("Movimento da Torre:\n");
    moverTorre(5); // Move 5 casas para a direita

    printf("\nMovimento do Bispo (Recursivo):\n");
    moverBispoRecursivo(5); // Move 5 casas na diagonal cima-direita

    printf("\nMovimento da Rainha:\n");
    moverRainha(8); // Move 8 casas para a esquerda

    printf("\n");
    moverCavalo(); // Move 2 para cima e 1 para a direita

    printf("\n");
    moverBispoComLoops(5, 5); // Move 5 casas diagonais usando for aninhado

    return 0;
}
