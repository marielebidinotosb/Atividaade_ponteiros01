#include<stdio.h>

int main(void){
    int vetor[] = {1, 2, 3};
    int *p1;
    int **p2;
    int ***p3;

// Inicialização das atribuições dos ponteiros 
    p1 = vetor; //p1 aponta para o primeiro elemento do vetor
    p2 = &p1;  // p2 aponta para p1
    p3 = &p2; //  p3 aponta para p2

// a) Exibe o primeiro elemento usando *p1, **p2 e ***p3
printf("a) Primeiro elemento: %d %d %d\n", *p1, **p2, ***p3);

// b) Altera o primeiro elemento para 10 utilizando somente p3
***p3 = 10;

// c) Faça p1 avançar para o segundo elemento utilizando p2
*p2 = *p2 + 20;

// d) Altere o segundo elemento para 20 utilizando p3
***p3 = 20;

// e) Exiba o vetor completo ao final 
printf("e) Vetor completo: ");
    for (int i = 0; i < 3; i++){
        printf("%d", vetor[i]);
    }
    printf ("\n");

    return 0;
}
