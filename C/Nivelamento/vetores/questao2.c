// Escreva um programa que leia 10 números inteiros, armazene-os em um vetor e, ao final, 
// imprima qual é o maior e o menor valor contido no vetor.

#include<stdio.h>
int main(){
    int array[10];
    for(int i=0;i<10;i++){
        printf("Escreva um valor array[%d]: ", i+1);
        scanf("%d", &array[i]);
    }
    int maior=array[0];
    int menor=array[0];
    for(int i=0;i<10;i++){
        if(array[i]>maior){
            maior=array[i];
        }
        if(array[i]<menor){
            menor=array[i];
        }
    }
    printf("Maior= %d, Menor= %d", maior, menor);

    return 0;
}