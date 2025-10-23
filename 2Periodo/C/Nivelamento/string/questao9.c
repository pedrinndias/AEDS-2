//Escreva um programa que leia uma frase e conte quantas palavras ela contém. 
// Considere que as palavras são separadas por um ou mais espaços em branco.
#include<stdio.h>
#include<string.h>
int main(){
    char str[150];
    fgets(str,150,stdin);
    int count=0;
    for(int i=0;str[i]!='\0';i++){
        if(str[i]==' '){
            count++;
        }
    }
    count++;
    printf("A string tem %d palavras!", count);


    return 0;
}