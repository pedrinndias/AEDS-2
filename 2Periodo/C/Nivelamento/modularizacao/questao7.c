// Faça um procedimento chamado trocarValores que recebe dois ponteiros para inteiros como parâmetros e 
// troca os valores das variáveis para as quais eles apontam. Na main, declare duas variáveis, imprima seus valores, 
// chame a função e imprima os valores novamente para mostrar que foram trocados.
#include<stdio.h>
void trocarValores(int *num1, int *num2){
        int aux;
        aux=*num1;
        *num1=*num2;
        *num2=aux;
        return;
    }


int main(){
    int num1,num2;
    printf("Escreva um numero[1]: ");
    scanf("%d", &num1);
    printf("Escreva um numero[2]: ");
    scanf("%d", &num2);

    trocarValores(&num1,&num2);
    
    printf("Num[1]: %d\n", num1);
    printf("Num[2]: %d\n", num2);

    return 0;
}