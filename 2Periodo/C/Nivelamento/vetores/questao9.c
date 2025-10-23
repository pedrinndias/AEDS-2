// Crie um programa que leia dois vetores de 10 posições cada. 
// Calcule e mostre o produto escalar dos dois vetores, que é a soma do produto dos elementos correspondentes de cada vetor 
// ( (A[0]*B[0]) + (A[1]*B[1]) + ... ).

#include<stdio.h>
int main(){
    int vetor1[10];
    int vetor2[10];
    for(int i=0;i<10;i++){
        printf("Escreva um valor para vetor1[%d]: ", i);
        scanf("%d", &vetor1[i]);
        
        printf("Escreva um valor para vetor2[%d]: ", i);
        scanf("%d", &vetor2[i]);
    }
    int soma=0;
    for(int i=0;i<10;i++){
        soma+=(vetor1[i]*vetor2[i]);
    }
    printf("O valor do produto escalar dos dois vetores eh: %d", soma);

    return 0;
}