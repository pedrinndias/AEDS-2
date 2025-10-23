//Declare uma variável do tipo char para armazenar a primeira letra do seu nome. Atribua o valor e imprima na tela.
#include<stdio.h>
int main(){

    char letraNome;
    printf("Escreva seu nome:");
    scanf("%c", &letraNome);
    printf("\n A primeira letra do seu nome eh: %c", letraNome);

    return 0;
}