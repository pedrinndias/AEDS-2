// Escreva um programa que peça ao usuário para inserir um número inteiro. O programa deve então verificar e informar se o número é positivo, negativo ou zero.
#include<stdio.h>
int main(){
    int num;
    printf("Escreva um numero inteiro: ");
    scanf("%d", &num);
    if(num==0){
        printf("O numero e nulo");
    }else{
        if(num%2==0){
            printf("O numero e par");
        }else{
            printf("O numero e impar");
        }
    }


    return 0;
}