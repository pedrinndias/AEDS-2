# Nivelamento AEDS 1 - Linguagem C/C++

## Sumário

* [Declaração de variáveis e constantes](#exercícios-focados-em-declaração-de-variáveis-e-constantes-em-c)

* [Estrutura de repetição](#exercícios-focados-em-estrutura-de-repetição-while--do-while--for)

* [Estrutura de condição](#exercícios-focados-em-estruturas-condicionais-if-else--operador-ternario--switch-case)

* [Funções matemáticas](#exercícios-focados-em-funções-matemáticas-utilizando-a-biblioteca-mathh--em-c)

* [Modularização](#exercícios-focados-em-modularização-funções-e-procedimentos)

* [Recursividade](#exercícios-focados-em-recursividade)

* [Vetores](#exercícios-focados-em-recursividade)

* [Matrizes](#exercícios-focados-em-recursividade)

* [Strings](#exercícios-focados-em-recursividade)

* [Ponteiros](#exercícios-focados-em-recursividade)

* [Funções](#exercícios-focados-em-recursividade)

* [Alocação Dinâmica de Memória](#exercícios-focados-em-recursividade)

* [Arquivos](#exercícios-focados-em-recursividade)

* [Structs](#exercícios-focados-em-recursividade)

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

## Exercícios focados em Estrutura de repetição (While / Do While / For)

### Exercício 1: Contagem Crescente (For)
Escreva um programa que use um laço `for` para imprimir os números de 1 a 10, um em cada linha.

### Exercício 1: Contagem Crescente (For)
```c
#include <stdio.h>

int main() {
    int i;
    printf("Contando de 1 a 10:\n");
    for (i = 1; i <= 10; i++) {
        printf("%d\n", i);
    }
    return 0;
}
```

### Exercício 2: Tabuada (For)
Peça ao usuário para inserir um número inteiro. Em seguida, use um laço `for` para calcular e exibir a tabuada desse número, do 1 ao 10.

### Exercício 2: Tabuada (For)
```c
#include <stdio.h>

int main() {
    int numero, i;

    printf("Digite um numero para ver sua tabuada: ");
    scanf("%d", &numero);

    printf("\nTabuada do %d:\n", numero);
    for (i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", numero, i, numero * i);
    }

    return 0;
}
```

### Exercício 3: Soma de Pares (For)
Crie um programa que calcule e mostre a soma de todos os números pares de 1 a 100.

### Exercício 3: Soma de Pares (For)
```c
#include <stdio.h>

int main() {
    int i;
    int soma = 0;

    for (i = 1; i <= 100; i++) {
        if (i % 2 == 0) {
            soma += i; // ou soma = soma + i;
        }
    }

    printf("A soma de todos os numeros pares de 1 a 100 e: %d\n", soma);

    return 0;
}
```

### Exercício 4: Validação de Senha (While)
Desenvolva um programa que peça ao usuário para digitar uma senha. O programa deve continuar pedindo a senha enquanto o usuário não digitar a senha correta ("1234"). Quando a senha correta for digitada, exiba a mensagem "Acesso Permitido".

### Exercício 4: Validação de Senha (While)
```c
#include <stdio.h>
#include <string.h> // Necessário para a função strcmp

int main() {
    char senha_digitada[20];
    const char *senha_correta = "1234";

    printf("Digite a senha: ");
    scanf("%s", senha_digitada);

    // strcmp retorna 0 se as strings forem iguais
    while (strcmp(senha_digitada, senha_correta) != 0) {
        printf("Senha incorreta. Tente novamente: ");
        scanf("%s", senha_digitada);
    }

    printf("Acesso Permitido.\n");

    return 0;
}
```

### Exercício 5: Média de Notas (While)
Escreva um programa que leia as notas de um número indeterminado de alunos. O programa deve parar de ler notas quando o usuário digitar um valor negativo. Ao final, o programa deve calcular e exibir a média das notas inseridas.

### Exercício 5: Média de Notas (While)
```c
#include <stdio.h>

int main() {
    float nota = 0, soma = 0;
    int contador = 0;

    printf("Digite as notas dos alunos (digite um numero negativo para parar):\n");

    while (1) { // Laço infinito que será quebrado internamente
        printf("Nota %d: ", contador + 1);
        scanf("%f", &nota);

        if (nota < 0) {
            break; // Sai do laço se a nota for negativa
        }

        soma += nota;
        contador++;
    }

    if (contador > 0) {
        float media = soma / contador;
        printf("\nForam inseridas %d notas.\n", contador);
        printf("A media das notas e: %.2f\n", media);
    } else {
        printf("\nNenhuma nota foi inserida.\n");
    }

    return 0;
}
```

### Exercício 6: Fatorial (While)
Faça um programa que peça um número inteiro não negativo ao usuário e calcule o seu fatorial. Lembre-se que o fatorial de 0 é 1.
*Exemplo: 5! = 5 \* 4 \* 3 \* 2 \* 1 = 120*

### Exercício 6: Fatorial (While)
```c
#include <stdio.h>

int main() {
    int numero;
    long long fatorial = 1; // Usar long long para fatoriais maiores

    printf("Digite um numero inteiro nao negativo: ");
    scanf("%d", &numero);

    if (numero < 0) {
        printf("Erro! Fatorial nao e definido para numeros negativos.\n");
    } else {
        int temp = numero;
        while (temp > 1) {
            fatorial *= temp;
            temp--;
        }
        printf("O fatorial de %d e: %lld\n", numero, fatorial);
    }

    return 0;
}
```

### Exercício 7: Menu de Opções (Do-While)
Crie um programa que exiba um menu com as seguintes opções:
1.  Somar
2.  Subtrair
3.  Sair

O programa deve permitir que o usuário escolha uma opção. Se a opção for 1 ou 2, ele deve pedir dois números, realizar a operação e mostrar o resultado. O programa deve continuar executando até que o usuário escolha a opção 3 (Sair). Garanta que o menu seja exibido pelo menos uma vez.

### Exercício 7: Menu de Opções (Do-While)
```c
#include <stdio.h>

int main() {
    int opcao;
    float num1, num2;

    do {
        // Exibição do menu
        printf("\n----- MENU -----\n");
        printf("1. Somar\n");
        printf("2. Subtrair\n");
        printf("3. Sair\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                printf("Digite dois numeros para somar: ");
                scanf("%f %f", &num1, &num2);
                printf("Resultado: %.2f\n", num1 + num2);
                break;
            case 2:
                printf("Digite dois numeros para subtrair: ");
                scanf("%f %f", &num1, &num2);
                printf("Resultado: %.2f\n", num1 - num2);
                break;
            case 3:
                printf("Saindo do programa...\n");
                break;
            default:
                printf("Opcao invalida! Tente novamente.\n");
                break;
        }
    } while (opcao != 3);

    return 0;
}
```

### Exercício 8: Adivinhe o Número (Do-While)
Desenvolva um jogo simples onde o programa "pensa" em um número secreto (por exemplo, 42). O programa deve pedir ao usuário para adivinhar o número. Use um laço `do-while` para continuar pedindo um palpite até que o usuário acerte. A cada palpite errado, informe se o número secreto é maior ou menor.

### Exercício 8: Adivinhe o Número (Do-While)
```c
#include <stdio.h>

int main() {
    int numero_secreto = 42;
    int palpite;

    printf("--- Jogo de Adivinhacao ---\n");
    printf("Tente adivinhar o numero secreto!\n");

    do {
        printf("Digite seu palpite: ");
        scanf("%d", &palpite);

        if (palpite < numero_secreto) {
            printf("Muito baixo! Tente um numero maior.\n");
        } else if (palpite > numero_secreto) {
            printf("Muito alto! Tente um numero menor.\n");
        }

    } while (palpite != numero_secreto);

    printf("Parabens! Voce acertou o numero secreto (%d)!\n", numero_secreto);

    return 0;
}
```

### Exercício 9: Sequência de Fibonacci (For)
Escreva um programa que peça ao usuário um número N e gere os N primeiros termos da sequência de Fibonacci. A sequência começa com 0 e 1, e cada termo subsequente é a soma dos dois anteriores (0, 1, 1, 2, 3, 5, 8, ...).

### Exercício 9: Sequência de Fibonacci (For)
```c
#include <stdio.h>

int main() {
    int n, i;
    int t1 = 0, t2 = 1, proximo_termo;

    printf("Quantos termos da sequencia de Fibonacci voce quer ver? ");
    scanf("%d", &n);

    printf("Os primeiros %d termos de Fibonacci sao:\n", n);

    for (i = 1; i <= n; i++) {
        printf("%d, ", t1);
        proximo_termo = t1 + t2;
        t1 = t2;
        t2 = proximo_termo;
    }
    printf("...\n");

    return 0;
}
```

### Exercício 10: Contagem de Dígitos (While)
Crie um programa que peça ao usuário para inserir um número inteiro e, em seguida, conte e exiba quantos dígitos esse número possui. Por exemplo, o número 2548 tem 4 dígitos. (Dica: use divisões inteiras por 10).

### Exercício 10: Contagem de Dígitos (While)
```c
#include <stdio.h>

int main() {
    int numero;
    int contador = 0;

    printf("Digite um numero inteiro: ");
    scanf("%d", &numero);

    // Caso especial para o número 0
    if (numero == 0) {
        contador = 1;
    } else {
        int temp = numero;
        // Torna o número positivo se for negativo para a contagem funcionar
        if (temp < 0) {
            temp = -temp;
        }
        
        while (temp != 0) {
            temp = temp / 10; // Divisão inteira remove o último dígito
            contador++;
        }
    }

    printf("O numero %d possui %d digitos.\n", numero, contador);

    return 0;
}
```

---

## Exercícios focados em Modularização (funções e procedimentos)
### Exercício 1: Função de Saudação
Crie um procedimento (uma função `void`) chamado `saudacao` que não recebe nenhum parâmetro e simplesmente imprime "Bem-vindo ao programa!" na tela. Chame este procedimento a partir da sua função `main`.

### Exercício 1: Função de Saudação
```c
#include <stdio.h>

// Procedimento (função void) para a saudação
void saudacao() {
    printf("Bem-vindo ao programa!\n");
}

int main() {
    // Chama o procedimento de saudação
    saudacao();
    return 0;
}
```


### Exercício 2: Função para Somar
Escreva uma função chamada `somar` que recebe dois números inteiros como parâmetros e retorna a soma deles. Na função `main`, peça ao usuário para digitar dois números, chame a função `somar` e imprima o resultado.

### Exercício 2: Função para Somar
```c
#include <stdio.h>

// Função que recebe dois inteiros e retorna a soma
int somar(int a, int b) {
    return a + b;
}

int main() {
    int num1, num2, resultado;

    printf("Digite o primeiro numero: ");
    scanf("%d", &num1);
    printf("Digite o segundo numero: ");
    scanf("%d", &num2);

    // Chama a função 'somar' e armazena o retorno
    resultado = somar(num1, num2);

    printf("A soma de %d e %d e: %d\n", num1, num2, resultado);

    return 0;
}
```

### Exercício 3: Procedimento para Tabuada
Crie um procedimento chamado `imprimirTabuada` que recebe um número inteiro como parâmetro e imprime a tabuada desse número (de 1 a 10). A função não deve retornar nenhum valor.

### Exercício 3: Procedimento para Tabuada
```c
#include <stdio.h>

// Procedimento que recebe um número e imprime sua tabuada
void imprimirTabuada(int numero) {
    printf("\nTabuada do %d:\n", numero);
    for (int i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", numero, i, numero * i);
    }
}

int main() {
    int n;
    printf("Digite um numero para ver a sua tabuada: ");
    scanf("%d", &n);
    imprimirTabuada(n); // Chama o procedimento
    return 0;
}
```

### Exercício 4: Função para Verificar Paridade
Desenvolva uma função chamada `ehPar` que recebe um número inteiro e retorna `1` se o número for par e `0` se for ímpar. Na `main`, use esta função dentro de um `if` para informar ao usuário se o número digitado é par ou ímpar.

### Exercício 4: Função para Verificar Paridade
```c
#include <stdio.h>

// Função que retorna 1 se for par, 0 se for ímpar
int ehPar(int numero) {
    if (numero % 2 == 0) {
        return 1; // É par
    } else {
        return 0; // É ímpar
    }
    // Alternativa: return (numero % 2 == 0);
}

int main() {
    int num;
    printf("Digite um numero inteiro: ");
    scanf("%d", &num);

    if (ehPar(num)) { // A função retorna um valor que o if interpreta como verdadeiro (1) ou falso (0)
        printf("O numero %d e par.\n", num);
    } else {
        printf("O numero %d e impar.\n", num);
    }

    return 0;
}
```

### Exercício 5: Função para Calcular Fatorial
Escreva uma função `fatorial` que recebe um número inteiro não negativo e retorna o seu fatorial. Lembre-se que o fatorial de 0 é 1.

### Exercício 5: Função para Calcular Fatorial
```c
#include <stdio.h>

// Função que calcula e retorna o fatorial de um número
long long fatorial(int n) {
    if (n < 0) {
        return -1; // Retorna -1 para indicar um erro (fatorial de negativo não existe)
    }
    if (n == 0) {
        return 1; // Fatorial de 0 é 1
    }

    long long resultado = 1;
    for (int i = 1; i <= n; i++) {
        resultado *= i;
    }
    return resultado;
}

int main() {
    int numero;
    printf("Digite um numero para calcular o fatorial: ");
    scanf("%d", &numero);

    long long resultado = fatorial(numero);

    if (resultado == -1) {
        printf("Nao e possivel calcular o fatorial de um numero negativo.\n");
    } else {
        printf("O fatorial de %d e: %lld\n", numero, resultado);
    }

    return 0;
}
```

### Exercício 6: Função para Encontrar o Maior Valor
Crie uma função chamada `maiorValor` que recebe três números do tipo `float` como parâmetros e retorna o maior entre eles.

### Exercício 6: Função para Encontrar o Maior Valor
```c
#include <stdio.h>

// Função que retorna o maior entre três números float
float maiorValor(float a, float b, float c) {
    if (a >= b && a >= c) {
        return a;
    } else if (b >= a && b >= c) {
        return b;
    } else {
        return c;
    }
}

int main() {
    float n1, n2, n3, maior;
    printf("Digite tres numeros separados por espaco: ");
    scanf("%f %f %f", &n1, &n2, &n3);

    maior = maiorValor(n1, n2, n3);

    printf("O maior valor entre %.2f, %.2f e %.2f e: %.2f\n", n1, n2, n3, maior);

    return 0;
}
```
### Exercício 7: Procedimento com Parâmetros por Referência
Faça um procedimento chamado `trocarValores` que recebe dois ponteiros para inteiros como parâmetros e troca os valores das variáveis para as quais eles apontam. Na `main`, declare duas variáveis, imprima seus valores, chame a função e imprima os valores novamente para mostrar que foram trocados.

### Exercício 7: Procedimento com Parâmetros por Referência
```c
#include <stdio.h>

// Procedimento que troca os valores de duas variáveis usando ponteiros
void trocarValores(int *ptrA, int *ptrB) {
    int temp = *ptrA; // Armazena o valor apontado por ptrA
    *ptrA = *ptrB;    // O valor apontado por ptrA recebe o valor apontado por ptrB
    *ptrB = temp;     // O valor apontado por ptrB recebe o valor de temp
}

int main() {
    int x = 10;
    int y = 20;

    printf("Valores antes da troca: x = %d, y = %d\n", x, y);

    trocarValores(&x, &y); // Passa os endereços de memória de x e y

    printf("Valores depois da troca: x = %d, y = %d\n", x, y);

    return 0;
}
```

### Exercício 8: Função para Calcular Média
Escreva uma função chamada `calcularMedia` que recebe um array (vetor) de `float` e o seu tamanho como parâmetros. A função deve retornar a média dos valores contidos no array.

### Exercício 8: Função para Calcular Média
```c
#include <stdio.h>

#define TAMANHO 5 // Define uma constante para o tamanho do vetor

// Função que calcula a média de um vetor de floats
float calcularMedia(float vetor[], int tamanho) {
    if (tamanho <= 0) {
        return 0; // Evita divisão por zero
    }
    float soma = 0;
    for (int i = 0; i < tamanho; i++) {
        soma += vetor[i];
    }
    return soma / tamanho;
}

int main() {
    float notas[TAMANHO] = {7.5, 8.0, 6.5, 9.0, 7.0};
    
    printf("Notas: ");
    for(int i = 0; i < TAMANHO; i++){
        printf("%.1f ", notas[i]);
    }
    
    float media = calcularMedia(notas, TAMANHO);
    printf("\nA media das notas e: %.2f\n", media);

    return 0;
}
```
### Exercício 9: Calculadora com Funções
Refatore o exercício da "Calculadora Simples" (dos exercícios de `switch-case`) para usar funções. Crie funções separadas para `somar`, `subtrair`, `multiplicar` e `dividir`. A função `main` será responsável por obter os dados do usuário e chamar a função apropriada com base na operação escolhida.

### Exercício 9: Calculadora com Funções
```c
#include <stdio.h>

// Funções para as operações
float somar(float a, float b) { return a + b; }
float subtrair(float a, float b) { return a - b; }
float multiplicar(float a, float b) { return a * b; }
float dividir(float a, float b) {
    if (b != 0) {
        return a / b;
    } else {
        printf("Erro: Divisao por zero!\n");
        return 0; // Retorno de erro
    }
}

int main() {
    float num1, num2, resultado;
    char op;

    printf("Digite a operacao (ex: 5 * 3): ");
    scanf("%f %c %f", &num1, &op, &num2);

    switch (op) {
        case '+':
            resultado = somar(num1, num2);
            printf("Resultado: %.2f\n", resultado);
            break;
        case '-':
            resultado = subtrair(num1, num2);
            printf("Resultado: %.2f\n", resultado);
            break;
        case '*':
            resultado = multiplicar(num1, num2);
            printf("Resultado: %.2f\n", resultado);
            break;
        case '/':
            resultado = dividir(num1, num2);
            if(num2 != 0) { // Só imprime se a divisão foi válida
               printf("Resultado: %.2f\n", resultado);
            }
            break;
        default:
            printf("Operador invalido!\n");
    }

    return 0;
}
```

### Exercício 10: Função de Validação
Crie uma função chamada `lerNotaValida` que não recebe parâmetros, mas pede ao usuário para digitar uma nota entre 0 e 10. A função deve continuar pedindo a nota enquanto o valor digitado for inválido. Quando uma nota válida for inserida, a função deve retorná-la. Na `main`, chame esta função para ler uma nota e depois apenas a imprima.

### Exercício 10: Função de Validação
```c
#include <stdio.h>

// Função que lê e valida uma nota entre 0 e 10
float lerNotaValida() {
    float nota;
    do {
        printf("Digite uma nota (entre 0 e 10): ");
        scanf("%f", &nota);
        if (nota < 0 || nota > 10) {
            printf("Valor invalido! Tente novamente.\n");
        }
    } while (nota < 0 || nota > 10);
    return nota;
}

int main() {
    printf("Lendo a primeira nota.\n");
    float nota1 = lerNotaValida();

    printf("\nLendo a segunda nota.\n");
    float nota2 = lerNotaValida();

    printf("\nAs notas validas digitadas foram: %.2f e %.2f\n", nota1, nota2);

    return 0;
}
```

---

## Exercícios focados em Recursividade

### Exercício 1: Fatorial Recursivo
Crie uma função recursiva chamada `fatorial` que recebe um número inteiro não negativo `n` e retorna o seu fatorial. O caso base é quando `n` é 0, cujo fatorial é 1.

```c
#include <stdio.h>

long long fatorial(int n) {
    // Caso base: fatorial de 0 é 1
    if (n == 0) {
        return 1;
    }
    // Passo recursivo: n * (n-1)!
    else {
        return n * fatorial(n - 1);
    }
}

int main() {
    int numero = 5;
    printf("O fatorial de %d e: %lld\n", numero, fatorial(numero));
    
    numero = 10;
    printf("O fatorial de %d e: %lld\n", numero, fatorial(numero));
    return 0;
}
```

### Exercício 2: Sequência de Fibonacci Recursiva
Escreva uma função recursiva `fibonacci` que recebe um inteiro `n` e retorna o n-ésimo termo da sequência de Fibonacci. Os casos base são `fibonacci(0) = 0` e `fibonacci(1) = 1`. Para `n > 1`, `fibonacci(n) = fibonacci(n-1) + fibonacci(n-2)`.

### Exercício 2: Sequência de Fibonacci Recursiva
```c
#include <stdio.h>

int fibonacci(int n) {
    // Casos base
    if (n == 0) return 0;
    if (n == 1) return 1;

    // Passo recursivo
    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main() {
    int termo = 10;
    printf("O %d-esimo termo da sequencia de Fibonacci e: %d\n", termo, fibonacci(termo));
    
    printf("Os 10 primeiros termos: ");
    for (int i = 0; i < 10; i++) {
        printf("%d ", fibonacci(i));
    }
    printf("\n");
    return 0;
}
```

### Exercício 3: Soma de 1 a N
Faça uma função recursiva `somaAteN` que recebe um inteiro positivo `n` e retorna a soma de todos os números de 1 até `n`. O caso base é quando `n` é 1, retornando 1.

### Exercício 3: Soma de 1 a N
```c
#include <stdio.h>

int somaAteN(int n) {
    // Caso base
    if (n == 1) {
        return 1;
    }
    // Passo recursivo
    else {
        return n + somaAteN(n - 1);
    }
}

int main() {
    int numero = 10;
    printf("A soma dos numeros de 1 a %d e: %d\n", numero, somaAteN(numero));
    
    numero = 100;
    printf("A soma dos numeros de 1 a %d e: %d\n", numero, somaAteN(numero));
    return 0;
}
```

### Exercício 4: Potenciação Recursiva
Desenvolva uma função recursiva `potencia` que recebe dois inteiros, `base` e `expoente`, e retorna o resultado de `base` elevado ao `expoente`. Considere que o expoente será sempre não negativo. O caso base é quando o `expoente` é 0, retornando 1.

### Exercício 4: Potenciação Recursiva
```c
#include <stdio.h>

long long potencia(int base, int expoente) {
    // Caso base
    if (expoente == 0) {
        return 1;
    }
    // Passo recursivo
    else {
        return base * potencia(base, expoente - 1);
    }
}

int main() {
    int base = 2;
    int expoente = 10;
    printf("%d elevado a %d e: %lld\n", base, expoente, potencia(base, expoente));
    
    base = 5;
    expoente = 3;
    printf("%d elevado a %d e: %lld\n", base, expoente, potencia(base, expoente));
    return 0;
}
```

### Exercício 5: Inversão de String
Crie um procedimento (função `void`) recursivo chamado `inverterString` que recebe uma string (ponteiro para `char`) como parâmetro e a imprime na ordem inversa. A ideia é imprimir o caractere atual *depois* da chamada recursiva para o restante da string.

### Exercício 5: Inversão de String
```c
#include <stdio.h>

void inverterString(char *str) {
    // Caso base: se o caractere atual for o terminador nulo
    if (*str == '\0') {
        return;
    }
    
    // Passo recursivo: chama a função para o resto da string
    inverterString(str + 1);
    
    // Imprime o caractere atual (na volta da recursão)
    printf("%c", *str);
}

int main() {
    char minhaString[] = "recursividade";
    printf("String original: %s\n", minhaString);
    printf("String invertida: ");
    inverterString(minhaString);
    printf("\n");
    return 0;
}
```

### Exercício 6: Soma dos Elementos de um Vetor
Escreva uma função recursiva `somaVetor` que recebe um vetor (array) de inteiros e seu tamanho, e retorna a soma de todos os seus elementos. A cada chamada, a função pode somar o último elemento com o resultado da chamada recursiva para o restante do vetor (tamanho - 1).

### Exercício 6: Soma dos Elementos de um Vetor
```c
#include <stdio.h>

int somaVetor(int vetor[], int tamanho) {
    // Caso base: se o vetor estiver vazio, a soma é 0
    if (tamanho <= 0) {
        return 0;
    }
    // Passo recursivo: soma o último elemento com a soma do resto do vetor
    return vetor[tamanho - 1] + somaVetor(vetor, tamanho - 1);
}

int main() {
    int meuVetor[] = {10, 20, 30, 40, 50};
    int tamanho = sizeof(meuVetor) / sizeof(meuVetor[0]);
    
    printf("A soma dos elementos do vetor e: %d\n", somaVetor(meuVetor, tamanho));
    return 0;
}
```

### Exercício 7: Máximo Divisor Comum (MDC)
Implemente o Algoritmo de Euclides de forma recursiva para encontrar o Máximo Divisor Comum (MDC) entre dois números inteiros `a` e `b`. A regra é: `mdc(a, b)` é `a` se `b` for 0; caso contrário, `mdc(a, b)` é `mdc(b, a % b)`.

### Exercício 7: Máximo Divisor Comum (MDC)
```c
#include <stdio.h>

int mdc(int a, int b) {
    // Caso base: se b for 0, o mdc é a
    if (b == 0) {
        return a;
    }
    // Passo recursivo
    else {
        return mdc(b, a % b);
    }
}

int main() {
    int num1 = 48, num2 = 18;
    printf("O MDC de %d e %d e: %d\n", num1, num2, mdc(num1, num2));
    
    num1 = 101, num2 = 103; // Primos entre si
    printf("O MDC de %d e %d e: %d\n", num1, num2, mdc(num1, num2));
    return 0;
}
```

### Exercício 8: Busca Binária Recursiva
Escreva uma função de busca binária recursiva, `buscaBinariaRec`, que procura por um valor em um vetor **ordenado**. A função deve receber o vetor, os índices de início e fim da busca, e o valor a ser procurado. Ela deve retornar o índice do valor se encontrado, ou -1 caso contrário.

### Exercício 8: Busca Binária Recursiva
```c
#include <stdio.h>

// Função de busca binária recursiva
int buscaBinariaRec(int vetor[], int inicio, int fim, int valor) {
    // Caso base: se o início ultrapassar o fim, o elemento não está no vetor
    if (inicio > fim) {
        return -1;
    }
    
    int meio = inicio + (fim - inicio) / 2; // Evita overflow para índices grandes

    // Caso base: o elemento foi encontrado no meio
    if (vetor[meio] == valor) {
        return meio;
    }
    
    // Passo recursivo: busca na metade apropriada
    if (vetor[meio] > valor) {
        return buscaBinariaRec(vetor, inicio, meio - 1, valor); // Busca na metade esquerda
    } else {
        return buscaBinariaRec(vetor, meio + 1, fim, valor);  // Busca na metade direita
    }
}

int main() {
    int vetorOrdenado[] = {2, 5, 8, 12, 16, 23, 38, 56, 72, 91};
    int tamanho = sizeof(vetorOrdenado) / sizeof(vetorOrdenado[0]);
    int valorProcurado = 23;
    
    int indice = buscaBinariaRec(vetorOrdenado, 0, tamanho - 1, valorProcurado);
    
    if (indice != -1) {
        printf("Valor %d encontrado no indice %d.\n", valorProcurado, indice);
    } else {
        printf("Valor %d nao encontrado no vetor.\n", valorProcurado);
    }
    return 0;
}
```

### Exercício 9: Contagem de Dígitos de um Número
Crie uma função recursiva `contarDigitos` que recebe um número inteiro e retorna a quantidade de dígitos que ele possui. Por exemplo, `contarDigitos(2548)` deve retornar 4. O caso base ocorre quando o número é menor que 10.

### Exercício 9: Contagem de Dígitos de um Número
```c
#include <stdio.h>

int contarDigitos(int n) {
    // Torna o número positivo se for negativo, sem alterar o 0
    if (n < 0) n = -n;

    // Caso base: se o número tem apenas um dígito
    if (n < 10) {
        return 1;
    }
    
    // Passo recursivo: 1 + a contagem de dígitos do número dividido por 10
    return 1 + contarDigitos(n / 10);
}

int main() {
    int numero = 2548;
    printf("O numero %d tem %d digitos.\n", numero, contarDigitos(numero));
    
    numero = -98765;
    printf("O numero %d tem %d digitos.\n", numero, contarDigitos(numero));
    
    numero = 0;
    printf("O numero %d tem %d digitos.\n", numero, contarDigitos(numero));
    return 0;
}
```

### Exercício 10: Problema das Torres de Hanói
Implemente uma solução recursiva para o clássico problema das Torres de Hanói. Crie um procedimento `torresDeHanoi` que recebe o número de discos e os pinos de origem, destino e auxiliar. O procedimento deve imprimir os passos necessários para mover os discos do pino de origem para o de destino.

### Exercício 10: Problema das Torres de Hanói
```c
#include <stdio.h>

void torresDeHanoi(int n, char origem, char destino, char auxiliar) {
    // Caso base: se houver apenas um disco, mova-o diretamente
    if (n == 1) {
        printf("Mover disco 1 de %c para %c\n", origem, destino);
        return;
    }
    
    // Passo recursivo 1: mover n-1 discos da origem para o pino auxiliar
    torresDeHanoi(n - 1, origem, auxiliar, destino);
    
    // Mover o disco n (o maior) da origem para o destino
    printf("Mover disco %d de %c para %c\n", n, origem, destino);
    
    // Passo recursivo 2: mover n-1 discos do pino auxiliar para o destino
    torresDeHanoi(n - 1, auxiliar, destino, origem);
}

int main() {
    int numeroDeDiscos = 3;
    printf("Solucao para Torres de Hanoi com %d discos:\n", numeroDeDiscos);
    // Pinos são A (Origem), C (Destino), B (Auxiliar)
    torresDeHanoi(numeroDeDiscos, 'A', 'C', 'B');
    return 0;
}
```

## Exercícios focados em Vetores