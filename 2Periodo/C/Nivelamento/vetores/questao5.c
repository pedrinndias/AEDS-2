//Escreva um programa que leia um vetor de 10 posições e conte quantos números pares ele possui. Imprima o resultado da contagem.
#include<stdio.h>
int main(){

    int array[10], nPares=0;
    for(int i=0; i<10;i++){
        printf("Escreva um valor para array[%d]: ", i);
        scanf("%d", &array[i]);
        if(array[i] % 2 == 0){
            nPares++;
        }
    }
    printf("%d numeros pares.", nPares);
    return 0;
}