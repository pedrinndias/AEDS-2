// Desenvolva uma função recursiva potencia que recebe dois inteiros, base e expoente, e retorna o resultado de base elevado 
// ao expoente. Considere que o expoente será sempre não negativo. O caso base é quando o expoente é 0, retornando 1.
#include<stdio.h>
int pot(int base, int expo){
    if(base==0){
        return 1;
    }else{
        return base*pot(base,expo-1);
    }
}

int main(){
    int base, expo;
    printf("Escreva uma base: ");
    scanf("%d", &base);
    printf("Escreva um expoente: ");
    scanf("%d", &expo);
    int potencia=pot(base,expo);
    printf("Potencia: %d", potencia);
    return 0;
}