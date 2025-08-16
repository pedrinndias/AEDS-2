#include<stdio.h>
int main(){
    int alunos=0;
    int soma=0;
    int aux=0;
    printf("Insira a quantidade de alunos: ");
    scanf("%d", &alunos);


    for(int i=0; i<alunos; i++){
        printf("Escreva a nota do aluno[%d]: ", i);
        scanf("%d", &aux);

        soma+=aux;

    }

    printf("Media de notas: %d", soma/alunos);

    return 0;
}