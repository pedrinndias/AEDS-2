// Crie um procedimento (função void) recursivo chamado inverterString que recebe uma string (ponteiro para char) como parâmetro 
// e a imprime na ordem inversa. A ideia é imprimir o caractere atual depois da chamada recursiva para o restante da string.
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

void inverterString(char *str){
    if(*str=='\0'){
        return;
    }
    inverterString(str+1);//percorre ate chegar no '\0'
    printf("%c", *str)

}
int main(){
    
    return 0;
}