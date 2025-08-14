#include<stdio.h>
#define TAXA_CAMBIO_DOLAR 5.25

int main(){

    int valor_reais=80;
    float cambio=TAXA_CAMBIO_DOLAR*valor_reais;

    printf("80 reais em dollar eh: %f", cambio );

    return 0;
}
