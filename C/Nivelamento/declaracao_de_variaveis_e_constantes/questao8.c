#include<stdio.h>
int main(){

    int caixaA=10, caixaB=20;
    int aux;

    aux = caixaA;
    caixaA = caixaB;
    caixaB = aux;

    printf("Caixa A= %d e caixa B= %d!", caixaA, caixaB);
    return 0;
}