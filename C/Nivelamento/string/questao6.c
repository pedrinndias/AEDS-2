// Crie um programa que leia uma string e a converta inteiramente para letras maiúsculas. 
// Utilize a função toupper() da biblioteca <ctype.h>. Imprima a string resultante
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
int main(){
    char str[150];
    printf("Escreva uma string: ");
    fgets(str,150,stdin);
    for(int i=0; str[i]!='\0'; i++){
        str[i] = toupper(str[i]); //tinha errado aqui
    }
    printf("%s", str);
}