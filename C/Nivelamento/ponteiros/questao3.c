// Crie uma função chamada troca que receba como parâmetros dois ponteiros para inteiros. 
// A função deve trocar os valores das variáveis para as quais os ponteiros apontam. 
// Na sua função main, declare duas variáveis, chame a função troca passando os seus endereços e, por fim, imprima os valores para verificar a troca.
#include<stdio.h>
int troca(int *ptr1, int *ptr2){//recebe como ponteiro
    int aux;
    aux=*ptr1;
    *ptr1=*ptr2;
    *ptr2=aux;
}
int main(){
    int ptr1=9,ptr2=10; //crio variaveis sem ser ponteiro
    printf("%d e %d", ptr1, ptr2);
    troca(&ptr1,&ptr2);//mando o endereço das variaveis
    printf("%d e %d", ptr1, ptr2);
    return 0;
}