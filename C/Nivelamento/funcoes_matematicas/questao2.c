//Escreva um programa que receba dois números do usuário: a base e o expoente. Utilize a função pow() para calcular a potência e mostre o resultado.
#include<stdio.h>
#include<math.h>
int main(){
    int base, expo;
    printf("Escreva uma base:");
    scanf("%d", &base);
    printf("Escreva um expoente:");
    scanf("%d", &expo);

    int potencia=pow(base,expo);
    printf("\nPotencia: %d", potencia);

    return 0;
}