#include<stdio.h>
//Função que percorre o vetor usando aritmética de ponteiros
//e retorna o endereço do maior elemento
int *encontrarMaior(int *inicio, int tamanho) {
    int *maior = inicio; //Assegura o maior inicial e o primeiro elemento 

    for (int i=1;  i<tamanho;  i++) {
        if (*(inicio+i) > *maior) {
            maior = inicio + i; //Atualiza o ponteiro para o novo maior elemento
        }
    }
    return maior; //Retorna o endereço de memoria do maior elemento
}

int main(void) {

    int numeros[5];
    //Leitura dos 5 numeoros
    printf("Digite 5 numeors inteiros:\n");

    for(int i=0;  i<5;  i++) {
        scanf("%d", numeros +1); //Usando aritmética de ponteiros na leitura
    }
//Chamada da função que busca o maior elemento
    int *pMaior = encontrarMaior(numeros, 5);
//Exibição dos resultados
    printf("\n Maior valor: %d\n", *pMaior);
    printf("Posição no vetor (indice): %d\n", pMaior - numeros);//Subtração 
    printf("Endereço de mmória: %p\n", (void*)pMaior);
    
    return 0;
}
