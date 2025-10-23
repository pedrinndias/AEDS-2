//Crie um programa para uma loja que calcula um desconto. Peça o valor total da compra. Se o valor for maior que R$100,00, aplique um desconto de 10%. Caso contrário, não há desconto. Use o operador ternário para calcular e exibir o valor final.
#include<stdio.h>
int main(){
    int valorTotal;
    printf("Escreva o valor total da compra: ");
    scanf("%d", &valorTotal);

    int desconto = valorTotal*0.1;
    
    valorTotal>100? printf("Valor com desconto aplicado: %d reais", valorTotal-desconto) : printf("Valor nao esta apto a receber desconto!");

    return 0;
}