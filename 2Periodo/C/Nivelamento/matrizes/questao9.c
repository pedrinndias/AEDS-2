// Crie um programa que leia uma matriz 3x3 que representa um tabuleiro de Jogo da Velha. 
// Os valores podem ser 1 (para o jogador 'X'), -1 (para o jogador 'O') ou 0 (para espaços vazios). 
// O programa deve verificar e informar o estado do jogo: se o jogador 'X' venceu, se o jogador 'O' venceu, se houve empate ou se o jogo ainda não terminou.
#include<stdio.h>

#define LINHA 3
#define COLUNA 3

int main(){
    char matriz[LINHA][COLUNA];
    int matrizaux[LINHA][COLUNA];
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            matriz[i][j]='-';
            printf("[%d][%d]: %c ", i, j, matriz[i][j]);
        }
        printf("\n");
    }

    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            matrizaux[i][j]= '-';
            printf("[%d][%d]: %d ", i, j, matrizaux[i][j]);
        }
        printf("\n");
    }
    int aux;
    int linhaAux, colunaAux;
    do{
        printf("\n***Jogo da Velha***\n");
        printf("1- Jogar\n");
        printf("2- Sair\n");
        printf("Escolha: ");
        scanf("%d", &aux);
        switch(aux){
            case 1:

                for(int k=0;k<9;k++){
                    if(matrizaux[0][0]==0 && matrizaux[0][1]==0 && matrizaux[0][2]==0 || 
                       matrizaux[1][0]==0 && matrizaux[1][1]==0 && matrizaux[1][2]==0 ||
                       matrizaux[2][0]==0 && matrizaux[2][1]==0 && matrizaux[2][2]==0){
                        printf("\n Bolinha ganhou!\n");
                        break;
                    }
                    if(matrizaux[0][0]==1 && matrizaux[0][1]==1 && matrizaux[0][2]==1 || 
                       matrizaux[1][0]==1 && matrizaux[1][1]==1 && matrizaux[1][2]==1 ||
                       matrizaux[2][0]==1 && matrizaux[2][1]==1 && matrizaux[2][2]==1){
                        printf("\n X ganhou!\n");
                        break;
                    }

                    if(matrizaux[0][0]==0 && matrizaux[1][0]==0 && matrizaux[2][0]==0 || 
                       matrizaux[0][1]==0 && matrizaux[1][1]==0 && matrizaux[2][1]==0 ||
                       matrizaux[0][2]==0 && matrizaux[1][2]==0 && matrizaux[2][2]==0){
                        printf("\n Bolinha ganhou!\n");
                        break;
                    }
                    if(matrizaux[0][0]==1 && matrizaux[1][0]==1 && matrizaux[2][0]==1 ||
                       matrizaux[0][1]==1 && matrizaux[1][1]==1 && matrizaux[2][1]==1 ||
                       matrizaux[0][2]==1 && matrizaux[1][2]==1 && matrizaux[2][2]==1){
                        printf("\n X ganhou!\n");
                        break;
                    }

                    if(matrizaux[0][0]==0 && matrizaux[1][1]==0 && matrizaux[2][2]==0 ||
                       matrizaux[2][0]==0 && matrizaux[1][2]==0 && matrizaux[0][2]==0){
                        printf("\n Bolinha ganhou!\n");
                        break;
                    }

                    if(matrizaux[0][0]==1 && matrizaux[1][1]==1 && matrizaux[2][2]==1 ||
                       matrizaux[2][0]==1 && matrizaux[1][2]==1 && matrizaux[0][2]==1){
                        printf("\n X ganhou!\n");
                        break;
                    }
                    
                    

                    for(int i=0;i<3;i++){
                        for(int j=0;j<3;j++){
                            printf("[%d][%d]: %c ", i, j, matriz[i][j]);
                        }
                        printf("\n");
                    }

                    printf("Jogador X esolha uma posicao (ex: 0 2): \n");
                    scanf("%d %d", &linhaAux, &colunaAux);

                    matriz[linhaAux][colunaAux]='X';
                    matrizaux[linhaAux][colunaAux]=1;
                    if(matrizaux[0][0]==0 && matrizaux[0][1]==0 && matrizaux[0][2]==0 || 
                       matrizaux[1][0]==0 && matrizaux[1][1]==0 && matrizaux[1][2]==0 ||
                       matrizaux[2][0]==0 && matrizaux[2][1]==0 && matrizaux[2][2]==0){
                        printf("\n Bolinha ganhou!\n");
                        break;
                    }
                    if(matrizaux[0][0]==1 && matrizaux[0][1]==1 && matrizaux[0][2]==1 || 
                       matrizaux[1][0]==1 && matrizaux[1][1]==1 && matrizaux[1][2]==1 ||
                       matrizaux[2][0]==1 && matrizaux[2][1]==1 && matrizaux[2][2]==1){
                        printf("\n X ganhou!\n");
                        break;
                    }

                    if(matrizaux[0][0]==0 && matrizaux[1][0]==0 && matrizaux[2][0]==0 || 
                       matrizaux[0][1]==0 && matrizaux[1][1]==0 && matrizaux[2][1]==0 ||
                       matrizaux[0][2]==0 && matrizaux[1][2]==0 && matrizaux[2][2]==0){
                        printf("\n Bolinha ganhou!\n");
                        break;
                    }
                    if(matrizaux[0][0]==1 && matrizaux[1][0]==1 && matrizaux[2][0]==1 ||
                       matrizaux[0][1]==1 && matrizaux[1][1]==1 && matrizaux[2][1]==1 ||
                       matrizaux[0][2]==1 && matrizaux[1][2]==1 && matrizaux[2][2]==1){
                        printf("\n X ganhou!\n");
                        break;
                    }

                    if(matrizaux[0][0]==0 && matrizaux[1][1]==0 && matrizaux[2][2]==0 ||
                       matrizaux[2][0]==0 && matrizaux[1][2]==0 && matrizaux[0][2]==0){
                        printf("\n Bolinha ganhou!\n");
                        break;
                    }

                    if(matrizaux[0][0]==1 && matrizaux[1][1]==1 && matrizaux[2][2]==1 ||
                       matrizaux[2][0]==1 && matrizaux[1][2]==1 && matrizaux[0][2]==1){
                        printf("\n X ganhou!\n");
                        break;
                    }
                    for(int i=0;i<3;i++){
                        for(int j=0;j<3;j++){
                            printf("[%d][%d]: %c ", i, j, matriz[i][j]);
                        }
                        printf("\n");
                    }

                    printf("Jogador O esolha uma posicao (ex: 0 2): \n");
                    scanf("%d %d", &linhaAux, &colunaAux);

                    matriz[linhaAux][colunaAux]='O';
                    matrizaux[linhaAux][colunaAux]=0;
                    for(int i=0;i<3;i++){
                        for(int j=0;j<3;j++){
                            printf("[%d][%d]: %c ", i, j, matriz[i][j]);
                        }
                        printf("\n");
                    }
                    if(matrizaux[0][0]==0 && matrizaux[0][1]==0 && matrizaux[0][2]==0 || 
                       matrizaux[1][0]==0 && matrizaux[1][1]==0 && matrizaux[1][2]==0 ||
                       matrizaux[2][0]==0 && matrizaux[2][1]==0 && matrizaux[2][2]==0){
                        printf("\n Bolinha ganhou!\n");
                        break;
                    }
                    if(matrizaux[0][0]==1 && matrizaux[0][1]==1 && matrizaux[0][2]==1 || 
                       matrizaux[1][0]==1 && matrizaux[1][1]==1 && matrizaux[1][2]==1 ||
                       matrizaux[2][0]==1 && matrizaux[2][1]==1 && matrizaux[2][2]==1){
                        printf("\n X ganhou!\n");
                        break;
                    }

                    if(matrizaux[0][0]==0 && matrizaux[1][0]==0 && matrizaux[2][0]==0 || 
                       matrizaux[0][1]==0 && matrizaux[1][1]==0 && matrizaux[2][1]==0 ||
                       matrizaux[0][2]==0 && matrizaux[1][2]==0 && matrizaux[2][2]==0){
                        printf("\n Bolinha ganhou!\n");
                        break;
                    }
                    if(matrizaux[0][0]==1 && matrizaux[1][0]==1 && matrizaux[2][0]==1 ||
                       matrizaux[0][1]==1 && matrizaux[1][1]==1 && matrizaux[2][1]==1 ||
                       matrizaux[0][2]==1 && matrizaux[1][2]==1 && matrizaux[2][2]==1){
                        printf("\n X ganhou!\n");
                        break;
                    }

                    if(matrizaux[0][0]==0 && matrizaux[1][1]==0 && matrizaux[2][2]==0 ||
                       matrizaux[2][0]==0 && matrizaux[1][2]==0 && matrizaux[0][2]==0){
                        printf("\n Bolinha ganhou!\n");
                        break;
                    }

                    if(matrizaux[0][0]==1 && matrizaux[1][1]==1 && matrizaux[2][2]==1 ||
                       matrizaux[2][0]==1 && matrizaux[1][2]==1 && matrizaux[0][2]==1){
                        printf("\n X ganhou!\n");
                        break;
                    }
                }


                break;


            case 2:
                printf("Saindo...");
                break;
        }
    }while(aux!=2);
    return 0;
}