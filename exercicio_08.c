#include<stdio.h>

//função que percorre a string usando ponteiro e conta as vogais
int contarVogais(const char *texto){
    int contador = 0;


// O laço executa até encontrar o caractere nulo '\0' (fim da atring)
while (*texto != '\0'){
    char c = *texto;

    //Verifica se o caractere atual e uma vogal (minúscula ou maiuscula)
    if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' ||
        c == 'A' || c == 'E' || c == 'I' || c == 'O') {
        contador++;
        }
        texto++;
        }
        return contador;
}
int main(void){
    char frase[100];

    printf("Digite uma frase: ");
    fgets(frase, sizeof(frase), stdin);

    //Chamada da função passando a string
    int totalVogais = contarVogais(frase);

    printf("Quantidade de vogais: %d\n", totalVogais);

    return 0;
}
