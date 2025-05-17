#include <stdio.h>

int main() {
    int casasTorre = 5;
    printf("Movimento da Torre:\n");
    for (int i = 0; i < casasTorre; i++) {
        printf("Direita\n");
    }

    int casasBispo = 5;
    int i = 0;
    printf("\nMovimento do Bispo:\n");
    while (i < casasBispo) {
        printf("Cima Direita\n");
        i++;
    }

    int casasRainha = 8;
    int j = 0;
    printf("\nMovimento da Rainha:\n");
    do {
        printf("Esquerda\n");
        j++;
    } while (j < casasRainha);

    int movimentosParaBaixo = 2;
    int movimentosParaEsquerda = 1;

    printf("\nMovimento do Cavalo:\n");

    for (int b = 0; b < movimentosParaBaixo; b++) {
        printf("Baixo\n");
        
        int extra = 0;
        while (extra < 0) {
            extra++;
        }
    }

    int esquerdaFeita = 0;
    while (esquerdaFeita < movimentosParaEsquerda) {
        printf("Esquerda\n");
        esquerdaFeita++;
    }

    return 0;
}
