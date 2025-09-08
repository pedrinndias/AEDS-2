//Crie uma função int somarVetor(int *vetor, int tamanho) que receba um ponteiro para o início de um vetor de inteiros e 
//seu tamanho. Dentro da função, use um laço e aritmética de ponteiros (ex: *vetor e vetor++) para percorrer o vetor e somar 
//todos os seus elementos. A função deve retornar a soma total.

#include<stdio.h>
#include<stdlib.h>
int somarVetor(int *vetor, int tamanho){
    if(tamanho==0){
        return 0;
    }else{
        return *vetor+somarVetor(vetor+1,tamanho-1);
    }
}
int main(){
    int tamanho;
    printf("Informe o tamanho do vetor: ");
    scanf("%d", &tamanho);
    int *vetor=(int *)malloc(tamanho*sizeof(int));
    if(vetor==NULL){
        printf("Erro na alocacao dinamica de memoria!");
        return 1;
    }
    for(int i=0;i<tamanho;i++){
        printf("Preencha o vetor[%d]: ", i);
        scanf("%d", &vetor[i]);
    }
    printf("A soma de todos os valores do vetor eh: %d", somarVetor(vetor,tamanho));
    free(vetor);
    return 0;
}