// Crie um programa que solicite a idade de uma pessoa e determine se ela está apta a votar. No Brasil, o voto é obrigatório para maiores de 18 anos e facultativo para pessoas entre 16 e 18 anos e maiores de 70 anos. Considere essas regras.
#include<stdio.h>
int main(){
    int idade;
    printf("Escreva sua idade:");
    scanf("%d", &idade);
    while(idade<0 || idade>110){
        printf("Idade invalida! \n");
        printf("Escreva sua idade:");
        scanf("%d", &idade);
    }

    if(idade>=16){
        printf("Voce esta apto a votar!");
    }else{
        printf("Voce nao esta apto a votar!");
    }

    return 0;
}