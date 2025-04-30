#include <stdio.h>

int main() {
    int i, j, k;

    // Movimento da Torre
    printf("Movimento da Torre:\n");
    for (i = 1; i <= 5; i++) {
        printf("Direita\n");
    }

    // Movimento do Bispo
    printf("\nMovimento do Bispo:\n");
    j = 1;
    while (j <= 5) {
        printf("Cima direita\n");
        j++;
    }

    // Movimento da Rainha
    printf("\nMovimento da Rainha:\n");
    k = 1;
    do {
        printf("Esquerda\n");
        k++;
    } while (k <= 8);

    // Movimento do Cavalo
    printf("\nMovimento do Cavalo:\n");

    // Define quantas vezes o cavalo fará o movimento completo em "L"
    int movimentos = 3; // por exemplo, 3 movimentos em "L"
    int m, n;

    for (m = 1; m <= movimentos; m++) {
        // Move duas casas para baixo
        n = 1;
        while (n <= 2) {
            printf("Baixo\n");
            n++;
        }
        // Move uma casa para a esquerda
        printf("Esquerda\n");
    }

    return 0;
}
