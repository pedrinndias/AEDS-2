// Faça um programa que leia uma frase e crie uma nova string removendo os espaços em branco extras entre as palavras. 
// Por exemplo, se a entrada for "Eu gosto de programar", a saída deve ser "Eu gosto de programar".
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main(){
    char str[150];
    printf("Escreva uma string: ");
    fgets(str,150,stdin);
    char *strLimpa=(char *)malloc(strlen(str)*sizeof(char));
    int j=0;
    for(int i=0;str[i]!='\0';i++){
        if(str[i]!=' '){
            strLimpa[j]=str[i];
            j++;
        }
    }
    printf("%s", strLimpa);
    return 0;
}