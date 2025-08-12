# Nivelamento AEDS 1 - Linguagem C/C++

**Sumário**
- 1. Declaração de variáveis e constantes



## Exercícios focados em declaração de variáveis e constantes em C

### Exercício 1: Declarando uma Idade

### Enunciado
Declare uma variável do tipo inteiro para armazenar a sua idade, atribua um valor a ela e imprima o valor na tela.

### Resolução
```c
#include <stdio.h>

int main() {
    // Declaração de uma variável inteira chamada 'idade'
    int idade;

    // Atribuição do valor 25 à variável 'idade'
    idade = 25;

    // Impressão do valor da variável
    printf("A minha idade e: %d anos.\n", idade);

    return 0;
}

```

### Exercício 2: Armazenando a Altura

### Enunciado
Declare uma variável de ponto flutuante (float) para guardar a sua altura em metros. Atribua um valor e imprima na tela, formatando para exibir apenas duas casas decimais.

### Resolução
```c
#include <stdio.h>

int main() {
    // Declaração de uma variável float chamada 'altura' e atribuição de valor
    float altura = 1.75;

    // Impressão do valor com formatação para duas casas decimais (%.2f)
    printf("A minha altura e: %.2f metros.\n", altura);

    return 0;
}

```

**Saída esperada:** A minha altura e: 1.75 metros.

### Exercício 3: Guardando uma Inicial

### Enunciado
Declare uma variável do tipo char para armazenar a primeira letra do seu nome. Atribua o valor e imprima na tela.

### Resolução
```c
#include <stdio.h>

int main() {
    // Declaração de uma variável char. Note o uso de aspas simples.
    char inicial_nome = 'C';

    // Para imprimir um char, usamos o especificador de formato %c
    printf("A inicial do meu nome e: %c\n", inicial_nome);

    return 0;
}
```

**Saída esperada:**A inicial do meu nome e: C

### Exercício 4: Múltiplas Notas

### Enunciado
Declare três variáveis inteiras (nota1, nota2, nota3) na mesma linha para armazenar três notas de uma prova. Atribua valores a elas e imprima cada uma em uma linha.

### Resolução
```c
#include <stdio.h>

int main() {
    // Declaração de múltiplas variáveis do mesmo tipo em uma única linha
    int nota1, nota2, nota3;

    // Atribuição de valores
    nota1 = 10;
    nota2 = 8;
    nota3 = 7;

    printf("Nota 1: %d\n", nota1);
    printf("Nota 2: %d\n", nota2);
    printf("Nota 3: %d\n", nota3);

    return 0;
}

```
**Saída esperada:** 
Nota 1: 10
Nota 2: 8
Nota 3: 7

### Exercício 5: Soma Simples

### Enunciado
Declare duas variáveis inteiras, a e b. Atribua valores a elas. Declare uma terceira variável, soma, e guarde nela o resultado da soma de a e b. Imprima o resultado.

### Resolução
```c
#include <stdio.h>

int main() {
    int a = 5;
    int b = 7;

    // A variável 'soma' armazena o resultado da expressão 'a + b'
    int soma = a + b;

    printf("O resultado de %d + %d e: %d\n", a, b, soma);

    return 0;
}
```

**Saída esperada:**  O resultado de 5 + 7 e: 12

### Exercício 6: Constante PI para Área do Círculo

### Enunciado
Use #define para criar uma constante chamada PI com o valor 3.14159. Depois, declare uma variável raio do tipo double, atribua um valor a ela e calcule a área do círculo (área = PI * raio * raio). Imprima o resultado.

### Resolução
```c
#include <stdio.h>

// Definição de uma constante usando a diretiva #define
#define PI 3.14159

int main() {
    double raio = 5.0;
    double area;

    area = PI * raio * raio;

    printf("A area de um circulo com raio %.1f e: %f\n", raio, area);

    return 0;
}
```

**Saída esperada:** A area de um circulo com raio 5.0 e: 78.539750

### Exercício 7: Constante com a palavra-chave const

**Enunciado:** Declare uma constante inteira chamada `DIAS_SEMANA` usando a palavra-chave `const` e atribua o valor 7. Imprima uma frase que utilize essa constante.

**Resolução:**
```c
#include <stdio.h>

int main() {
    // Declaração de uma constante usando a palavra-chave 'const'
    // O valor de DIAS_SEMANA não pode ser alterado após esta linha.
    const int DIAS_SEMANA = 7;

    printf("Uma semana tem %d dias.\n", DIAS_SEMANA);

    // Tentar fazer DIAS_SEMANA = 8; resultaria em um erro de compilação.

    return 0;
}

```
**Saída esperada:** Uma semana tem 7 dias.

### Exercício 8: Trocando Valores

**Enunciado:** Declare duas variáveis, `caixaA` e `caixaB`, com valores 10 e 20, respectivamente. O objetivo é trocar os valores entre elas. Você precisará de uma variável auxiliar. Ao final, imprima os novos valores de `caixaA` e `caixaB`.

**Resolução:**
```c
#include <stdio.h>

int main() {
    int caixaA = 10;
    int caixaB = 20;
    int aux; // Variável auxiliar para guardar um valor temporariamente

    printf("Valores originais: caixaA = %d, caixaB = %d\n", caixaA, caixaB);

    // Processo de troca
    aux = caixaA;    // aux agora guarda o valor de caixaA (10)
    caixaA = caixaB; // caixaA recebe o valor de caixaB (20)
    caixaB = aux;    // caixaB recebe o valor que estava em aux (10)

    printf("Valores trocados: caixaA = %d, caixaB = %d\n", caixaA, caixaB);

    return 0;
}

```
**Saída esperada:**
Valores originais: caixaA = 10, caixaB = 20
Valores trocados: caixaA = 20, caixaB = 10

### Exercício 9: Perfil Simples

### Enunciado
Crie variáveis para armazenar as seguintes informações: um número de matrícula (inteiro), a idade (inteiro), o peso (float) e o tipo sanguíneo (char). Atribua valores e imprima todos eles de forma organizada.

### Resolução
```c
#include <stdio.h>

int main() {
    int matricula = 12345;
    int idade = 22;
    float peso = 68.5;
    char tipo_sanguineo = 'A'; // Supondo tipo A, fator Rh não incluso

    printf("--- Ficha do Aluno ---\n");
    printf("Matricula: %d\n", matricula);
    printf("Idade: %d anos\n", idade);
    printf("Peso: %.1f kg\n", peso);
    printf("Tipo Sanguineo: %c\n", tipo_sanguineo);
    printf("---------------------\n");

    return 0;
}

```

### Exercício 10: Conversão de Moeda

### Enunciado
Defina uma constante TAXA_CAMBIO_DOLAR com o valor 5.25 (reais por dólar). Declare uma variável valor_reais com um valor qualquer. Calcule o valor correspondente em dólares e armazene em uma variável valor_dolares. Imprima os três valores.

### Resolução
```c
#include <stdio.h>

int main() {
    const double TAXA_CAMBIO_DOLAR = 5.25;
    double valor_reais = 250.00;
    double valor_dolares;

    // Cálculo da conversão
    valor_dolares = valor_reais / TAXA_CAMBIO_DOLAR;

    printf("Taxa de cambio: R$ %.2f por dolar\n", TAXA_CAMBIO_DOLAR);
    printf("Valor em Reais: R$ %.2f\n", valor_reais);
    printf("Valor em Dolares: $ %.2f\n", valor_dolares);

    return 0;
}

```