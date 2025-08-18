// Dia da Semana (switch-case)
// Faça um programa que leia um número inteiro de 1 a 7 e imprima o dia da semana correspondente, onde 1 é Domingo, 2 é Segunda-feira, e assim por diante. Se o usuário digitar um número fora desse intervalo, o programa deve informar "Dia inválido".
#include<stdio.h>
int main(){
    int dia;
    printf("Escreva um numero de 1 a 7: ");
    scanf("%d", &dia);

    while(dia<1 || dia>7){
        printf("Numero invalido! \n");
        printf("Escreva um numero de 1 a 7: ");
        scanf("%d", &dia);
    }

    switch(dia){
        case 1:
            printf("Domingo");
            break;
        case 2:
            printf("Segunda");
            break;
        case 3:
            printf("Terca");
            break;
        case 4:
            printf("Quarta");
            break;
        case 5:
            printf("Quinta");
            break;
        case 6:
            printf("Sexta");
            break;
        case 7:
            printf("Sabado");
            break;
    }

    return 0;
}