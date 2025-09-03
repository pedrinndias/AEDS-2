// Declare uma variável do tipo int. Em seguida, declare um ponteiro para int. 
// Atribua o endereço da variável ao ponteiro. 
// Imprima na tela: 
// a) O valor da variável. 
// b) O endereço da variável. 
// c) O valor armazenado no ponteiro (que deve ser o endereço da variável). 
// d) O valor da variável acessado através do ponteiro (usando o operador de dereferenciação *).

#include<stdio.h>
int main(){
    int var=5, *ptr;
    ptr = &var;
    printf("a) Valor da variavel: %d\n", var);
    printf("b) Endereco da variavel: %p\n", &var); //%p informa o endereço de memoria
    printf("c) Valor armazenado no ponteiro: %p\n", ptr); //%p informa o endereço de memoria
    printf("d) Valor acessado pelo ponteiro: %d\n", *ptr);

    return 0;
}