#include<stdio.h>
#include<stdlib.h>
#include <string.h>
typedef struct Alunos{
    char nome[60];
    char nota;
    char MensagemNota[150];
}Alunos;
int main(){
    int Nalunos;
    printf("Quantos alunos voce ira registrar? ");
    scanf("%d", &Nalunos);
    Alunos *aluno=(Alunos *)malloc(Nalunos*sizeof(Alunos));

    if (aluno == NULL) {
        printf("Erro ao alocar memoria.\n");
        return 1;
    }

    for(int i=0; i<Nalunos; i++){
        fflush(stdin);
        printf("Escreva o nome do aluno[%i]: ", i+1);
        fgets (aluno[i].nome, 60, stdin);
        fflush(stdin);

        printf("Escreva a nota do aluno[%d] (A, B, C, D ou F): ", i + 1);
        scanf(" %c", &aluno[i].nota);
        switch(aluno[i].nota) {
            case 'A':
            case 'a': 
                strcpy(aluno[i].MensagemNota, "A - Excelente");
                break;
            case 'B':
            case 'b':
                strcpy(aluno[i].MensagemNota, "B - Ótimo");
                break;
            case 'C':
            case 'c':
                strcpy(aluno[i].MensagemNota, "C - Bom");
                break;
            case 'D':
            case 'd':
                strcpy(aluno[i].MensagemNota, "D - Regular");
                break;
            case 'F':
            case 'f':
                strcpy(aluno[i].MensagemNota, "F - Reprovado");
                break;
        }
    }
    int num;
    char nomeaux[150];
    do{
        printf("\n *** Conferir notas alunos*** \n");
        printf("1- Iniciar: \n");
        printf("2- Sair\n");
        scanf("%d", &num);
        fflush(stdin);
        switch(num){
            case 1:
                for(int i = 0; i < Nalunos; i++) {
                        printf("%s\n", aluno[i].MensagemNota);
                }

                break;
            case 2:
                printf("Saindo...");
                break;
        }



    }while(num==2);


return 0;
}