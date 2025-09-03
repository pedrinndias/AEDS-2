// Crie uma função que receba uma string (um ponteiro para char) e conte o número de vogais nela. 
// Use um ponteiro para percorrer a string.

#include<stdio.h>
#include<string.h>
int vogais(char *str, int tam){
    int count=0;
    for(int i=0; *(str+i)!='\0'; i++){
        if(*(str+i)== 'A' || *(str+i)== 'E' || *(str+i)== 'I' || *(str+i)== 'O' || *(str+i)== 'U' || 
           *(str+i)== 'a' || *(str+i)== 'e' || *(str+i)== 'i' || *(str+i)== 'o' || *(str+i)== 'u'){
            count++;
           }
    }
    return count;
}
int main(){
    char str[150];
    int tam;
    printf("Escreva uma string de ate 149 caracteres: ");
    fgets(str, 150, stdin);
    tam=strlen(str);
    int count=0;
    count=vogais(str,tam);
    printf("A string tem %d vogais!", count);
    return 0;
}