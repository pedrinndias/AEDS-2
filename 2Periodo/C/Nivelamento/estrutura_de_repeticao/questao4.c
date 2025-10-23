#include <stdio.h>
#include <string.h>

int main() {
    char senha_digitada[20];
    const char *senha_correta = "1234";

    printf("Digite a senha: ");
    scanf("%s", senha_digitada);

    while (strcmp(senha_digitada, senha_correta) != 0) {
        printf("Senha incorreta. Tente novamente: ");
        scanf("%s", senha_digitada);
    }

    printf("Acesso Permitido.\n");

    return 0;
}