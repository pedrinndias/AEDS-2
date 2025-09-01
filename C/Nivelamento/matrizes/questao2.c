// Escreva um programa que leia uma matriz quadrada 4x4 de números reais. 
// Calcule e imprima a soma dos elementos que estão na diagonal principal (onde o índice da linha é igual ao da coluna).

#include<stdio.h>
#define LINHA 4
#define COLUNA 4
int main(){
    float matriz[4][4];
    float soma=0.0;
    for(int i=0;i<LINHA; i++){
        for(int j=0;j<COLUNA;j++){
            printf("Escreva um valor para matriz[%d][%d]: ", i+1, j+1);
            scanf("%f", &matriz[i][j]);
        }
    }
    for(int i=0;i<LINHA; i++){
        for(int j=0;j<COLUNA;j++){
            if(i==j){
                soma+=matriz[i][j];
            }
        }
    }
    for(int i=0;i<LINHA;i++){
        for(int j=0;j<COLUNA;j++){
            printf("[%d][%d]: %.2f ", i+1, j+1, matriz[i][j]);
        }
        printf("\n");
    }
    printf("\nSoma diagonal principal: %.2f", soma);
    return 0;
}