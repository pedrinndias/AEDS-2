//Faça um programa que peça um número inteiro não negativo ao usuário e calcule o seu fatorial. Lembre-se que o fatorial de 0 é 1. Exemplo: 5! = 5 * 4 * 3 * 2 * 1 = 120
#include<stdio.h>
int main(){

    int num;
    int fatorial=1;
    printf("Escreva um numero inteiro nao negativo: ");
    scanf("%d", &num);

    while(num != 1){
        fatorial *= num;
        num--;
    }

    printf("Fatorial: %d", fatorial);


    return 0;
}