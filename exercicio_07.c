#include <stdio.h> // ou <stdio.h> em ambiente padrão

int main() {
    int valores[] = {1, 2, 3, 4, 5, 6};
    int tamanho = sizeof(valores) / sizeof(valores[0]);

    // Ponteiro para o primeiro elemento
    int *inicio = valores; 
    
    // Ponteiro para o último elemento
    int *fim = valores + tamanho - 1; 

    // Troca os valores apontados e move os ponteiros até que se cruzem
    while (inicio < fim) {
        int temp = *inicio;
        *inicio = *fim;
        *fim = temp;

        inicio++; // Avança o ponteiro do início
        fim--;    // Recua o ponteiro do fim
    }

    // Exibe o vetor invertido
    for (int i = 0; i < tamanho; i++) {
        printf("%d ", valores[i]);
    }
    printf("\n");

    return 0;
}
