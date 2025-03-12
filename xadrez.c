#include <stdio.h>

// Função recursiva para mover a Torre
void moverTorre(int casas, char direcao) {
    if (casas <= 0) return; // Condição de parada da recursão

    if (direcao == 'c') {
        printf("Cima\n");
    } else if (direcao == 'b') {
        printf("Baixo\n");
    } else if (direcao == 'e') {
        printf("Esquerda\n");
    } else if (direcao == 'd') {
        printf("Direita\n");
    }

    moverTorre(casas - 1, direcao); // Chamada recursiva
}

// Função recursiva para mover o Bispo
void moverBispo(int casas, char direcao) {
    if (casas <= 0) return; // Condição de parada da recursão

    if (direcao == 'cd') {
        printf("Cima-Direita\n");
    } else if (direcao == 'ce') {
        printf("Cima-Esquerda\n");
    } else if (direcao == 'bd') {
        printf("Baixo-Direita\n");
    } else if (direcao == 'be') {
        printf("Baixo-Esquerda\n");
    }

    moverBispo(casas - 1, direcao); // Chamada recursiva
}

// Função recursiva para mover a Rainha
void moverRainha(int casas, char direcao) {
    if (casas <= 0) return; // Condição de parada da recursão

    if (direcao == 'c') {
        printf("Cima\n");
    } else if (direcao == 'b') {
        printf("Baixo\n");
    } else if (direcao == 'e') {
        printf("Esquerda\n");
    } else if (direcao == 'd') {
        printf("Direita\n");
    } else if (direcao == 'cd') {
        printf("Cima-Direita\n");
    } else if (direcao == 'ce') {
        printf("Cima-Esquerda\n");
    } else if (direcao == 'bd') {
        printf("Baixo-Direita\n");
    } else if (direcao == 'be') {
        printf("Baixo-Esquerda\n");
    }

    moverRainha(casas - 1, direcao); // Chamada recursiva
}

int main() {
    // Movimento da Torre
    moverTorre(3, 'c'); // Move a Torre 3 casas para cima
    printf("\n");

    // Movimento do Bispo
    moverBispo(3, 'cd'); // Move o Bispo 3 casas na diagonal cima-direita
    printf("\n");

    // Movimento da Rainha
    moverRainha(3, 'cd'); // Move a Rainha 3 casas na diagonal cima-direita
    printf("\n");

    // Movimento do Cavalo
    int i, j;
    for (i = 0; i < 2; i++) { // Duas casas para cima
        for (j = 0; j < 1; j++) { // Uma casa para a direita
            printf("Cima\n");
        }
    }
    printf("Direita\n");

    printf("\n");

    // Movimento do Bispo com loops aninhados
    for (i = 0; i < 3; i++) { // Movimento vertical
        for (j = 0; j < 3; j++) { // Movimento horizontal
            if (i == j) {
                printf("Cima-Direita\n");
            }
        }
    }

    return 0;
}