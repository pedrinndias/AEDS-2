//Desenvolva uma função chamada ehPar que recebe um número inteiro e retorna 1 se 
//o número for par e 0 se for ímpar. Na main, use esta função dentro de um if para informar ao usuário se o 
//número digitado é par ou ímpar.
#include<stdio.h>

int ehPar(int num){
    if(num%2==0 || num==0){
        return 1;
    }else{
        return 0;
    }
}
int main(){
    int num;
    printf("Escreva um numero inteiro: ");
    scanf("%d", &num);

    if(ehPar(num)){
        printf("O numero eh par");
    }else{
        printf("O numero eh impar");
    }

    return 0;
}