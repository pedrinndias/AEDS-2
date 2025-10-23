// Faça um programa que leia duas strings e, em seguida, crie uma terceira string que seja a concatenação das duas primeiras. 
// Por exemplo, se as strings lidas forem "bom" e "dia", a nova string deverá ser "bomdia". 
// Desafio: implemente a lógica de concatenação manualmente, sem usar a função strcat().

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(){
    char str1[150];
    char str2[150];
    int tam1, tam2;
    printf("Escreva um string1 de ate 149 caracteres: ");
    fgets(str1, sizeof(str1), stdin);
    printf("Escreva um string2 de ate 149 caracteres: ");
    fgets(str2 , sizeof(str2), stdin);
    tam1=strlen(str1);
    tam2=strlen(str2);
    char *str3=(char *)malloc((tam1+tam2+1)*sizeof(char));
    int aux=0;
    int i,j;
    for (i = 0; i < tam1; i++) {
        str3[i] = str1[i];
    }
    for (j = 0; j < tam2; j++, i++) {
        str3[i] = str2[j];
    }
    str3[tam1+tam2+1]='\0';
    printf("%s", str3);
    return 0;
}