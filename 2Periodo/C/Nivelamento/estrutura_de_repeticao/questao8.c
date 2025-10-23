#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(){
    srand(time(NULL));

    int numA=rand()%100+1;
    int num;

    printf("%d\n", numA);
    do{
        printf("Escreva um numero de 1 a 100: ");
        scanf("%d", &num);
        if(num==numA){
            printf("Voce acertou!");
        }else{
            if(num<numA){
                printf("Numero e menor que o numero escolhido!\n");
            }else{
                printf("Numero e maior que o numero escolhido!\n");
            }
        }

    }while(num!=numA);

    return 0;
}