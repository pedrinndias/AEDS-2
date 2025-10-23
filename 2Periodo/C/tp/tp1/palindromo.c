#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define MAX 300
//procedimento recursivo que atraves de aritimetica ponteiro percorre a string e confere se o 
// caractere da esquerda e proporcionamente igual ao caractere da direita
void ehPalindromo(char *str,int tam,int index){
    if (index>tam/2){
        printf("SIM\n");
        return;
    } else{
        if (*(str+index)== *(str + tam - index)){
            return ehPalindromo(str,tam ,index+1);
        } 
        printf("NAO\n");
        return;
    }
}
//aloca dinamicamente a memoria, escaneia o que foi digitado no teclado e joga no procedimento para verificar se é um palindromo
int main (){
    char *str=(char *)malloc(MAX*sizeof(char));
    if(str==NULL){
        printf("falha ao alocar memoria");
        return 1;
    }
    if(str==NULL){
        return 1;
    }
      while(scanf(" %[^\n]", str)&&strcmp(str,"FIM") != 0){
        str[strcspn(str,"\n")]='\0';
        ehPalindromo(str,strlen(str)-1,0);
    }
    free(str);
    return 0;
}