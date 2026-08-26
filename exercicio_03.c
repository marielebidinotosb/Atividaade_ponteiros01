// #include <stdio.h>

//int main(void) {
//    int valor = 50;
//    int *p;
//    *p = valor;

//    printf("%d\n", *p);

//return 0;
//}

// A) O ponteiro p foi apenas declarado sem ter sido inicializado com um endereço de memória válido.
// Por conter um valor "lixo", tentar escrever em *p = valor; faz com que o programa tente acessar uma posição aleatória da memória,
// o que causa comportamento indefinido.

#include<stdio.h>

    int main (void) {
        int valor = 50;
        int *p;

        p = &valor; // B) Correção: p passa a armazenar o endereço da variável 'valor'
        *p = 100; // C) Modifica o conteúdo de 'valor' para 100 usando o ponteiro
        printf ("%d\n", *p);

    return 0;
    }
