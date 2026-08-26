#include <stdio.h>

int main(void) {

    int x = 10;
    int *p = &x;
    int *q = p;
        (*p) += 5;
        (*q) *= 2;

    printf("x = %d\n", x);
    printf("*p = %d\n", *p);
    printf("*q = %d\n", *q);

return 0;
}
// A) Resultado x=30 *p=30 *q=30.
// B) Porque o ponteiro q armazena o endereço de memória da variável x.
// Ao usar o operador de referenciação em “(*q) *= 2;”, a modificação é feita diretamente no espaço de memória onde x reside. 
// Como p também aponta para esse mesmo endereço, qualquer leitura feita através de x, *p ou *q refletirá o novo valor armazenado nessa posição. 
// C) Sim. Na declaração “int *q = p;”, o valor contido em p é copiado para q. 
