//Implemente o algoritmo de ordenação "Bubble Sort" para ordenar um vetor de 10 números inteiros em ordem crescente. 
// Ao final, imprima o vetor ordenado. 
// (O Bubble Sort funciona comparando pares de elementos adjacentes e trocando-os de lugar se estiverem na ordem errada, 
// repetindo o processo até que o vetor esteja ordenado).

#include<stdio.h>
int main(){
    int vetor[10];
    for(int i=0;i<10;i++){
        printf("Insira um valor para o vetor[%d]: ", i);
        scanf("%d", &vetor[i]);
    }
    int aux=0;
    for(int i=0;i<10;i++){
        for(int j=0;j<10;j++){
            if(vetor[j]<vetor[i]){
                aux=vetor[i];
                vetor[i]=vetor[j];
                vetor[j]=aux;
            }
        }
    }
    for(int i=0;i<10;i++){
        printf("Vetor ordenado vetor[%d]= %d\n", i, vetor[i]);
    }

    return 0;
}