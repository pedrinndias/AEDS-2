#include<stdio.h>
int main(){
    int num, digitos=0;
    printf("Escreva um numero inteiro: ");
    scanf("%d", &num);
    do{
        num/=10;
        digitos++;
    }while(num!=0);
    printf("O numero tem %d digitos", digitos);
    return 0;
}