// Escreva um programa que pergunte ao usuário o tamanho de um vetor. 
// Em seguida, use malloc para alocar dinamicamente um vetor de float com o tamanho informado. 
// Peça ao usuário para preencher o vetor, calcule a média dos valores e, por fim, libere a memória alocada com free.
#include<stdio.h>
#include<stdlib.h>

int main(){
    int tam;
    printf("Escreva um tamanho para vetor: ");
    scanf("%d", &tam);
    float *vetor=(float *)malloc(tam*sizeof(float));
    if(vetor==NULL){
        printf("Falha ao alocar memoria!");
        free(vetor);
        return 1;
    }
    float count=0.0;
    for(int i=0; i<tam; i++){
        printf("Escreva um valor para vetor[%d]: ", i);
        scanf("%f", &*(vetor+i));
        count += *(vetor+i);
    }
    printf("Media= %.2f", count/ (float) tam);



    free(vetor);
    return 0;
}