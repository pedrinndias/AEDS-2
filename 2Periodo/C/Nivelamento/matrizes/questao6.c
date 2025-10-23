//Escreva um programa que leia uma matriz 4x4. 
// Depois, peça ao usuário para digitar um número X. 
// O programa deve contar e exibir quantos valores na matriz são maiores que X.
#include<stdio.h>
#define LINHA 4
#define COLUNA 4
int main(){
    int matriz[LINHA][COLUNA];
    for(int i=0;i<LINHA;i++){
        for(int j=0;j<COLUNA;j++){
            printf("Escreva um valor para matriz[%d][%d]: ", i+1, j+1);
            scanf("%d", &matriz[i][j]);
        }
    }
    int X, count=0;
    printf("\n Escreva um numero X: ");
    scanf("%d", &X);
    for(int i=0;i<LINHA;i++){
        for(int j=0;j<COLUNA;j++){
            if(matriz[i][j]>X){
                count++;
                printf("[%d][%d]: %d eh maior que X\n", i+1, j+1, matriz[i][j]);
            }
        }
    }
    printf("%d sao maiores que X", count);
    return 0;
}