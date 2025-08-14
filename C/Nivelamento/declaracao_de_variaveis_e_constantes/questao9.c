#include<stdio.h>
int main(){

    int mat, idade;
    float peso;
    char sang;

    printf("Informe sua matricula:");
    scanf("%d", &mat);
    printf("Informe sua idade:");
    scanf("%d", &idade);
    printf("Informe seu peso:");
    scanf("%f", &peso);
    printf("Informe seu tipo sanguineo:");
    scanf("%s", sang);

    printf("Matricula: %d \n", mat);
    printf("idade: %d\n", idade);
    printf("peso: %f\n", peso);
    printf("Tipo sanguineo: %s", sang);


    return 0;
}