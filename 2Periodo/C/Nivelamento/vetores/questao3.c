// Faça um programa que preencha um vetor com 8 números reais. 
// Em seguida, calcule e mostre a média de todos os elementos. 
// Por fim, indique quantos elementos do vetor estão acima da média calculada.
#include<Stdio.h>
int main(){
    float array[8];
    for(int i=0; i<8;i++){
        printf("Escreva um valor para array[%d]: ", i);
        scanf("%f", &array[i]);
    }
    float media=0;
    for(int i=0;i<8;i++){
        media+=array[i];
    }
    media/=8;
    int count=0;
    for(int i=0;i<8;i++){
        if(array[i]>media){
            count++;
        }
    }
    printf("A Media dos valores do vetor eh %.2f e %d valores ficaram acima da media.", media, count);

    return 0;
}