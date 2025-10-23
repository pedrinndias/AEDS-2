// Sequência de Fibonacci Recursiva

#include<stdio.h>
int fibonacci(int n){
    if(n==2){
        return 2;
    }else{
        if(n==0 || n==1){
            return 1;
        }else{
            return fibonacci(n-1)+fibonacci(n-2);
        }
    }
}

int main(){
    int num;
    printf("Escreva um numero: ");
    scanf("%d", &num);
    printf("N-esimo termo da sequencia de fibonacci: %d", fibonacci(num));
    return 0;
}