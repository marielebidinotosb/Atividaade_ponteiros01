#include<stdio.h>

int main (void){
    int numeros[] = {4, 8, 12, 16, 20, 24};
    int *p = numeros; //Aponta para o primeiro elemento do vetor
    int soma = 0;
    int tamanho = sizeof(numeros) / sizeof(numeros[0]);

    printf("Elementos do vetor: ");
    for (int i=0;  i<tamanho;  i++){
        //Acessa o valor usando aritmética de ponteiros *(p+i)
        printf("%d", *(p + i));
        soma += *(p+i);
    }
    printf("\n Soma de todos os elementos %d\n", soma);
    return 0;
}
