// Escreva um programa que receba um número inteiro e, utilizando o operador ternário, mostre na tela se o número é par ou ímpar.
#include<stdio.h>
int main(){
    int num;
    printf("Escreva um numero inteiro: ");
    scanf("%d", &num);
    num%2==0?printf("Numero par") : printf("NUmero impar");


    return 0;
}