#include <stdio.h>

    int main(void) {  
        int vetor[] = {10, 20, 30, 40};
        int *p = vetor;
          printf("%d\n", *p);
          printf("%d\n", *p++);
          printf("%d\n", (*p)++);
          printf("%d\n", *p);

  return 0;
}

// A) 10, 10, 20, 21
// B) Aponta para o segundo elemento, que armazena o valor 21.
// C) 10, 21, 30 e 40
// D) p++: Avança o ponteiro p para o próximo endereço de memória (próximo elemento do vetor), sem acessar nem modificar o conteúdo armazenado.
//   *p++: Acessa o valor atualmente apontado por p e, logo em seguida, faz o ponteiro p avançar para o próximo endereço de memória.
// (*p)++: Modifica diretamente o valor contido na memória apontada por p (incrementando-o em 1), sem alterar o endereço guardado pelo ponteiro.
