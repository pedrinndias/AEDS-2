// Escreva uma função que receba uma string como parâmetro e retorne o número de caracteres que ela contém. 
// Desafio: não utilize a função strlen() da biblioteca <string.h>. 
// Você deve percorrer o vetor de caracteres até encontrar o caractere nulo (\0).

#include<stdio.h>
int contador(char *str){
    int count=0;
    for(int i=0;str[i]!='\0';i++){
        count++;
    }
    return count;
}
int main(){
    char str[150];
    printf("Escreva uma string: ");
    scanf("%s", str);
    printf("A string tem %d caracteres!", contador(str));
    return 0;
}