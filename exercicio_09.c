#include <stdio.h>

int main() {
    int matriz[3][4] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12}
    };

    int linhas = 3;
    int colunas = 4;

    // a) Exibir todos os elementos usando *(*(matriz + linha) + coluna)
    printf("--- a) Elementos da matriz ---\n");
    for (int linha = 0; linha < linhas; linha++) {
        for (int coluna = 0; coluna < colunas; coluna++) {
            printf("%2d ", *(*(matriz + linha) + coluna));
        }
        printf("\n");
    }

    // b) Calcule a soma de cada linha
    printf("\n--- b) Soma de cada linha ---\n");
    for (int linha = 0; linha < linhas; linha++) {
        int somaLinha = 0;
        for (int coluna = 0; coluna < colunas; coluna++) {
            somaLinha += *(*(matriz + linha) + coluna);
        }
        printf("Soma da linha %d: %d\n", linha, somaLinha);
    }

    // c) e d) Localize o maior elemento e exiba sua linha e coluna
    int maior = *(*(matriz + 0) + 0);
    int linhaMaior = 0;
    int colunaMaior = 0;

    for (int linha = 0; linha < linhas; linha++) {
        for (int coluna = 0; coluna < colunas; coluna++) {
            int valorAtual = *(*(matriz + linha) + coluna);
            if (valorAtual > maior) {
                maior = valorAtual;
                linhaMaior = linha;
                colunaMaior = coluna;
            }
        }
    }

    printf("\n--- c) e d) Maior elemento e posicao ---\n");
    printf("Maior elemento: %d\n", maior); // c
    printf("Localizado na linha %d, coluna %d\n", linhaMaior, colunaMaior); // d

    return 0;
}
