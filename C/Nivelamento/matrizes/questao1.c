// Crie um programa que declare uma matriz 3x3 de inteiros. 
// Peça ao usuário para digitar os valores para cada posição e, ao final, imprima a matriz na tela com a formatação correta (linhas e colunas).
#include<stdio.h>
int main(){
    int matriz[3][3];
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            printf("Escreva um valor para matriz[%d][%d]: ", i+1, j+1);
            scanf("%d", &matriz[i][j]);
        }
    }
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            printf("[%d][%d]: %d ", i+1, j+1, matriz[i][j]);
        }
        printf("\n");
    }
    return 0;
}