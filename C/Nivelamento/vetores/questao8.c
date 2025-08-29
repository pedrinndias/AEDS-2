// // Desenvolva um programa que leia um vetor de 15 posições. 
// // Em seguida, crie um novo vetor que contenha apenas os elementos do vetor original que não se repetem. 
// // Exiba o novo vetor. (Dica: para cada elemento, verifique se ele já foi inserido no novo vetor).

// #include<stdio.h>
// #include<stdlib.h>
// int main(){
//     int vetor[15];
//     int aux1=0,aux2=0;
//     for(int i=0;i<15;i++){
//         printf("Escreva um valor para o vetor[%d]: ", i);
//         scanf("%d", &vetor[i]);
//     }
//     for(int i=0; i<15;i++){ //Erro de logica, aqui estou contando os elementos que se repetem e nao os unicos
//         for(int j=0; j<14;j++){
//             if(vetor[i]==vetor[(j+1)]){
//                 aux1++;
//             }
//         }
//         if(aux1!=0){
//             aux2++;
//         }
//         aux1=0;
//     }
//     int *newVetor=(int *)malloc(aux2*sizeof(int));
//     int aux3=0;
//     if(newVetor==NULL){
//         printf("Falha ao alocar memoria");
//         return 1;
//     }
//     for(int i=0;i<15;i++){
//         for(int j=0;j<14;j++){
//             if(vetor[i]!=vetor[(j+1)]){
//                 newVetor[aux3]=vetor[i];
//                 aux3++;
//             }
//         }
//     }
//     for(int i=0;i<aux2;i++){
//         printf("Elementos que nao se repetem do vetor original newVetor[%d]= %d\n", i, newVetor[i]);
//     }

//     free(newVetor);
//     return 0;
// }


#include<stdio.h>
#include<stdbool.h> 

int main(){
    int vetor[15];
    int newVetor[15]; // No pior caso, todos os 15 são únicos
    int contadorUnicos = 0;

    for(int i=0; i<15; i++){
        printf("Escreva um valor para o vetor[%d]: ", i);
        scanf("%d", &vetor[i]);
    }

    // 2. Lógica para encontrar os elementos únicos
    for(int i=0; i<15; i++){
        bool jaExiste = false;
        
        // Verifica se o elemento vetor[i] já foi adicionado ao newVetor
        for(int j=0; j<contadorUnicos; j++){
            if(vetor[i] == newVetor[j]){
                jaExiste = true;
                break;
            }
        }
        
        // Se, após verificar tudo, ele não existe, adiciona
        if(!jaExiste){
            newVetor[contadorUnicos] = vetor[i];
            contadorUnicos++;
        }
    }

    // 3. Exibição do novo vetor com elementos únicos
    printf("\n--- Vetor com elementos unicos ---\n");
    for(int i=0; i<contadorUnicos; i++){
        printf("newVetor[%d] = %d\n", i, newVetor[i]);
    }

    return 0;
}