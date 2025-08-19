//Crie um programa que receba as coordenadas (x1, y1) e (x2, y2) de dois pontos no plano cartesiano. 
//Calcule e exiba a distância euclidiana entre eles. A fórmula da distância é: d = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2))
#include<stdio.h>
#include<math.h>
int main(){
    int x1,y1,x2,y2;
    double distancia;
    printf("Escreva a coordenada (X1,Y1): ");
    scanf("%d,%d", &x1, &y1);
    printf("Escreva a coordenada (X2,Y2): ");
    scanf("%d,%d", &x2, &y2);

    distancia=sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));

    printf("Distancia: %.2lf", distancia);
    return 0;
}