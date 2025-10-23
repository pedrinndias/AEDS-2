// Este é um clássico. Crie um programa que leia duas matrizes, A (2x3) e B (3x2), e calcule a matriz produto C (que será 2x2). 
// Imprima a matriz resultante. Lembrete: 
// O elemento C[i][j] é a soma dos produtos dos elementos da linha i de A pelos elementos da coluna j de B.

#include<stdio.h>
int main(){
    int matrizA[2][3], matrizB[3][2], matrizC[2][2];
    for(int i=0;i<2;i++){
        for(int j=0;j<3;j++){
            printf("Escreva um valor para matrizA[%d][%d]: ",i,j);
            scanf("%d",&matrizA[i][j]);
        }
    }
    printf("\n");
    for(int i=0;i<3;i++){
        for(int j=0;j<2;j++){
            printf("Escreva um valor para matrizB[%d][%d]: ",i,j);
            scanf("%d",&matrizB[i][j]);
        }
    }
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            matrizC[i][j] = 0; // Inicializa o elemento da matriz produto
            for (int k = 0; k < 3; k++) {
                matrizC[i][j] += matrizA[i][k] * matrizB[k][j];
            }
        }
    }
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            printf("matrizC[%d][%d]:%d ",i,j,matrizC[i][j]);
        }
        printf("\n");
    }
    return 0;
}