// Refatore o exercício da "Calculadora Simples" (dos exercícios de switch-case) para usar funções. 
// Crie funções separadas para somar, subtrair, multiplicar e dividir. A função main será responsável por obter 
// os dados do usuário e chamar a função apropriada com base na operação escolhida.



// --------------------------------
// #include<stdio.h>

// void soma(float *num1, float *num2){
//     printf("Escreva numero 1: ");
//     scanf("%f", &num1);
//     printf("Escreva numero 2: ");
//     scanf("%f", &num2);
//     fflush(stdin);
//     printf("Soma: %.2f", (*num1)+(*num2));
//     return;
// }

// void sub(float *num1, float *num2){
//     printf("Escreva numero 1: ");
//     scanf("%f", &num1);
//     printf("Escreva numero 2: ");
//     scanf("%f", &num2);
//     printf("Subtracao: %.2f", (*num1)-(*num2));
//     return;
// }

// void multi(float *num1, float *num2){
//     printf("Escreva numero 1: ");
//     scanf("%f", &num1);
//     printf("Escreva numero 2: ");
//     scanf("%f", &num2);
//     printf("Multiplicacao: %.2f", (*num1)*(*num2));
//     return;
// }

// void div(float *num1, float *num2){
//     printf("Escreva numero 1: ");
//     scanf("%f", &num1);
//     printf("Escreva numero 2: ");
//     scanf("%f", &num2);
//     printf("Divisao: %.2f", (*num1)/(*num2));
//     return;
// }

// int main(){
//     int num;
//     float *num1, *num2;
//     do{
//         printf("\n*** CALCULADORA*** \n");
//         printf("1- Somatoria\n");
//         printf("2- Subtracao\n");
//         printf("3- Multipicacao\n");
//         printf("4- Divisao\n");
//         printf("5- Sair\n");
//         scanf("%d", &num);
//         if(num>0 && num<6){
//             switch(num){
//                 case 1:
//                     soma(num1,num2);
//                     break;
//                 case 2:
//                     sub(num1,num2);
//                     break;
//                 case 3:
//                     multi(num1,num2);
//                     break;
//                 case 4:
//                     div(num1,num2);
//                     break;
//                 case 5:
//                     printf("Saindo...");
//                     break;
//             }
//         }else{
//             printf("Numero invalido!");
//         }
//     }while(num!=5);
//     return 0;
// }

// --------------------------------

#include<stdio.h>

// As funções de cálculo agora recebem os números por valor e retornam o resultado.
float soma(float num1, float num2) { //recebe variavel
    return num1 + num2;
}

float sub(float num1, float num2) {
    return num1 - num2;
}

float multi(float num1, float num2) {
    return num1 * num2;
}

float divisao(float num1, float num2) {
    // Adiciona uma verificação para evitar divisão por zero.
    if (num2 == 0) {
        printf("Erro! Divisao por zero.\n");
        return 0; // Ou um valor que indique erro.
    }
    return num1 / num2;
}

// Função para limpar o buffer do teclado de forma segura.
void limpar_buffer() {
    int c;
    while ((c = getchar()) != '\n' && c != EOF);
}

int main() {
    int num;
    float num1, num2, resultado;

    do {
        printf("\n*** CALCULADORA*** \n");
        printf("1- Somatoria\n");
        printf("2- Subtracao\n");
        printf("3- Multiplicacao\n");
        printf("4- Divisao\n");
        printf("5- Sair\n");
        printf("Escolha a operacao: ");
        scanf("%d", &num);
        limpar_buffer(); // Limpa o buffer após a leitura do número.

        if (num > 0 && num < 5) {
            printf("Escreva numero 1: ");
            scanf("%f", &num1);
            printf("Escreva numero 2: ");
            scanf("%f", &num2);
            limpar_buffer();

            switch(num) {
                case 1:
                    resultado = soma(num1, num2);
                    printf("Soma: %.2f\n", resultado);
                    break;
                case 2:
                    resultado = sub(num1, num2);
                    printf("Subtracao: %.2f\n", resultado);
                    break;
                case 3:
                    resultado = multi(num1, num2);
                    printf("Multiplicacao: %.2f\n", resultado);
                    break;
                case 4:
                    resultado = divisao(num1, num2);
                    // O printf já é chamado dentro da função se houver erro.
                    if (num2 != 0) {
                        printf("Divisao: %.2f\n", resultado);
                    }
                    break;
            }
        } else if (num == 5) {
            printf("Saindo...");
        } else {
            printf("Numero invalido!\n");
        }
    } while (num != 5);

    return 0;
}