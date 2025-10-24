
Esta sessão de estudos apresenta os Fundamentos de Análise de Complexidade.

No final desta sessão, você deverá:

- Dominar os aspectos da análise de algoritmos;
- Aplicar as notações O, Ω e 𝚯.

**ASPECTOS DA ANÁLISE DE ALGORITMOS**

Os aspectos da análise de algoritmos envolvem diferentes considerações, desde as restrições impostas pelo computador em que os algoritmos serão implementados, até as métricas utilizadas para medir sua complexidade. Vamos explorar esses aspectos com mais detalhes.

O primeiro aspecto são as restrições impostas pelos computadores onde os algoritmos serão implementados. É necessário levar em conta a capacidade computacional e de armazenamento disponíveis, pois algoritmos que levam muito tempo para terminar ou consomem muitos recursos podem ser inviáveis. Um exemplo de algoritmo com restrições significativas é o Problema do Caixeiro Viajante (PCV), que é conhecido como um problema NP-Completo. Ele requer encontrar a rota mais curta que passe por um conjunto de cidades, visitando cada cidade uma vez e retornando à cidade de origem. O tempo de execução da solução ótima do PCV mostra uma tendência de crescimento exponencial, o que torna impraticável para grandes conjuntos de cidades. Mesmo se tivéssemos um computador 100 vezes mais rápido, isso também seria "indiferente" na tendência de crescimento exponencial do tempo de execução.

O segundo aspecto é o fato de existem várias métricas que podem ser usadas para analisar a complexidade de um algoritmo. O tempo de execução é uma métrica comum, que mede quanto tempo um algoritmo leva para executar em relação ao tamanho da entrada. O espaço de memória ocupado é outra métrica importante, que mede a quantidade de memória utilizada pelo algoritmo durante sua execução. Uma terceira métrica é a energia que mede a quantidade de energia consumida pelo algoritmo. Além dessas métricas, também podem ser considerados outros fatores, dependendo do contexto do problema e das necessidades específicas da análise. 

O terceiro aspecto são os tipos de análise de complexidade na qual podemos analisar um algoritmo em particular ou uma classe de algoritmos. Na análise de um algoritmo particular, o foco está no custo de um algoritmo específico para resolver um problema específico. Buscamos determinar o desempenho do algoritmo em relação ao tamanho da entrada e identificar possíveis gargalos ou ineficiências. Por outro lado, análise de uma classe de algoritmos busca identificar o menor custo possível para resolver um problema específico. Isso envolve comparar diferentes algoritmos que abordam o mesmo problema e identificar qual é o nível mínimo de dificuldade para ser resolver o problema em questão.

O quarto aspecto a ser considerado é a identificação da forma de mensurar o custo de um algoritmo. Uma abordagem esperada seria utilizar um modelo baseado em cronômetro, no qual o algoritmo é executado e o tempo necessário para a sua conclusão é medido. No entanto, esse modelo apresenta algumas limitações devido às restrições impostas pelo ambiente no qual o algoritmo é executado. Tais restrições incluem fatores como o hardware do computador, a arquitetura do sistema, o sistema operacional, a linguagem de programação e o compilador utilizado. Esses fatores podem influenciar significativamente o desempenho do algoritmo e, portanto, devem ser considerados durante a análise. Por exemplo, um determinado programa pode se beneficiar de características específicas do hardware, da arquitetura do sistema ou do sistema operacional, resultando em um desempenho superior. É sabido que linguagens de programação como o C são geralmente mais rápidas do que outras, como o Java. Além disso, o compilador também desempenha um papel crucial, uma vez que pode empregar técnicas de otimização. Por exemplo, ao compilar um código como o exemplo A, o compilador pode realizar modificações de forma a torná-lo semelhante ao exemplo B, aproveitando as otimizações disponíveis. No entanto, é importante ressaltar que, embora o código A possa ser considerado mais adequado e atender a parâmetros de Qualidade de Software, cada atribuição no array requer uma comparação (i < 20) e um incremento (i++), o que implica em um custo adicional.

**Código A**
``` java
...
for (int i = 0; i < 20; i++){
    array[i] = i;
}
```

**Código B**
``` java
...
array[0] = 0;  
array[1] = 1;  
...  
array[19] = 19;
}
```

A abordagem tradicional para medir o custo de um algoritmo é o uso de um modelo matemático. Nesse modelo, determinamos e contamos as operações relevantes executadas pelo algoritmo. O custo total do algoritmo é calculado somando-se o custo de suas operações. Normalmente, são desconsideradas as sobrecargas de gerenciamento de memória ou E/S, a menos que especificado de outra forma. Além disso, a análise geralmente é feita considerando o pior caso possível, para ter uma visão mais conservadora do desempenho do algoritmo. É necessário definir uma função de complexidade para representar o comportamento assintótico do algoritmo em relação ao tamanho da entrada.

**NOTAÇÕES $\Theta$, $O$ e $\Omega$**

As notações $\Theta$ e $O$, $\Omega$ nos permitem descrever o comportamento de funções e algoritmos à medida que o tamanho da entrada aumenta. Antes de mergulharmos nas notações em si, vamos estabelecer algumas regras gerais que se aplicam a todas elas. Essas regras são fundamentais para entendermos como as notações funcionam e como comparar e classificar algoritmos:

1.  As notações $O$, $\Omega$ e $\Theta$ indicam a tendência de crescimento de uma função de complexidade;
2.  Essas notações ignoram constantes e termos com menor crescimento das funções de complexidade, focando apenas nas partes mais relevantes;
3.  As notações permitem comparar e classificar algoritmos com base em seu desempenho em relação ao tamanho da entrada.

A seguir, vamos exemplificar essas:

* Se temos uma função $f(n) = 3n + 2n^2$, podemos dizer que essa função é $\Theta(n^2)$, $O(n^2)$ e $\Omega(n^2)$. Isso significa que o crescimento da função é dominado pelo termo $n^2$, ignorando os termos de menor crescimento.
* Se temos uma função $f(n) = 5n + 4n^3$, podemos dizer que essa função é $\Theta(n^3)$, $O(n^3)$ e $\Omega(n^3)$. Mais uma vez, o termo de maior crescimento, $n^3$, é o que importa para a classificação.
* Se temos uma função $f(n) = lg(n) + n$, podemos dizer que essa função é $\Theta(n)$, $O(n)$ e $\Omega(n)$. Nesse caso, o termo linear $n$ é o dominante, enquanto o termo logarítmico $lg(n)$ é negligenciado.

Agora que abordamos as regras gerais, vamos explorar as diferenças entre as notações 𝚯, O e Ω:

1. Notação O: Essa notação estabelece um limite superior para o crescimento de uma função. Se dizemos que um algoritmo é O(f(n)), significa que o tempo ou espaço necessário para executar o algoritmo cresce no máximo tão rápido quanto f(n). A complexidade do algoritmo está limitada superiormente por f(n).
2. Notação Ω (Ômega): Essa notação estabelece um limite inferior para o crescimento de uma função. Se dizemos que um algoritmo é Ω(f(n)), significa que o tempo ou espaço necessário para executar o algoritmo cresce pelo menos tão rápido quanto f(n). A complexidade do algoritmo está limitada inferiormente por f(n).
3. Notação 𝚯 (Theta): Essa notação estabelece um limite justo para o crescimento de uma função. Se dizemos que um algoritmo é 𝚯(f(n)), significa que o tempo ou espaço necessário para executar o algoritmo cresce tão rápido quanto f(n). A complexidade do algoritmo está limitada tanto superiormente quanto inferiormente por f(n).

Agora, vamos discutir algumas propriedades e operações relacionadas a essas notações, que nos ajudam a analisar e comparar algoritmos:

- f(n) = 𝚯(f(n)): Toda função f(n) pertence à sua própria classe de complexidade.
- c x 𝚯(f(n)) = 𝚯(f(n)): Multiplicar uma função por uma constante não altera sua classe de complexidade.
- 𝚯(f(n)) + 𝚯(f(n)) = 𝚯(f(n)): A soma de duas funções pertencentes à mesma classe 𝚯 resulta em uma função da mesma classe.
- 𝚯(𝚯(f(n))) = 𝚯(f(n)): Compor duas funções que pertencem à mesma classe 𝚯 resulta em uma função da mesma classe.
- 𝚯(f(n)) + 𝚯(g(n)) = 𝚯(máximo(f(n), g(n))): A soma de duas funções pertencentes a diferentes classes 𝚯 resulta em uma função da classe da função com maior crescimento.
- 𝚯(f(n)) x 𝚯(g(n)) = 𝚯(f(n) x g(n)): A multiplicação de duas funções pertencentes a diferentes classes 𝚯 resulta em uma função da classe do produto das funções.
- f(n) x 𝚯(g(n)) = 𝚯(f(n) x g(n)): Multiplicar uma função f(n) por uma função pertencente à classe 𝚯(g(n)) resulta em uma função da classe do produto das funções.

Agora que discutimos as propriedades e operações, vamos às definições formais de cada notação:

1. Definição da Notação O: Dizemos que g(n) é O(f(n)) se existirem constantes positivas c e m tais que, para n ≥ m, |g(n)| ≤ c x |f(n)|. Essa definição indica que a função g(n) está limitada superiormente pelo fator c x |f(n)|.
2. Definição da Notação Ω: Dizemos que g(n) é Ω(f(n)) se existirem constantes positivas c e m tais que, para n ≥ m, |g(n)| ≥ c x |f(n)|. Isso significa que a função g(n) está limitada inferiormente pelo fator c x |f(n)|.
3. Definição da Notação 𝚯: Dizemos que g(n) é 𝚯(f(n)) se existirem constantes positivas c1, c2 e m tais que, para n ≥ m, c1 x |f(n)| ≤ |g(n)| ≤ c2 x |f(n)|. Isso indica que a função g(n) está limitada tanto superiormente quanto inferiormente pelos fatores c1 x |f(n)| e c2 x |f(n)|.

Agora, vamos abordar as classes de algoritmos mais comuns e suas complexidades associadas:

* Constante: $\Theta(1)$
* Logarítmico: $\Theta(lg\ n)$
* Linear: $\Theta(n)$
* Linear-logarítmico: $\Theta(n \times lg\ n)$
* Quadrático: $\Theta(n^2)$
* Cúbico: $\Theta(n^3)$
* Exponencial: $\Theta(c^n)$ (onde $c$ é uma constante maior que 1)
* Fatorial: $\Theta(n!)$

Os algoritmos polinomiais são particularmente interessantes, pois são considerados tratáveis. Um algoritmo é polinomial se sua complexidade pertence à classe $\Theta(n^p)$ para algum inteiro $p$. Problemas com algoritmos polinomiais conhecidos são considerados solucionáveis de forma eficiente. No entanto, existe uma questão em aberto na ciência da computação chamada $P$ versus $NP$. $P$ é a classe de problemas para os quais existe um algoritmo polinomial eficiente que os resolve. *Nondeterministic Polynomial* ($NP$) é a classe de problemas cujas soluções podem ser verificadas em tempo polinomial. A questão fundamental é se $P$ é igual a $NP$, ou seja, se todos os problemas cujas soluções podem ser verificadas rapidamente também podem ser resolvidos rapidamente. Essa questão tem implicações significativas e continua sendo um dos maiores desafios da área. A discussão sobre essas classes de problema será abordada na última sessão de estudos deste microfundamento.

**CONSIDERAÇÕES FINAIS DESTA SESSÃO DE ESTUDOS**

1.  Reforçamos os conceitos básicos de matemática e noções de complexidade.
2.  Apresentamos quatro aspectos da análise de complexidade.
3.  O primeiro aspecto são as restrições impostas pelos computadores onde os algoritmos serão implementados. É necessário levar em conta a capacidade computacional e de armazenamento disponíveis, pois algoritmos que levam muito tempo para terminar ou consomem muitos recursos podem ser inviáveis.
4.  O segundo aspecto é o fato de existirem várias métricas (e.g., tempo, espaço e energia) que podem ser usadas para analisar a complexidade de um algoritmo.
5.  O terceiro aspecto são os tipos de análise de complexidade na qual podemos analisar um algoritmo em particular ou uma classe de algoritmos.
6.  O quarto aspecto a ser considerado é a identificação da forma de mensurar o custo de um algoritmo que tradicionalmente consiste em um modelo matemático no qual contamos as operações relevantes executadas pelo algoritmo e identificamos sua função de complexidade em relação ao tamanho da entrada.
7.  As notações $\Theta$ e $O$, $\Omega$ indicam a tendência de crescimento de uma função de complexidade, ignorando constantes e termos com menor crescimento das funções de complexidade.
8.  As notações $O$, $\Omega$ e $\Theta$ estabelecem, respectively os limites superior, inferior e justo para o crescimento de uma função de complexidade.
9.  A definição da Notação $O$ diz que $g(n)$ é $O(f(n))$ se existirem constantes positivas $c$ e $m$ tais que, para $n \ge m$, $|g(n)| \le c \times |f(n)|$. Essa definição indica que a função $g(n)$ está limitada superiormente pelo fator $c \times |f(n)|$.
10. A definição da Notação $\Omega$ diz que $g(n)$ é $\Omega(f(n))$ se existirem constantes positivas $c$ e $m$ tais que, para $n \ge m$, $|g(n)| \ge c \times |f(n)|$. Isso significa que a função $g(n)$ está limitada inferiormente pelo fator $c \times |f(n)|$.
11. A definição da Notação $\Theta$ diz que $g(n)$ é $\Theta(f(n))$ se existirem constantes positivas $c1$, $c2$ e $m$ tais que, para $n \ge m$, $c1 \times |f(n)| \le |g(n)| \le c2 \times |f(n)|$. Isso indica que a função $g(n)$ está limitada tanto superiormente quanto inferiormente pelos fatores $c1 \times |f(n)|$ e $c2 \times |f(n)|$.
12. Apresentamos as classes classes mais comuns de algoritmos: constante, logarítmica, linear, linear-logarítmica, quadrática, cúbica, exponencial e fatorial.
13. Citamos os conceitos de algoritmos polinomiais e a discussão $P$ versus $NP$.

