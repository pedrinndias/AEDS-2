#include<stdio.h>
int main(){
    int num=0;
    int num1, num2;
    printf("*** Calculadora ***");
    do{
        printf("\n 1- Somar");
        printf("\n 2- Subtrair");
        printf("\n 3- Sair \n");
        scanf("%d", &num);
        switch(num) {
            case 1:
                printf("Escreva primeiro numero: ");
                scanf("%d", &num1);
                printf("Escreva segundo numero: ");
                scanf("%d", &num2);
                printf("Soma: %d \n", num1+num2);
                break;

            case 2:
                printf("Escreva primeiro numero: ");
                scanf("%d", &num1);
                printf("Escreva segundo numero: ");
                scanf("%d", &num2);
                printf("Subtracao: %d\n", num1-num2);
                break;

            case 3:
                break;
        
        }

    }while(num!=3);

    return 0;
}