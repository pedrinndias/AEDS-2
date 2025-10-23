// Faça um programa que peça um número positivo ao usuário. Calcule e mostre:

    //O logaritmo natural (base e) do número, usando log().
    //O logaritmo base 10 do número, usando log10().
#include<stdio.h>
#include<math.h>
int main(){
    double num;
    double numlog1, numlog2;
    printf("Escreva um numero positivo: ");
    scanf("%lf", &num);
    numlog1=log(num);
    numlog2=log10(num);
    printf("O logaritmo natural: %.2lf\n", numlog1);
    printf("O logaritmo base 10: %.2lf", numlog2);
    return 0;
}