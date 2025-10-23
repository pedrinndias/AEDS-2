//Escreva um programa que calcule as raízes de uma equação de segundo grau (ax² + bx + c = 0). 
//Peça ao usuário os coeficientes a, b e c.

    //Calcule o delta: Δ = b² - 4ac.
    //Se o delta for negativo, informe que não há raízes reais.
    //Se o delta for zero, calcule e mostre a única raiz.
    //Se o delta for positivo, calcule e mostre as duas raízes distintas.

#include<stdio.h>
#include<math.h>

int main(){
    int a, b, c;
    double delta, x1, x2;
    printf("Escreva os coeficientes A, B, C(separados por espaco:): ");
    scanf("%d %d %d", &a, &b, &c);
    delta= pow(b,2)- (4*a*c);
    if(delta==0){
        x1= (-b)/(2*a);
        printf("Delta igual a 0, unico X: %.2lf", x1);
    }else{
        x1= ((-b)+sqrt(delta))/(2*a);
        printf("X1: %.2f", x1);
        x2= ((-b)-sqrt(delta))/(2*a);
        printf("X2: %.2f", x2);
    }
    
    
    return 0;
}