//Desenvolva um programa que leia uma matriz 3x4. 
// Crie e imprima a matriz transposta (uma matriz 4x3 onde as linhas da original se tornam as colunas da nova).

#include<stdio.h>
#define LINHA 3
#define COLUNA 4
int main(){
     int matriz[LINHA][COLUNA], matrizT[COLUNA][LINHA];
     for(int i=0;i<LINHA;i++){
        for(int j=0;j<COLUNA;j++){
            printf("Escreva um valor para matriz[%d][%d]: ", i+1, j+1);
            scanf("%d", &matriz[i][j]);
        }
     }
     printf("Matriz: \n");
     for(int i=0;i<LINHA;i++){
        for(int j=0;j<COLUNA;j++){
            printf("[%d][%d]:%d ", i+1, j+1, matriz[i][j]);
        }
        printf("\n");
     }

     for(int i=0;i<COLUNA;i++){
        for(int j=0;j<LINHA;j++){
            matrizT[i][j]=matriz[j][i];
        }
     }
     
     printf("Matriz Transposta: \n");
     for(int i=0;i<COLUNA;i++){
        for(int j=0;j<LINHA;j++){
            printf("[%d][%d]:%d ", i+1, j+1, matrizT[i][j]);
        }
        printf("\n");
     }
     return 0;
}