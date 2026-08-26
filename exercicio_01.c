#include<stdio.h>

int main(void){
    int x = 20;
    int *p = &x;
    
    printf ("Valor de X: %d\n", x);
    printf ("Endereço de X: %p\n", (void*)&x);
    printf ("Conteúdo de P (Endereço guardado): %p\n", (void*)p);
    printf ("Valor apontado por P (*p): %d\n", *p);

    //Alterado o valor de x para 35 via ponteiro 
    *p = 35;
    printf ("\nNovo valor de X: %d\n", x);

    return 0;
    
}ss
