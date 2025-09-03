//Escreva um programa que declare uma variável int com um valor inicial. 
// Crie um ponteiro que aponte para essa variável. 
// Usando apenas o ponteiro, altere o valor da variável original. 
// Imprima o valor da variável antes e depois da alteração para confirmar que funcionou.

#include<stdio.h>
int main(){
    int num=5;
    int *ptr;
    ptr=&num;
    printf("%d\n", num);
    *ptr=7;
    printf("%d\n", num);
    return 0;   
}