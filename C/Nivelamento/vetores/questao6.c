// Crie um programa que leia dois vetores de 5 posições cada. 
// Em seguida, crie um terceiro vetor, C, cujo valor de cada posição será a soma dos elementos correspondentes nos vetores A e B.
#include<stdio.h>
int main(){
    int vet1[5];
    int vet2[5];
    int vet3[5]; 
    for(int i=0;i<5;i++){
        printf("Insira um valor para o vetor1[%d]: ", i);
        scanf("%d", &vet1[i]);
        printf("Insira um valor para o vetor2[%d]: ", i);
        scanf("%d", &vet2[i]);
        vet3[i]=vet1[i]+vet2[i];
    }
    for(int i=0;i<5;i++){
        printf("Soma do vetor1[%d] + vetor2[%d] = %d\n", i, i, vet3[i]);
    }
    return 0;
}