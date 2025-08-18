    // Desenvolva um programa que leia três números inteiros e use estruturas if-else aninhadas para encontrar e imprimir o maior dos três.
    #include<stdio.h>
    int main(){
        int num[3];
        for(int i=0; i<3; i++){
            printf("Escreva o %d numero de dados: ", i+1);
            scanf("%d", &num[i]);
        }
        int maior=num[0];
        for(int i=1; i<3; i++){
            if(num[i]>maior){
                maior=num[i];
            }
        }
        printf("O maior numero eh: %d", maior);
        return 0;
    }