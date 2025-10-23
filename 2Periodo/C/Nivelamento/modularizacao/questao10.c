// Crie uma função chamada lerNotaValida que não recebe parâmetros, mas pede ao usuário para digitar uma nota entre 0 e 10. 
// A função deve continuar pedindo a nota enquanto o valor digitado for inválido. Quando uma nota válida for inserida, a função 
// deve retorná-la. Na main, chame esta função para ler uma nota e depois apenas a imprima.

#include<stdio.h>

int lerNotaValida(){
    int nota;
    do{
       printf("Escreva uma nota de 1 a 10: ");
       scanf("%d", &nota);
    }while(nota<1 || nota>10);
    return nota;
}

int main(){
    int nota=lerNotaValida();
    printf("Nota valida inserida: %d", nota);
    return 0;
}