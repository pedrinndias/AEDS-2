#include<stdio.h>
int main(){
    
    int a;
    int b;

    printf("Escreva valor de A:");
    scanf("%d", &a);
    printf("Escreva valor de B:");
    scanf("%d", &b);

    int soma = a+b;

    printf("Soma=%d", soma);

    return 0;
}