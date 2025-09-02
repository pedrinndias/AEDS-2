// Desenvolva um programa que leia uma string e a inverta. 
// Por exemplo, se a string for "programar", o programa deve gerar a string "ramargorp". 
// Você pode criar uma nova string para armazenar o resultado invertido.

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main(){
    char str[150];
    printf("Escreva uma string: ");
    fgets(str,150,stdin);
    char *strInv=(char *)malloc(strlen(str)*sizeof(char));
    int aux=(strlen(str))-1;
    for(int i=0;i<strlen(str);i++){
        strInv[i]=str[aux];
        aux--;
    }
    strInv[strlen(str)]='\0';
    printf("String invertida: %s", strInv);
    return 0;
}