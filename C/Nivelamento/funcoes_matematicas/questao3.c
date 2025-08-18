// Desenvolva um programa que receba o comprimento de dois catetos de um triângulo retângulo. 
//Calcule e exiba o comprimento da hipotenusa utilizando a função hypot().

#include<stdio.h>
#include<math.h>
int main(){
    int cat1, cat2;
    double hip;
    printf("Escreva o valor do cateto1: ");
    scanf("%d", &cat1);
    printf("Escreva o valor do cateto2: ");
    scanf("%d", &cat2);

    hip=sqrt((pow(cat1,2)+pow(cat2,2)));
    printf("Hipotenusa: %.2lf", hip);


    return 0;
}