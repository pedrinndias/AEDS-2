// Faça uma função recursiva somaAteN que recebe um inteiro positivo n e retorna a soma de todos os números de 1 até n. 
// O caso base é quando n é 1, retornando 1.

#include<stdio.h>
int somaAteN(int num){
    if(num==1){
        return 1;
    }else{
        return num+somaAteN(num-1);
    }
}
int main(){
    int num;
    printf("Escreva ")
}