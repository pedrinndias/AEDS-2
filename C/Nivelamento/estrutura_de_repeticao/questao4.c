// Desenvolva um programa que peça ao usuário para digitar uma senha. O programa deve continuar pedindo a senha enquanto o usuário não digitar a senha correta ("1234"). Quando a senha correta for digitada, exiba a mensagem "Acesso Permitido".
#include<stdio.h>
#include<string.h>

int main(){
    char senha[20];
    const char *SENHA_CORRETA="1234";

    printf("Digite uma senha: ");
        scanf("%d", &senha);

    while(strcmp(senha, SENHA_CORRETA)!=0){
        printf("Digite uma senha: ");
        scanf("%d", &senha);
    }
    

    return 0;
}