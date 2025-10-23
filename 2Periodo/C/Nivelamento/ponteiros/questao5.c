// Declare um vetor de 5 números inteiros. 
// Crie um ponteiro que aponte para o primeiro elemento do vetor. 
// Usando aritmética de ponteiros (incrementando o ponteiro), percorra o vetor e imprima cada um de seus elementos, sem usar o operador de colchetes [].

#include<stdio.h>
int main(){
    int array[5];
    int *ptr;
    ptr=array;
    for(int i=0;i<5;i++){
        printf("Escreva um valor para array[%d]: ", i);
        scanf("%d", ptr + i); // CORRETO // nao se usa *
    }
    for(int i=0;i<5;i++){
        printf("Array[%d]: %d\n", i, *(ptr + i)); // CORRETO // usa * antes da aritimética de ponteiros
    }
    return 0;
}