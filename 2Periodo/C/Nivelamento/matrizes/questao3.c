// Faça um programa que leia duas matrizes 2x3 de inteiros, A e B. 
// Crie uma terceira matriz, C, que será a soma de A e B (ou seja, C[i][j] = A[i][j] + B[i][j]). 
// Imprima a matriz C.

#include<stdio.h>
#define LINHA 2
#define COLUNA 3

int main(){
    int matrizA[LINHA][COLUNA], matrizB[LINHA][COLUNA], matrizC[LINHA][COLUNA];
    for(int i=0; i<LINHA; i++){
        for(int j=0;j<COLUNA; j++){
            printf("Escreva um valor para matrizA[%d][%d]: ", i+1, j+1);
            scanf("%d", &matrizA[i][j]);
        }
    }
    printf("\n");
    for(int i=0; i<LINHA; i++){
        for(int j=0;j<COLUNA; j++){
            printf("Escreva um valor para matrizB[%d][%d]: ", i+1, j+1);
            scanf("%d", &matrizB[i][j]);
            matrizC[i][j]=matrizA[i][j]+matrizB[i][j];
        }
    }
    for(int i=0; i<LINHA; i++){
        for(int j=0;j<COLUNA; j++){
            printf("[%d][%d]:%d ", i+1, j+1, matrizC[i][j]);
        }
        printf("\n");
    }

    return 0;
}