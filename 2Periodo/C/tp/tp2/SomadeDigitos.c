#include <stdio.h>

// Função recursiva que soma os dígitos de um número
int somaDigitos(int n) {
    if (n < 10)
        return n;
    return (n % 10) + somaDigitos(n / 10);
}

int main() {
    int numero;

    // Enquanto houver números sendo lidos da entrada padrão
    while (scanf("%d", &numero) == 1) {
        printf("%d\n", somaDigitos(numero));
    }

    return 0;
}
