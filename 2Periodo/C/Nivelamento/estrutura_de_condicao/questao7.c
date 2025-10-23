// Calculadora Simples (switch-case)
// Desenvolva uma calculadora simples que leia dois números e um operador (+, -, *, /). O programa deve usar uma estrutura switch-case para realizar a operação desejada e imprimir o resultado. Lembre-se de tratar a divisão por zero.
#include<stdio.h>
int main(){
    int num;
    float num1, num2;
    do{
        printf("\n*** CALCULADORA*** \n");
        printf("1- Somatoria\n");
        printf("2- Subtracao\n");
        printf("3- Multipicacao\n");
        printf("4- Divisao\n");
        printf("5- Sair\n");
        scanf("%d", &num);
        if(num>0 && num<6){
            switch(num){
                case 1:
                    printf("Escreva numero 1: ");
                    scanf("%f", &num1);
                    printf("Escreva numero 2: ");
                    scanf("%f", &num2);
                    printf("Soma: %.2f", num1+num2);
                    break;
                case 2:
                    printf("Escreva numero 1: ");
                    scanf("%f", &num1);
                    printf("Escreva numero 2: ");
                    scanf("%f", &num2);
                    printf("Subtracao: %.2f", num1-num2);
                    break;
                case 3:
                    printf("Escreva numero 1: ");
                    scanf("%f", &num1);
                    printf("Escreva numero 2: ");
                    scanf("%f", &num2);
                    printf("Multiplicacao: %.2f", num1*num2);
                    break;
                case 4:
                    printf("Escreva numero 1: ");
                    scanf("%f", &num1);
                    printf("Escreva numero 2: ");
                    scanf("%f", &num2);
                    printf("Divisao: %.2f", num1/num2);
                    break;
                case 5:
                    printf("Saindo...");
                    break;
            }
        }else{
            printf("Numero invalido!");
        }
    }while(num!=5);
    return 0;
}