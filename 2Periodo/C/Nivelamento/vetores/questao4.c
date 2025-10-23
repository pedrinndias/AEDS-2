// Crie um programa que leia 10 elementos para um vetor A. 
// Em seguida, crie um segundo vetor, B, que deverá conter os mesmos elementos de A, mas na ordem inversa. 
// Exiba o vetor B.

#include<stdio.h>
int main(){
    int array[10];
    int arrayInv[10];
    for(int i=0;i<10;i++){
        printf("Escreva um valor para o array[%d]: ", i);
        scanf("%d", &array[i]);
    }
    int aux=0;
    for(int i=9;i>=0; i--){
        arrayInv[aux]=array[i];
        aux++;
    }
    for(int i=0;i<10;i++){
        printf("Array inverso[%d]= %d\n", i, arrayInv[i]);
    }
    return 0;
}