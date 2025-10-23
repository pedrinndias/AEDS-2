// Faça um programa que solicite um número decimal (float) ao usuário. 
// Em seguida, mostre o número arredondado para cima usando a função ceil() e para baixo usando a função floor().
#include<stdio.h>
#include<math.h>
int main(){
    float num;
    printf("Escreva um numero float: ");
    scanf("%f", &num);
    printf("Funcao teto: %.2f\n", ceil(num));
    printf("Funcao piso: %.2f\n", floor(num));
    return 0;
}