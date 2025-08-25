// Escreva uma função chamada calcularMedia que recebe um array (vetor) de float e o seu tamanho como parâmetros. 
// A função deve retornar a média dos valores contidos no array.

#include<stdio.h>
#include<stdlib.h>
float calcularMedia(float *array, int tam){
    float soma=0;

    for(int i=0; i<tam; i++){
        soma+=array[i];
    }


    return soma/tam;
}

int main(){
    int tam;
    printf("Escreva a quantidade de valores: ");
    scanf("%d", &tam);
    float *array=(float *)malloc(tam*sizeof(float));
    for(int i=0; i<tam;i++){
        printf("Escreva um numero para o vetor[%d]: ", i);
        scanf("%f", &array[i]);
    }
    float media=calcularMedia(array,tam);
    printf("Media de valores: %.2f", media);
    return 0;
}