//Escreva um programa que converta coordenadas polares (raio r e ângulo theta em radianos) para coordenadas 
//cartesianas (x, y). As fórmulas são:

    //x = r * cos(theta)
    //y = r * sin(theta)
//Peça ao usuário o raio e o ângulo e, em seguida, exiba as coordenadas x e y resultantes.

#include<stdio.h>
#include<math.h>
int main(){
    float ang;
    int raio;
    printf("Escreva uma cordenada polar (raio r e angulo theta em radianos): ");
    scanf("%d%f", &raio, &ang);
    int x=(raio*cos(ang));
    int y=(raio*sin(ang));

    printf("");
}

