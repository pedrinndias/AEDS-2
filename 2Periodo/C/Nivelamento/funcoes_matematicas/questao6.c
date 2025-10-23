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
    printf("Escreva uma cordenada polar (raio r ): ");
    scanf("%d", &raio);

    printf("Escreva uma cordenada polar (angulo theta em radianos): ");
    scanf("%f", &ang);
    float x=(raio*cos(ang));
    float y=(raio*sin(ang));

    printf("Cordenada X: %d, Codenada Y: %.2f", x, y);

    return 0;
}

