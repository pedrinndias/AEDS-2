#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct pessoa{
    char nome[150];
    int idade;
    char faixaEtaria[150];
}pessoa;

void defineFaixaEtaria(pessoa *p) {
    if (p->idade >= 0 && p->idade <= 12) {
        strcpy(p->faixaEtaria, "Crianca"); //strcpy copia a string a direita para variavel a esqueda
    } else if (p->idade > 12 && p->idade < 18) {
        strcpy(p->faixaEtaria, "Adolescente");
    } else if (p->idade >= 18 && p->idade < 60) {
        strcpy(p->faixaEtaria, "Adulto");
    } else if (p->idade >= 60) {
        strcpy(p->faixaEtaria, "Idoso");
    } else {
        strcpy(p->faixaEtaria, "Idade Invalida");
    }
}
int main(){
    int Npessoas=0, num;
    char nomeaux[150];
    pessoa *p = NULL;
    do{
        printf("\n***Cadastramento de pessoas***\n");
        printf("1- Cadastrar pessoas\n");
        printf("2- Verificar faixa etaria\n");
        printf("3- Sair\n");
        scanf("%d", &num);

        switch(num){

            case 1:
                printf("Quantas pessoas voce quer cadastrar? ");
                scanf("%d", &Npessoas);
                p=(pessoa *)malloc(Npessoas*sizeof(pessoa));
                if (p != NULL) {
                    free(p);
                }
                for(int i=0; i<Npessoas; i++){
                    fflush(stdin);
                    printf("Nome: ");
                    fgets(p[i].nome, 150, stdin);
                    fflush(stdin);
                    printf("Idade: ");
                    scanf("%d", &p[i].idade);
                    defineFaixaEtaria(&p[i]);
                }
                break;
            
            case 2:
                if (p == NULL) {
                    printf("Nenhuma pessoa cadastrada. Use a opcao 1 primeiro.\n");
                    break;
                }
                fflush(stdin);
                printf("Verificar faixa etaria de qual pessoa? ");
                fgets(nomeaux, 150, stdin);
                for(int i=0; i<Npessoas; i++){
                    if(strcmp(p[i].nome, nomeaux)==0){
                        printf("%s", p[i].faixaEtaria);
                    }
                }
                break;
            fflush(stdin);
            case 3:
                printf("Saindo...");
                break;

        }




    }while(num!=3);

    free(p);
    return 0;
}