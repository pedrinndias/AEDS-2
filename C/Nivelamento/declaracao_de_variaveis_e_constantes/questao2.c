//Declare uma variável de ponto flutuante (float) para guardar a sua altura em metros. Atribua um valor e imprima na tela, formatando para exibir apenas duas casas decimais.
#include<stdio.h>
int main(){
    float altura; //metros
    printf("Escreva sua altura em metros: ");
    scanf("%f", &altura);
    printf("\n Sua altura eh: %.2f metros!", altura);
    return 0;
}