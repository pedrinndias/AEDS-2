// Uma matriz quadrada é dita simétrica se ela for igual à sua transposta (ou seja, M[i][j] == M[j][i] para todos os i e j). 
// Crie um programa que leia uma matriz 3x3 e verifique se ela é simétrica, imprimindo "Sim" ou "Não".
#include<stdio.h>
#define LINHA 3
#define COLUNA 3
int main(){
    int matriz[LINHA][COLUNA], matrizT[COLUNA][LINHA], count=0;
    for(int i=0;i<LINHA;i++){
        for(int j=0;j<COLUNA;j++){
            printf("Escreva um valor para matriz[%d][%d]: ", i+1, j+1);
            scanf("%d", &matriz[i][j]);
        }
    }
    printf("\n Matriz: \n");
    for(int i=0;i<LINHA;i++){
        for(int j=0;j<COLUNA;j++){
            printf("[%d][%d]:%d ", i+1, j+1, matriz[i][j]);
        }
        printf("\n");
    }

    for(int i=0;i<COLUNA;i++){
        for(int j=0;j<LINHA;j++){
            matrizT[i][j]=matriz[j][i];
            if(matrizT[i][j]==matriz[i][j]){
                count++;
            }
        }
    }
    printf("\n Matriz Transposta: \n");
    for(int i=0;i<LINHA;i++){
        for(int j=0;j<COLUNA;j++){
            printf("[%d][%d]:%d ", i+1, j+1, matrizT[i][j]);
        }
        printf("\n");
    }
    if(count==9){
        printf("\nSim as matrizes sao simetricas!");
    }else{
        printf("\nAs matrizes nao sao simetricas!");
        
    }

    return 0;
}