#include<stdio.h>
#define PI 3.14159
int main(){
    double raio;

    printf("Atriua um valor para a variavel raio:");
    scanf("%lf", &raio);

    printf("Area do circulo: %lf", PI*raio*raio);

    return 0;
}