// Escreva um programa que leia uma string e conte quantas vogais e quantas consoantes 
// (letras do alfabeto que não são vogais) ela possui. Imprima os dois totais.

#include<stdio.h>
#include<string.h>
int main(){
    char str[150];
    printf("Escreva uma string: ");
    fgets(str,150,stdin);
    int nVogais=0, nConsoantes=0;
    for (int i = 0; str[i] != '\0'; i++) {
        printf("%c\n",str[i]);
        if(str[i]=='A' || str[i]=='E' || str[i]=='I' || str[i]=='O' || str[i]=='U' || 
           str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u'){
            nVogais++;
           }else{
                    if(str[i]!='\n'){nConsoantes++;}
           }
    }
    printf("Na string tem %d vogais e %d consoantes!", nVogais, nConsoantes);
    return 0;
}