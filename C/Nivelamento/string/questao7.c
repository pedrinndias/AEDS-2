// // Um palíndromo é uma palavra ou frase que se lê da mesma forma de trás para frente (desconsiderando espaços e acentos). 
// // Crie um programa que leia uma string e verifique se ela é um palíndromo. Exemplos: "arara", "ovo", "radar".
// #include<stdio.h>
// #include<string.h>
// int main(){
//     char str[150];
//     printf("Escreva uma string: ");
//     fgets(str,150,stdin);

//     int count=0;
//     int aux=(strlen(str)-1);
//     for(int i=0; str[i]!='\0';i++){
//         if(i!=aux){
//             if(str[i]==str[aux]){
//                 count++;
//             }
//         }
//         aux--;
//     }
//     if(count==(strlen(str)-2)){
//         printf("Eh palindromo!");
//     }else{
//         printf("Nao eh palindromo");
//     }
// }


//codigo corrigidio

#include<stdio.h>
#include<string.h>

int main(){
    char str[150];
    printf("Escreva uma string: ");
    fgets(str, 150, stdin);

    str[strcspn(str, "\n")] = '\0'; //tira o barra N do final

    int i = 0;
    int j = strlen(str) - 1; //-1 tira o \0 do final
    int eh_palindromo = 1; 

    while (i < j) {
        if (str[i] != str[j]) {
            eh_palindromo = 0;
            break;             
        }
        i++;
        j--;
    }

    if (eh_palindromo) {
        printf("Eh palindromo!\n");
    } else {
        printf("Nao eh palindromo.\n");
    }

    return 0;
}