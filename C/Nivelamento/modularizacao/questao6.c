// Crie uma função chamada maiorValor que recebe três números do tipo float como parâmetros e retorna o maior entre eles.
#include<stdio.h>

float maiorValor(float num1, float num2, float num3){
    float maior;
    if(num1>num2){
        maior=num1;
    }else{
        maior=num2;
    }

    if(maior>num3){
        return maior;
    }else{
        return num3;
    }
}

int main(){
    float num1, num2, num3;
    printf ("Escreva um numero[1]: ");
    scanf("%f", &num1);
    printf ("Escreva um numero[2]: ");
    scanf("%f", &num2);
    printf ("Escreva um numero[3]: ");
    scanf("%f", &num3);

    printf("O maior deles eh: %f", maiorValor(num1,num2,num3));
    
    return 0;
}