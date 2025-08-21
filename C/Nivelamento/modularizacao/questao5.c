#include<stdio.h>
//Escreva uma função fatorial que recebe um número inteiro não negativo e retorna o seu fatorial. 
//Lembre-se que o fatorial de 0 é 1.

int fatorial(int num){
    if(num==1){
        return 1;
    }else{
        return num * fatorial(num-1);
    }
}
int main(){
    int num;
    printf("Escreva um numero inteiro: ");
    scanf("%d", &num);

    printf("Fatorial: %d", fatorial(num));

    return 0;
}