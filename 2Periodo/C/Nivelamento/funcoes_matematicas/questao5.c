//Crie um programa que peça um ângulo em radianos ao usuário. 
//Calcule e exiba o seno, o cosseno e a tangente desse ângulo utilizando as 
//funções sin(), cos() e tan().
#include<stdio.h>
#include<math.h>
int main(){
    float ang;
    printf("Escreva um angulo em radianos: ");
    scanf("%f", &ang);
    ang*=(180/M_PI);
    printf("Seno: %.2f", sin(ang));
    printf("Cosseno: %.2f", cos(ang));
    printf("Tangente: %.2f", tan(ang));

    return 0;
}