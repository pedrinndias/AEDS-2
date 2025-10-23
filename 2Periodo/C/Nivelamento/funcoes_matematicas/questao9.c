// Desenvolva uma calculadora de juros compostos. O programa deve pedir ao usuário:

    //O capital inicial (P)
    //A taxa de juros anual (r)
    //O número de vezes que o juro é capitalizado por ano (n)
    //O número de anos (t)

//Use a fórmula A = P * pow((1 + r/n), n*t) para calcular o montante final (A).

#include<stdio.h>
#include<math.h>

int main(){
    int p,r,n,t;
    double montante;
    printf("Escreva o capital inicial: ");
    scanf("%d", &p); 
    printf("Escreva a taxa de juros anual: ");
    scanf("%d", &r);
    printf("Escreva o numero de vezes que o juro e capitalizado por ano: ");
    scanf("%d", &n);
    printf("Escreva o número de anos: ");
    scanf("%d", &t);

    montante= (p*pow((1+(r/n)),n*5));

    printf("Montante: %.2lf",montante);
    return 0;
}