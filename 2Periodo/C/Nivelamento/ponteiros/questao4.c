// Escreva uma função que receba dois números inteiros e dois ponteiros para int. 
// A função deve calcular a soma e a subtração dos dois números e armazenar os resultados nos endereços de memória apontados pelos ponteiros. 
// Na main, chame a função e imprima os resultados da soma e da subtração.

#include<stdio.h>
void calculo(int num1, int num2, int *soma, int *sub){
    *soma= num1+num2;
    *sub= num1-num2;
}

int main(){
    int num1,num2,soma,sub;
    printf("Escreva um numero[1]: ");
    scanf("%d", &num1);
    printf("Escreva um numero[2]: ");
    scanf("%d", &num2);
    calculo(num1,num2, &soma,&sub);
    printf("Soma: %d; Subtracao: %d", soma, sub);
    return 0;
    
}