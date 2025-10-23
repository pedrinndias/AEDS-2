//Crie um programa que declare um vetor de 5 posições do tipo int. 
// Peça ao usuário para digitar os 5 valores e, em seguida, imprima todos os elementos do vetor na tela.

#include<stdio.h>
int main(){
    int array[5];
    for(int i=0;i<5;i++){
        printf("Escreva um valor para array[%d]: ", i);
        scanf("%d", &array[i]);
    }
    for(int i=0;i<5;i++){
        printf("Array[%d]=%d\n", i+1,array[i]);
    }
    return 0;
}