// Crie uma função que receba um vetor de inteiros, seu tamanho e um valor a ser procurado. 
// A função deve retornar um ponteiro para a primeira ocorrência do valor no vetor. 
// Se o valor não for encontrado, a função deve retornar NULL. Na main, teste a função e, se o retorno não for NULL, imprima o valor encontrado usando o ponteiro retornado.
#include<stdio.h>
int pesquisa(int *vetor, int tam, int valor){
    for(int i=0;i<tam;i++){
        if(*(vetor+i)==valor){
            return &vetor[i];
        }
    }
    return NULL;
}
int main(){
    int tam;
    printf("Escreva o tamanho do vetor: ");
    scanf("%d", &tam);
    int *vetor=(int *)malloc(tam*sizeof(int));
    if(vetor==NULL){
        printf("Erro na alocacao de memoria");
        return 1;
    }
    for(int i=0;i<tam;i++){
        printf("Escreva um valor para array[%d]: ")
    }
}