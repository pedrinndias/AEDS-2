// Faça um programa que leia uma matriz 3x3. 
// Crie dois vetores: um para armazenar a soma de cada linha e outro para armazenar a soma de cada coluna. 
// Imprima os dois vetores.

#include<stdio.h>
#define LINHA 3
#define COLUNA 3
int main(){
    int vetL[LINHA], vetC[COLUNA], matriz[LINHA][COLUNA], auxL=0, auxC;
     for(int i=0;i<LINHA;i++){
        vetL[i]=0;
    }
    
    for(int i=0;i<COLUNA;i++){
        vetC[i]=0;
    }
    for(int i=0;i<LINHA;i++){
        for(int j=0; j<COLUNA;j++){
            printf("Escreva um valor para matriz[%d][%d]: ",i+1,j+1);
            scanf("%d", &matriz[i][j]);
            vetL[auxL]+=matriz[i][j];
            vetC[auxC]+=matriz[i][j];
            auxC++;
        }
        auxL++;
        auxC=0;
    }
    for(int i=0;i<LINHA;i++){
        for(int j=0; j<COLUNA;j++){
            printf("[%d][%d]: %d", i+1, j+1, matriz[i][j]);
        }
        printf("\n");
    }
    
    for(int i=0;i<LINHA;i++){
        printf("Soma linha[%d]: %d\n", i+1, vetL[i]);
    }
    
    for(int i=0;i<COLUNA;i++){
        printf("Soma coluna[%d]: %d\n", i+1, vetC[i]);
    }
    return 0;
}