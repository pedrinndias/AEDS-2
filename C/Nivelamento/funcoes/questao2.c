// Desenvolva uma função void inverterVetor(int *vetor, int tamanho) que inverte a ordem dos elementos do próprio vetor que 
// foi passado como parâmetro. Para isso, crie dois ponteiros: um apontando para o início (inicio) e outro para o fim (fim) 
// do vetor. Em um laço, troque os valores para os quais eles apontam e avance o ponteiro inicio e recue o ponteiro fim até 
// que eles se cruzem.

#include<stdio.h>
#include<stdlib.h>
void inverterVetor(int *vetor, int tamanho,int index){
    int aux;
    if(tamanho-index==0){
        return;
    }else{
        aux = *(vetor+index);
        *(vetor+index) = *(vetor+tamanho);
        *(vetor+tamanho) = aux;
        return inverterVetor(vetor,tamanho-1,index+1);
    }
}
int main(){
    int tamanho;
    printf("Escreva o tamanho do vetor: ");
    scanf("%d", &tamanho);
    int *vetor=(int*)malloc(tamanho*sizeof(int));
    if(vetor==NULL){
        printf("Erro na alocacao de memoria!");
        return 1;
    }
    for(int i=0;i<tamanho;i++){
        printf("Preencha o vetor[%d]: ", i);
        scanf("%d", &vetor[i]);
    }

    for(int i=0;i<tamanho;i++){
        printf("Vetor[%d]: %d \n", i, vetor[i]);
    }
    
    inverterVetor(vetor,tamanho-1,0);
    
    for(int i=0;i<tamanho;i++){
        printf("Vetor Invertido[%d]: %d\n", i, vetor[i]);
    }   

    free(vetor);
    return 0;

}
