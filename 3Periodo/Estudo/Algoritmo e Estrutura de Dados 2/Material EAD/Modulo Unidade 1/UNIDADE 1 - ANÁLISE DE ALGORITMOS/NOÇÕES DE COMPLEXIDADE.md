## NESTA SESSÃO
A análise de complexidade é crucial no desenvolvimento de algoritmos, pois avalia sua eficiência em termos de tempo de execução e uso de recursos. Esta sessão de estudos introduz a contagem de operações, funções de complexidade e a notação $\Theta$. O vídeo abaixo apresenta e resolve alguns exercícios iniciais sobre nivelamento. Acesse o conjunto de [Slides - noções de complexidade](#) $\downarrow$ utilizado nesse vídeo e nos demais apresentados nesta sessão.

---

**CONTAGEM DE OPERAÇÕES**

O primeiro passo na análise de algoritmos é contar as operações realizadas pelo algoritmo, incluindo operações aritméticas e acessos à memória. Isso permite estimar o consumo de recursos em relação ao tamanho da entrada. Essa contagem é independente de especificidades técnicas, facilitando a comparação de algoritmos e a previsão de desempenho para entradas maiores. A análise de algoritmos normalmente contabiliza as operações mais custosas, contudo, neste momento, focaremos em contar operações sem detalhar quais são as mais ou menos custosas. A Tabela 1 ilustra três algoritmos no qual contamos o número de subtrações executados por cada um deles. Nessa tabela, observamos que:

* O Algoritmo A apresenta uma estrutura sequencial com três subtrações, nas linhas 2 a 4.
* O Algoritmo B tem uma estrutura condicional de comandos na qual é possível diferenciar um pior e um melhor caso em termos de custo (número de subtrações). O pior caso do Algoritmo B acontece quando a condição ($a - 5 < b - 3$) da linha 2 é verdadeira em que executamos cinco subtrações; seu melhor caso acontece quando a condição é falsa e executamos três subtrações. Em ambos os casos, contabilizamos as duas subtrações realizadas na condição.
* O Algoritmo C contém uma estrutura de repetição na qual a lista de comandos (linhas 3 e 4) dentro do laço "for" é executada $n$ vezes. Como cada execução desse laço faz duas subtrações, o Algoritmo C realiza ($2 \times n$) subtrações. A primeira execução das subtrações ocorre quando $i$ é igual a zero e a última ocorre quando $i$ é igual a ($n - 1$). Quando $i$ é igual a $n$, o algoritmo termina suas repetições sem executar a lista de comandos.
### Algoritmo A: estrutura sequencial

``` java
...
a--;
a -= 3;
a = a - 2;
```


### Algoritmo B: estrutura condicional

``` java
...
if (a - 5 < b - 3){
    i--;
    --b;
    a -= 3;
} else {
    j--;
}
```


### Algoritmo C: estrutura de repetição

``` java
...
for (int i = 0; i < n; i++){
    a--;
    b--;
}
```

---

**FUNÇÕES DE COMPLEXIDADE**

A contagem do número de operações deve resultar em uma função de complexidade que descreve o comportamento do algoritmo em relação ao tamanho da entrada. A função de complexidade de um algoritmo fornece uma medida da quantidade de recursos (como tempo e espaço) que ele requer à medida que o tamanho da sua entrada aumenta. Um exemplo dessa entrada é o tamanho do _array_ para os algoritmos de pesquisa e ordenação em memória primária em que o quão maior esse tamanho, maior o tempo para se pesquisar um elemento ou ordenar o _array_. Outro exemplo é o número de vértices para os algoritmos em grafos porque, normalmente, o quão maior esse tamanho, maior o tempo de execução dos algoritmos em grafos.

A Tabela 2 apresenta a função de complexidade para o número de subtrações dos Algoritmos A, B e C mencionados na Tabela 1. Os Algoritmos A e B possuem uma função de complexidade constante, pois o número de subtrações que eles executam não é afetado pelo tamanho da entrada. O Algoritmo C tem uma função de complexidade linear na qual o crescimento do seu número de subtrações é proporcional ao tamanho da entrada. A Tabela 2 também mostra que o Algoritmo B possui um melhor caso diferente do seu pior caso; entretanto, os Algoritmos A e C não possuem diferença de caso porque eles sempre realizam um número constante de subtrações.

**Tabela 2: Função de Complexidade para o número de subtrações executado pelos Algoritmos A, B e C apresentados na tabela anterior.**

| Algoritmo | Função |
|---|---|
| Algoritmo A | $f(n) = 3$, em todos os casos |
| Algoritmo B | $f(n) = \begin{cases} 3, & \text{no melhor caso} \\ 5, & \text{no pior caso} \end{cases}$ |
| Algoritmo C | $f(n) = 2n$, em todos os casos |
As funções de complexidade desempenham um papel crucial na análise de algoritmos. De forma ilustrativa, considere a ordenação dos elementos de um *array* cuja análise de complexidade se resume em encontrar as funções $c(n)$ e $m(n)$ para os números de comparações e movimentações entre elementos do *array*, respectively. Conhecendo tais funções e o tamanho do *array*, somos capazes de responder qual será o custo de um algoritmo dado um *array* de elementos. Por exemplo, o tradicional Algoritmo de Seleção faz $c(n) = \frac{n^2}{2} - \frac{n}{2}$ comparações e $m(n) = 3n - 3$ movimentações. Quando aplicamos esse algoritmo em um *array* contendo 10 elementos ($n = 10$), ele faz $c(10) = \frac{10^2}{2} - \frac{10}{2} = 45$ comparações e $m(10) = 3 \times 10 - 3 = 27$ movimentações.

Quando $n = 100$, temos $c(100) = \frac{100^2}{2} - \frac{100}{2} = 4950$ comparações e $m(100) = 3 \times 100 - 3 = 997$ movimentações.

---

**NOÇÃO SOBRE A NOTAÇÃO  Θ**

A identificação da ordem de complexidade de um algoritmo é o último passo da análise de complexidade que consiste em identificar a tendência de crescimento de uma função de complexidade. A identificação dessa tendência é baseada em duas simplificações da função de complexidade. A primeira consiste em desprezar os termos de menores graus da função, considerando apenas seu termo de maior grau. Essa simplificação acontece porque à medida em que aumentamos o tamanho da entrada de um algoritmo, o termo de maior grau faz com que os demais sejam desprezíveis. Por exemplo, a Figura 1 da sessão de estudos anterior sobre conceitos básicos mostrou como a curva cúbica torna os resultados das curvas quadrática, linear-logarítmica, linear, de raiz quadrada e logarítmica desprezíveis à medida que aumentamos os valores do eixo x. As Figuras 2 a 5 daquela sessão de estudos ilustram outros exemplos em que o termo de maior grau torna os demais termos desprezíveis aumentando os valores do eixo x.

A segunda simplificação realizada na ordem de complexidade consiste em ignorar o coeficiente do termo de maior grau. Isso porque a ordem de complexidade está preocupada com a tendência de crescimento, ignorando se o valor será o dobro, triplo, quádruplo ou multiplicado por outra constante. Todavia, na prática, sabemos que esse coeficiente é pequeno sendo normalmente menor que cinco.

Uma notação tradicional para ordem de complexidade é a notação $\Theta$ que aplica as duas simplificações citadas acima nas funções de complexidade. Por exemplo, a ordem de complexidade para o número de comparações do Algoritmo de Seleção é $\Theta(n^2)$ porque sua função de complexidade para essa operação é $c(n) = \frac{n^2}{2} - \frac{n}{2}$ e ignoramos o termo $\frac{n}{2}$ e o coeficiente do termo quadrático. Outro exemplo é a ordem para o número de movimentações do Seleção que é $\Theta(n)$ porque sua função é $m(n) = 3n - 3$ e ignoramos o termo independente e o coeficiente do termo linear. É importante observar que o fato das complexidades de comparações e movimentações do Seleção serem respectivamente $\Theta(n^2)$ e $\Theta(n)$ mostra que esses custos crescem de forma quadrática e linear com o tamanho do *array* e isso é importante quando o projetista de um sistema computacional escolher qual será o algoritmo de ordenação a ser utilizado em seu software.

Outro exemplo de ordem de complexidade é que o custo dos Algoritmos A e B das Tabelas 1 e 2 que é $\Theta(1)$ para o número de subtrações porque suas funções de complexidade são constantes e independem do tamanho da entrada; o Algoritmo C nas mesmas tabelas é $\Theta(n)$ porque sua função é $f(n) = n$.

A Tabela 3 ilustra mais alguns exemplos de ordens de complexidade utilizando a notação $\Theta$ para funções de complexidade constantes, logarítmicas, lineares, lineares-logarítmicas, quadráticas, cúbicas e quárticas.

**Tabela 3: Ordem de complexidade, tipo de função e alguns exemplos de função.**

| Ordem de complexidade | Tipo de função | Exemplos de funções |
|---|---|---|
| $\Theta(1)$ | Constante | $f(n) = 1$<br>$f(n) = 2$<br>$f(n) = 3$<br>$f(n) = 5$ |
| $\Theta(lg\ n)$ | Logarítmica | $f(n) = lg\ n$<br>$f(n) = 2 \times lg\ n$<br>$f(n) = 3 \times lg\ n$<br>$f(n) = 5 \times lg\ n$<br>$f(n) = lg(n) + 5lg(n)$<br>$f(n) = lg(n) + 5$ |
| $\Theta(n)$ | Linear | $f(n) = n$<br>$f(n) = 2n$<br>$f(n) = 3n$<br>$f(n) = 5n$<br>$f(n) = n + lg(n)$ |
| $\Theta(n \times lg\ n)$ | Linear-logarítmica | $f(n) = n \times lg\ n$<br>$f(n) = 2 \times n \times lg\ n$<br>$f(n) = 3 \times n \times lg\ n$<br>$f(n) = 5 \times n \times lg\ n$<br>$f(n) = lg(n) + n + n \times lg(n)$ |
| $\Theta(n^2)$ | Quadrática | $f(n) = n^2$<br>$f(n) = 2n^2$<br>$f(n) = 3n^2$<br>$f(n) = 5n^2$<br>$f(n) = 3n + 2n^2$ |
| $\Theta(n^3)$ | Cúbica | $f(n) = 5n + 4n^3$<br>$f(n) = 2n^3 + 5$<br>$f(n) = 2n^3 + 4n^2 + 2n + 5$ |
| $\Theta(n^4)$ | Quártica | $f(n) = n^4 + 2n^3 + 4n^2 + 2n + 5$<br>$f(n) = 9n^4 + 5n^3 + \frac{n}{2}$ |

**NOÇÕES SOBRE A COMPLEXIDADE DA PESQUISA E ORDENAÇÃO EM MEMÓRIA PRIMÁRIA**

Os problemas de pesquisa e ordenação em memória primária foram discutidos em microfundamentos cursados anteriormente. A sessão de estudos anterior fez uma revisão sobre esse assunto, contudo, dados os conceitos de noções de complexidade, é importante considerar:

1.  O pior caso da pesquisa sequencial realiza $\Theta(n)$ comparações e acontece quando o elemento desejado está na última posição do *array* ou não está presente.
2.  O melhor caso realiza $\Theta(1)$ comparações e acontece quando o elemento procurado está na primeira posição do *array*.
3.  A complexidade da pesquisa binária é logarítmica, representada por $\Theta(lg\ n)$, onde $n$ é o número de elementos no *array*. No melhor caso, o elemento procurado é o do meio da sequência, resultando em uma complexidade de tempo de $\Theta(1)$. No pior caso, o elemento não está presente ou está no extremo oposto da sequência, exigindo $lg\ n$ iterações para encontrar o elemento desejado.
4.  O fato dos algoritmos de pesquisa sequencial e binária realizarem respectivamente $\Theta(n)$ e $\Theta(lg\ n)$ comparações para encontrar um elemento no *array* significa que em um *array* com 1024 elementos, as pesquisas sequencial e binária realizam aproximadamente 1024 e 10 comparações, respectivamente.
5.  A análise de complexidade para os números de comparações e movimentações envolvendo elementos do *array* para os algoritmos de Seleção e de Inserção dependem de somatórios e foram abordados na sessão de estudos sobre somatórios.
6.  A análise de complexidade do Quicksort tem um melhor e um pior caso. No melhor, cada partição divide seu conjunto em dois subconjuntos contendo exatamente metade dos seus elementos. A segunda partição resulta em quatro subconjuntos contendo $\frac{n}{4}$ elementos, cada; a terceira, oito subconjuntos com $\frac{n}{8}$ elementos, cada. Dividindo sistematicamente cada subconjunto pela metade, em $lg(n)$ passos, temos $lg(n)$ conjuntos de tamanho um. Como o melhor caso do algoritmo faz $lg(n)$ passos e cada passo compara todos os $n$ elementos com um pivô, temos $\Theta(n \times lg(n))$ comparações e movimentações. Por outro lado, o pior caso acontece quando todas as partições escolhem sistematicamente o menor ou o maior elemento do conjunto como o pivô, fazendo com que um dos subconjuntos da partição tenha um elemento e outro contendo todos os demais elementos. No pior caso, a primeira partição do Quicksort faz $n$ comparações que resultam em um subconjunto de tamanho um e outro com $(n - 1)$ elementos. A segunda partição acontece apenas no segundo subconjunto. Como o pior caso escolhe sistematicamente o menor ou o maior elemento do subconjunto como o pivô, a segunda partição faz $(n - 1)$ comparações para criar um subconjunto com um elemento e outro contendo $(n - 2)$ elementos. O pior caso repete $n$ vezes e seu número total de comparações é igual a $n + (n - 1) + (n - 2) + (n - 3) + ... + 1$. Aplicando as técnicas de somatórios apresentadas na sessão de estudos sobre somatórios, identificamos que o pior caso deste algoritmo realiza $\Theta(n \times lg(n))$ comparações. O número de movimentações também segue a mesma ideia.