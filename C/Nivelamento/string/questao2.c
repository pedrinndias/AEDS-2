// Crie um programa que leia duas strings do teclado. Usando a função strcmp(), determine e informe se as strings são iguais. 
// Se não forem, informe qual delas vem primeiro na ordem alfabética.

#include<stdio.h>
#include<string.h>
int main(){
    char str1[150];
    char str2[150];
    printf("Escreva uma string1: ");
    scanf("%149s", str1);
    printf("Escreva uma string2: ");
    scanf("%149s", str2);
    if((strcmp(str1,str2))==0){
        printf("As strings sao iguais!");
    }else{
        printf("As strings nao sao iguais!");
    }
    return 0;
}