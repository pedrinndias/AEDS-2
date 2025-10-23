// Crie um programa que leia uma matriz 5x5. 
// Encontre o maior valor presente na matriz e, em seguida, mostre a linha e a coluna onde ele se encontra.

#include<stdio.h>
#define LINHA 5
#define COLUNA 5
int main(){
    int matriz[LINHA][COLUNA];
    for(int i=0;i<LINHA;i++){
        for(int j=0; j<COLUNA; j++){
            printf("Escreva um valor para matriz[%d][%d]: ", i+1, j+1);
            scanf("%d", &matriz[i][j]);
        }
    }
    for(int i=0;i<LINHA;i++){
        for(int j=0; j<COLUNA; j++){
            printf("[%d][%d]: %d ", i+1, j+1, matriz[i][j]);
        }
        printf("\n");
    }
    
    int maior=matriz[0][0], linha=0, coluna=0;
    for(int i=0;i<LINHA;i++){
        for(int j=0; j<COLUNA; j++){
            if(maior<matriz[i][j]){
                maior=matriz[i][j];
                linha=i;
                coluna=j;
            }
        }
    }
    printf("\n Maior numero esta na matriz[%d][%d]: %d", linha, coluna, maior);
    return 0;
}