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

---

## Exercícios focados em Funções matemáticas utilizando a biblioteca math.h  em C

### **Exercícios de Programação em C com `math.h`**

#### **Exercício 1: Calculadora de Raiz Quadrada**
Crie um programa que peça ao usuário para inserir um número. Use a função `sqrt()` da biblioteca `math.h` para calcular e exibir a raiz quadrada desse número.

**Função principal:** `sqrt()`
#include <stdio.h>
#include <math.h>

``` C
int main() {
    double numero, resultado;

    printf("Digite um numero para calcular a raiz quadrada: ");
    scanf("%lf", &numero);

    if (numero >= 0) {
        resultado = sqrt(numero);
        printf("A raiz quadrada de %.2lf e %.2lf\n", numero, resultado);
    } else {
        printf("Nao e possivel calcular a raiz quadrada de um numero negativo.\n");
    }

    return 0;
}

```

#### **Exercício 2: Potenciação**
Escreva um programa que receba dois números do usuário: a base e o expoente. Utilize a função `pow()` para calcular a potência e mostre o resultado.

**Função principal:** `pow()`

``` C
#include <stdio.h>
#include <math.h>

int main() {
    double base, expoente, resultado;

    printf("Digite o valor da base: ");
    scanf("%lf", &base);

    printf("Digite o valor do expoente: ");
    scanf("%lf", &expoente);

    resultado = pow(base, expoente);

    printf("%.2lf elevado a %.2lf e igual a %.2lf\n", base, expoente, resultado);

    return 0;
}

```


#### **Exercício 3: Calculadora de Hipotenusa**
Desenvolva um programa que receba o comprimento de dois catetos de um triângulo retângulo. Calcule e exiba o comprimento da hipotenusa utilizando a função `hypot()`.

**Função principal:** `hypot()`

``` C
#include <stdio.h>
#include <math.h>

int main() {
    double cateto1, cateto2, hipotenusa;

    printf("Digite o comprimento do primeiro cateto: ");
    scanf("%lf", &cateto1);

    printf("Digite o comprimento do segundo cateto: ");
    scanf("%lf", &cateto2);

    hipotenusa = hypot(cateto1, cateto2);

    printf("A hipotenusa do triangulo com catetos %.2lf e %.2lf e %.2lf\n", cateto1, cateto2, hipotenusa);

    return 0;
}

```

#### **Exercício 4: Arredondamento de Números**
Faça um programa que solicite um número decimal (float) ao usuário. Em seguida, mostre o número arredondado para cima usando a função `ceil()` e para baixo usando a função `floor()`.

**Funções principais:** `ceil()`, `floor()`

``` C
#include <stdio.h>
#include <math.h>

int main() {
    double numero, arredondado_cima, arredondado_baixo;

    printf("Digite um numero decimal (ex: 5.7): ");
    scanf("%lf", &numero);

    arredondado_cima = ceil(numero);
    arredondado_baixo = floor(numero);

    printf("Numero original: %.2lf\n", numero);
    printf("Arredondado para cima (ceil): %.2lf\n", arredondado_cima);
    printf("Arredondado para baixo (floor): %.2lf\n", arredondado_baixo);

    return 0;
}

```

#### **Exercício 5: Funções Trigonométricas Básicas**
Crie um programa que peça um ângulo em radianos ao usuário. Calcule e exiba o seno, o cosseno e a tangente desse ângulo utilizando as funções `sin()`, `cos()` e `tan()`.

**Funções principais:** `sin()`, `cos()`, `tan()`
**Dica:** Lembre-se que as funções trigonométricas em `math.h` trabalham com radianos.

``` C
#include <stdio.h>
#include <math.h>

int main() {
    double angulo_radianos, seno, cosseno, tangente;

    printf("Digite um angulo em radianos: ");
    scanf("%lf", &angulo_radianos);

    seno = sin(angulo_radianos);
    cosseno = cos(angulo_radianos);
    tangente = tan(angulo_radianos);

    printf("Para o angulo %.4lf radianos:\n", angulo_radianos);
    printf("Seno: %.4lf\n", seno);
    printf("Cosseno: %.4lf\n", cosseno);
    printf("Tangente: %.4lf\n", tangente);

    return 0;
}

``` 

#### **Exercício 6: Conversor de Coordenadas**
Escreva um programa que converta coordenadas polares (raio `r` e ângulo `theta` em radianos) para coordenadas cartesianas (`x`, `y`). As fórmulas são:
* `x = r * cos(theta)`
* `y = r * sin(theta)`

Peça ao usuário o raio e o ângulo e, em seguida, exiba as coordenadas `x` e `y` resultantes.

**Funções principais:** `cos()`, `sin()`

``` C
#include <stdio.h>
#include <math.h>

int main() {
    double r, theta, x, y;

    printf("--- Conversor de Coordenadas Polares para Cartesianas ---\n");
    printf("Digite o raio (r): ");
    scanf("%lf", &r);

    printf("Digite o angulo theta em radianos: ");
    scanf("%lf", &theta);

    x = r * cos(theta);
    y = r * sin(theta);

    printf("As coordenadas cartesianas (x, y) sao: (%.2lf, %.2lf)\n", x, y);

    return 0;
}

```


#### **Exercício 7: Logaritmos**
Faça um programa que peça um número positivo ao usuário. Calcule e mostre:
1.  O logaritmo natural (base *e*) do número, usando `log()`.
2.  O logaritmo base 10 do número, usando `log10()`.

**Funções principais:** `log()`, `log10()`

``` C
#include <stdio.h>
#include <math.h>

int main() {
    double numero, log_natural, log_base10;

    printf("Digite um numero positivo: ");
    scanf("%lf", &numero);

    if (numero > 0) {
        log_natural = log(numero);
        log_base10 = log10(numero);

        printf("Para o numero %.2lf:\n", numero);
        printf("Logaritmo Natural (base e): %.4lf\n", log_natural);
        printf("Logaritmo Base 10: %.4lf\n", log_base10);
    } else {
        printf("O logaritmo so e definido para numeros positivos.\n");
    }

    return 0;
}

```

#### **Exercício 8: Distância Euclidiana**
Crie um programa que receba as coordenadas (`x1`, `y1`) e (`x2`, `y2`) de dois pontos no plano cartesiano. Calcule e exiba a distância euclidiana entre eles. A fórmula da distância é:
`d = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2))`

**Funções principais:** `sqrt()`, `pow()`

``` C
#include <stdio.h>
#include <math.h>

int main() {
    double x1, y1, x2, y2, distancia;

    printf("Digite as coordenadas do primeiro ponto (x1 y1): ");
    scanf("%lf %lf", &x1, &y1);

    printf("Digite as coordenadas do segundo ponto (x2 y2): ");
    scanf("%lf %lf", &x2, &y2);

    distancia = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));

    printf("A distancia euclidiana entre os pontos (%.2lf, %.2lf) e (%.2lf, %.2lf) e %.2lf\n", x1, y1, x2, y2, distancia);

    return 0;
}

```

#### **Exercício 9: Cálculo de Juros Compostos**
Desenvolva uma calculadora de juros compostos. O programa deve pedir ao usuário:
* O capital inicial (P)
* A taxa de juros anual (r)
* O número de vezes que o juro é capitalizado por ano (n)
* O número de anos (t)

Use a fórmula `A = P * pow((1 + r/n), n*t)` para calcular o montante final (A).

**Função principal:** `pow()`

``` C
#include <stdio.h>
#include <math.h>

int main() {
    double capital_inicial, taxa_juros_anual, montante_final, tempo_anos;
    int n_capitalizacoes;

    printf("Digite o capital inicial (P): ");
    scanf("%lf", &capital_inicial);

    printf("Digite a taxa de juros anual (r) (ex: 0.05 para 5%%): ");
    scanf("%lf", &taxa_juros_anual);

    printf("Digite o numero de vezes que o juro e capitalizado por ano (n): ");
    scanf("%d", &n_capitalizacoes);

    printf("Digite o numero de anos (t): ");
    scanf("%lf", &tempo_anos);

    montante_final = capital_inicial * pow((1 + taxa_juros_anual / n_capitalizacoes), n_capitalizacoes * tempo_anos);

    printf("O montante final apos %.1lf anos sera de: R$ %.2lf\n", tempo_anos, montante_final);

    return 0;
}

```

#### **Exercício 10: Bhaskara**
Escreva um programa que calcule as raízes de uma equação de segundo grau (`ax² + bx + c = 0`). Peça ao usuário os coeficientes `a`, `b` e `c`.
1.  Calcule o delta: `Δ = b² - 4ac`.
2.  Se o delta for negativo, informe que não há raízes reais.
3.  Se o delta for zero, calcule e mostre a única raiz.
4.  Se o delta for positivo, calcule e mostre as duas raízes distintas.

`x = (-b ± sqrt(Δ)) / (2a)`

**Funções principais:** `sqrt()`, `pow()` (para `b²`)

``` C
#include <stdio.h>
#include <math.h>

int main() {
    double a, b, c, delta, x1, x2;

    printf("Calculadora de equacao de segundo grau (ax^2 + bx + c = 0)\n");
    printf("Digite o coeficiente 'a': ");
    scanf("%lf", &a);
    printf("Digite o coeficiente 'b': ");
    scanf("%lf", &b);
    printf("Digite o coeficiente 'c': ");
    scanf("%lf", &c);

    if (a == 0) {
        printf("Nao e uma equacao de segundo grau.\n");
        return 1;
    }

    delta = pow(b, 2) - 4 * a * c;

    if (delta < 0) {
        printf("A equacao nao possui raizes reais (delta = %.2lf).\n", delta);
    } else if (delta == 0) {
        x1 = -b / (2 * a);
        printf("A equacao possui uma raiz real: x = %.2lf\n", x1);
    } else {
        x1 = (-b + sqrt(delta)) / (2 * a);
        x2 = (-b - sqrt(delta)) / (2 * a);
        printf("A equacao possui duas raizes reais:\n");
        printf("x1 = %.2lf\n", x1);
        printf("x2 = %.2lf\n", x2);
    }

    return 0;
}

```

---

## Exercícios focados em Estruturas condicionais (if-else / operador ternario / switch case)

### Exercício 1: Verificador de Número (if-else)
Escreva um programa que peça ao usuário para inserir um número inteiro. O programa deve então verificar e informar se o número é positivo, negativo ou zero.

### Exercício 1: Verificador de Número (if-else)
```c
#include <stdio.h>

int main() {
    int numero;

    printf("Digite um numero inteiro: ");
    scanf("%d", &numero);

    if (numero > 0) {
        printf("O numero %d e positivo.\n", numero);
    } else if (numero < 0) {
        printf("O numero %d e negativo.\n", numero);
    } else {
        printf("O numero e zero.\n");
    }

    return 0;
}
```

### Exercício 2: Elegibilidade para Votação (if-else)
Crie um programa que solicite a idade de uma pessoa e determine se ela está apta a votar. No Brasil, o voto é obrigatório para maiores de 18 anos e facultativo para pessoas entre 16 e 18 anos e maiores de 70 anos. Considere essas regras.

### Exercício 2: Elegibilidade para Votação (if-else)
```c
#include <stdio.h>

int main() {
    int idade;

    printf("Digite a sua idade: ");
    scanf("%d", &idade);

    if (idade >= 18 && idade <= 70) {
        printf("Com %d anos, o voto e obrigatorio.\n", idade);
    } else if ((idade >= 16 && idade < 18) || idade > 70) {
        printf("Com %d anos, o voto e facultativo.\n", idade);
    } else {
        printf("Com %d anos, voce nao pode votar.\n", idade);
    }

    return 0;
}
```

### Exercício 3: O Maior de Três (if-else aninhado)
Desenvolva um programa que leia três números inteiros e use estruturas `if-else` aninhadas para encontrar e imprimir o maior dos três.

### Exercício 3: O Maior de Três (if-else aninhado)
```c
#include <stdio.h>

int main() {
    int n1, n2, n3;

    printf("Digite tres numeros inteiros separados por espaco: ");
    scanf("%d %d %d", &n1, &n2, &n3);

    if (n1 >= n2) {
        if (n1 >= n3) {
            printf("O maior numero e: %d\n", n1);
        } else {
            printf("O maior numero e: %d\n", n3);
        }
    } else {
        if (n2 >= n3) {
            printf("O maior numero e: %d\n", n2);
        } else {
            printf("O maior numero e: %d\n", n3);
        }
    }

    return 0;
}
```

### Exercício 4: Par ou Ímpar (Operador Ternário)
Escreva um programa que receba um número inteiro e, utilizando o operador ternário, mostre na tela se o número é par ou ímpar.


### Exercício 4: Par ou Ímpar (Operador Ternário)
```c
#include <stdio.h>

int main() {
    int numero;

    printf("Digite um numero inteiro: ");
    scanf("%d", &numero);

    printf("O numero %d e %s.\n", numero, (numero % 2 == 0) ? "Par" : "Impar");

    return 0;
}
```




### Exercício 5: Calculadora de Desconto (Operador Ternário)
Crie um programa para uma loja que calcula um desconto. Peça o valor total da compra. Se o valor for maior que R$100,00, aplique um desconto de 10%. Caso contrário, não há desconto. Use o operador ternário para calcular e exibir o valor final.

### Exercício 5: Calculadora de Desconto (Operador Ternário)
```c
#include <stdio.h>

int main() {
    float valorCompra, valorFinal;

    printf("Digite o valor total da compra: R$ ");
    scanf("%f", &valorCompra);

    valorFinal = (valorCompra > 100.0) ? (valorCompra * 0.90) : valorCompra;

    printf("O valor final com desconto e: R$ %.2f\n", valorFinal);

    return 0;
}
```

### Exercício 6: Dia da Semana (switch-case)
Faça um programa que leia um número inteiro de 1 a 7 e imprima o dia da semana correspondente, onde 1 é Domingo, 2 é Segunda-feira, e assim por diante. Se o usuário digitar um número fora desse intervalo, o programa deve informar "Dia inválido".

### Exercício 6: Dia da Semana (switch-case)
```c
#include <stdio.h>

int main() {
    int dia;

    printf("Digite um numero de 1 a 7: ");
    scanf("%d", &dia);

    switch (dia) {
        case 1:
            printf("Domingo\n");
            break;
        case 2:
            printf("Segunda-feira\n");
            break;
        case 3:
            printf("Terca-feira\n");
            break;
        case 4:
            printf("Quarta-feira\n");
            break;
        case 5:
            printf("Quinta-feira\n");
            break;
        case 6:
            printf("Sexta-feira\n");
            break;
        case 7:
            printf("Sabado\n");
            break;
        default:
            printf("Dia invalido.\n");
            break;
    }

    return 0;
}
```

### Exercício 7: Calculadora Simples (switch-case)
Desenvolva uma calculadora simples que leia dois números e um operador (+, -, \*, /). O programa deve usar uma estrutura `switch-case` para realizar a operação desejada e imprimir o resultado. Lembre-se de tratar a divisão por zero.

### Exercício 7: Calculadora Simples (switch-case)
```c
#include <stdio.h>

int main() {
    char operador;
    float num1, num2;

    printf("Digite o primeiro numero: ");
    scanf("%f", &num1);

    printf("Digite o operador (+, -, *, /): ");
    scanf(" %c", &operador); // Espaço antes de %c para consumir a nova linha

    printf("Digite o segundo numero: ");
    scanf("%f", &num2);

    switch (operador) {
        case '+':
            printf("%.2f + %.2f = %.2f\n", num1, num2, num1 + num2);
            break;
        case '-':
            printf("%.2f - %.2f = %.2f\n", num1, num2, num1 - num2);
            break;
        case '*':
            printf("%.2f * %.2f = %.2f\n", num1, num2, num1 * num2);
            break;
        case '/':
            if (num2 != 0) {
                printf("%.2f / %.2f = %.2f\n", num1, num2, num1 / num2);
            } else {
                printf("Erro! Divisao por zero nao e permitida.\n");
            }
            break;
        default:
            printf("Operador invalido.\n");
            break;
    }

    return 0;
}
```


### Exercício 8: Ano Bissexto (Combinação de if-else)
Escreva um programa que determine se um ano inserido pelo usuário é bissexto. Um ano é bissexto se for divisível por 4, mas não por 100, a menos que também seja divisível por 400.

### Exercício 8: Ano Bissexto (Combinação de if-else)
```c
#include <stdio.h>

int main() {
    int ano;

    printf("Digite um ano: ");
    scanf("%d", &ano);

    if ((ano % 4 == 0 && ano % 100 != 0) || (ano % 400 == 0)) {
        printf("O ano %d e bissexto.\n", ano);
    } else {
        printf("O ano %d nao e bissexto.\n", ano);
    }

    return 0;
}
```

### Exercício 9: Conceito de Notas (switch-case)
Crie um programa que receba uma nota de um aluno (A, B, C, D ou F) e, usando `switch-case`, imprima uma mensagem correspondente: A - Excelente, B - Ótimo, C - Bom, D - Regular, F - Reprovado.

### Exercício 9: Conceito de Notas (switch-case)
```c
#include <stdio.h>
#include <ctype.h> // Para a função toupper

int main() {
    char nota;

    printf("Digite o conceito do aluno (A, B, C, D ou F): ");
    scanf(" %c", &nota);

    switch (toupper(nota)) { // Converte a nota para maiúscula
        case 'A':
            printf("Excelente\n");
            break;
        case 'B':
            printf("Otimo\n");
            break;
        case 'C':
            printf("Bom\n");
            break;
        case 'D':
            printf("Regular\n");
            break;
        case 'F':
            printf("Reprovado\n");
            break;
        default:
            printf("Conceito invalido.\n");
            break;
    }

    return 0;
}
```

### Exercício 10: Faixa Etária (if-else-if)
Faça um programa que peça a idade de uma pessoa e use uma estrutura `if-else-if` para classificá-la em uma das seguintes categorias:
* 0-12 anos: Criança
* 13-17 anos: Adolescente
* 18-59 anos: Adulto
* 60 anos ou mais: Idoso

### Exercício 10: Faixa Etária (if-else-if)
```c
#include <stdio.h>

int main() {
    int idade;

    printf("Digite a idade: ");
    scanf("%d", &idade);

    if (idade >= 0 && idade <= 12) {
        printf("Categoria: Crianca\n");
    } else if (idade >= 13 && idade <= 17) {
        printf("Categoria: Adolescente\n");
    } else if (idade >= 18 && idade <= 59) {
        printf("Categoria: Adulto\n");
    } else if (idade >= 60) {
        printf("Categoria: Idoso\n");
    } else {
        printf("Idade invalida.\n");
    }

    return 0;
}
```