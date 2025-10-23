// Crie um programa que leia uma string, um caractere a ser procurado e um caractere a ser inserido no lugar do primeiro. 
// O programa deve substituir todas as ocorrências do caractere procurado pelo novo caractere. 
// Exemplo: na string "banana", substituir 'a' por 'o' resultaria em "bonono".

#include<string.h>
#include<stdio.h>
int main(){
    char str[150];
    char procurado;
    char inserir;
    printf("Escreva uma string: ");
    fgets(str,150,stdin);
    printf("Escreva um caractere a ser procurado: ");
    scanf("%c", &procurado);
    fflush(stdin);
    printf("Escreva um caractere a ser inserido: ");
    scanf("%c", &inserir);
    for(int i=0;str[i]!='\0';i++){
        if(str[i]==procurado){
            str[i]=inserir;
        }
    }
    printf("String final:  %s", str);
    return 0;
}