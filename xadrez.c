#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código implementa a movimentação das peças de xadrez usando estruturas de repetição e funções.

// Função recursiva para movimentação do Bispo
void moverBispo(int casas) {
    if (casas == 0) return;
    printf("Cima, Direita\n");
    moverBispo(casas - 1);
}

// Função iterativa para movimentação da Torre
void moverTorre(int casas) {
    for (int i = 0; i < casas; i++) {
        printf("Direita\n");
    }
}

// Função iterativa para movimentação da Rainha
void moverRainha(int casas) {
    int i = 0;
    while (i < casas) {
        printf("Esquerda\n");
        i++;
    }
}

// Função para movimentação do Cavalo
void moverCavalo() {
    int movimentos[8][2] = {{2, 1}, {2, -1}, {-2, 1}, {-2, -1}, {1, 2}, {1, -2}, {-1, 2}, {-1, -2}};
    for (int i = 0; i < 8; i++) {
        printf("Movimento do Cavalo: (%d, %d)\n", movimentos[i][0], movimentos[i][1]);
    }
}

int main() {
    printf("Movimentação do Bispo:\n");
    moverBispo(5);
    printf("\n");

    printf("Movimentação da Torre:\n");
    moverTorre(5);
    printf("\n");

    printf("Movimentação da Rainha:\n");
    moverRainha(8);
    printf("\n");

    printf("Movimentação do Cavalo:\n");
    moverCavalo();
    printf("\n");

    return 0;
}