// Faça um programa que preencha um vetor com 10 números. 
// Depois, peça para o usuário digitar um número. 
// O programa deve fazer uma busca por esse número no vetor e informar se ele foi encontrado e, caso afirmativo, em qual posição (índice).
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(){
    srand(time(NULL));
    int vet[10];
    for(int i=0;i<10;i++){
        vet[i]=rand()%20 + 1;
    }
    int aux=0, aux2;
    do{
        printf("*** Pesquisa de numero no vetor***\n");
        printf("1- Pesquisa numero entre 1 a 20 no vetor\n");
        printf("2- Sair;\n");
        scanf("%d", &aux);
        switch(aux){
            case 1:
                printf("Escreva um numero de 1 a 20: ");
                scanf("%d", &aux2);
                for(int i=0; i<10; i++){
                    if(aux2==vet[i]){
                        printf("Numero encontrado no vetor[%d]!\n", i);
                    }
                }
                break;
            
            case 2:
                printf("\nSaindo...");
                break;
        }

    }while(aux!=2);


    return 0;
}