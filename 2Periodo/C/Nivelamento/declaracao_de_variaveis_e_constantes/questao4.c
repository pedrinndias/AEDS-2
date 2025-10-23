//Declare três variáveis inteiras (nota1, nota2, nota3) na mesma linha para armazenar três notas de uma prova. Atribua valores a elas e imprima cada uma em uma linha.
#include<stdio.h>
int main(){
    int nota1, nota2, nota3;
    printf("Escreva nota 1: ");
    scanf("%d",&nota1);
    printf("Escreva nota 2: ");
    scanf("%d",&nota2);
    printf("Escreva nota 3: ");
    scanf("%d",&nota3);

    printf("Nota 1: %d\n", nota1);
    printf("Nota 2: %d\n", nota2);
    printf("Nota 3: %d\n", nota3);
    return 0;
}