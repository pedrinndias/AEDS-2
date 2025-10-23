// Calculadora de Raiz Quadrada
//Crie um programa que peça ao usuário para inserir um número. Use a função sqrt() da biblioteca math.h para calcular e exibir a raiz quadrada desse número.
#include<stdio.h>
#include<math.h>
int main(){
    double num;
    printf("Escreva um numero");
    scanf("%lf", &num);
    printf("Raiz quadrada: %.2lf", sqrt(num)); //apenas raiz quadrada
    return 0;
}