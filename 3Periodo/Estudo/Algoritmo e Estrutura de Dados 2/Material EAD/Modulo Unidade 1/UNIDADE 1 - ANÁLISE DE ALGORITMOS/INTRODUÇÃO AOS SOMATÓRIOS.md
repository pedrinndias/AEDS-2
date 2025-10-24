## NESTA SESSÃO

**INTRODUÇÃO AOS SOMATÓRIOS**

Os somatórios desempenham um papel fundamental na análise de complexidade de algoritmos, permitindo expressar o custo de um algoritmo como a soma dos custos individuais de suas operações. Isso possibilita a quantificação e compreensão da eficiência de um algoritmo em relação ao tamanho do problema, facilitando a comparação e seleção de algoritmos mais eficientes.

A notação sigma ($\sum$) é amplamente utilizada como símbolo de somatório na matemática para representar, de forma concisa, a soma de uma sequência de termos. O símbolo sigma maiúsculo ($\sum$) é acompanhado por uma expressão que define os termos a serem somados. Em geral, a notação é a seguinte:

$$\sum_{i=m}^{n} a_i$$

Na referida notação, o índice de iteração $i$ é iniciado em $m$ e percorre os valores até $n$. O termo $a_i$ representa cada termo individual do somatório. Por exemplo, para representar a soma dos primeiros $n$ números inteiros, podemos usar a notação sigma da seguinte forma:

$$\sum_{i=1}^{n} i = 1 + 2 + 3 + \ldots + n$$

Nesse caso, o índice $i$ varia de 1 a $n$, e cada termo individual é simplesmente o valor de $i$. O símbolo de somatório nos permite expressar essa soma de forma concisa e generalizada.

Uma forma de familiarizar os desenvolvedores de algoritmos com a notação sigma de somatórios é relacionando-a ao comando de repetição "for". A notação sigma e o comando "for" possuem uma variável de controle do laço que atua como o índice de uma soma. Nos dois casos, essa variável tem valores iniciais e finais, e um incremento. Ambos também têm o que está sendo iterado ou melhor, somado. Por exemplo, podemos usar o comando "for" para calcular a soma dos primeiros $n$ números inteiros como no código abaixo.

**Algoritmo para calcular a soma dos primeiros n números inteiros**

``` java
int soma = 0;
for(int i = 0; i < n; soma += i, i++);
```
**AS REGRAS BÁSICAS DA MANIPULAÇÃO DE** **SOMAS**

Segundo Knuth, "(...) _A chave do sucesso na manipulação de somas está na habilidade de transformar uma soma em outra mais simples ou mais próxima de algum objetivo_ (...)". Ao aplicar técnicas adequadas, é possível simplificar expressões somatórias e obter resultados mais facilmente interpretáveis. Duas formas de resolver somatórios são aplicando as três regras básicas de transformação ou as duas propriedades de transformação. As três regras básicas são distributividade, associatividade e comutatividade. A distributividade permite distribuir um fator comum a todos os termos da soma, facilitando a simplificação. A associatividade permite agrupar os termos de diferentes maneiras, mudando a ordem de avaliação. A comutatividade permite permutar a ordem dos termos sem afetar o resultado final da soma.

**AS PROPRIEDADES DA MANIPULAÇÃO DE SOMAS**

A segunda forma de resolver somatórios é aplicando as duas propriedades de transformação. A propriedade P1, conhecida como Combinação de Conjuntos, permite combinar termos somatórios com conjuntos disjuntos em um único somatório. Essa propriedade é útil para agrupar termos semelhantes e simplificar a expressão. Por outro lado, a propriedade P2, chamada de Base para a Perturbação, é uma técnica que envolve a introdução de termos adicionais em uma soma para facilitar a manipulação e obter resultados desejados.

O vídeo abaixo apresenta a propriedade P1 para combinação de conjuntos. Em seguida, temos dois exercícios resolvidos cujas correções estão apresentadas nos vídeos ao lado do exercício. O conjunto de [Slides](https://pucminas.instructure.com/courses/249589/files/14739544?wrap=1 "unidade01b2_somatorios_manipulação.pdf")[](https://pucminas.instructure.com/courses/249589/files/14739544/download?download_frd=1)

[Download Slides](https://pucminas.instructure.com/courses/249589/files/14739544/download?download_frd=1) utilizado nesses vídeos é o mesmo sobre a manipulação de somatórios.

**ALGUNS MÉTODOS GERAIS PARA RESOLUÇÃO DE SOMATÓRIOS**

A literatura apresenta diversos métodos gerais que podem ser aplicados para a resolução de somatórios. Esses métodos são ferramentas poderosas para enfrentar desafios matemáticos e ajudam a desenvolver a habilidade de solucionar problemas de forma eficiente e criativa. Neste material discutiremos três métodos:

- Procure;
- Adivinhe a resposta, prove por indução;
- Perturbe a soma.

O método "Procure" envolve a busca por padrões e regularidades na expressão ou problema em questão. Ao observar atentamente a soma e analisar os termos, é possível identificar estruturas recorrentes ou propriedades que auxiliam na simplificação ou resolução. Através dessa análise, é possível encontrar uma forma mais compacta ou simplificada da expressão somatória, permitindo assim avançar na resolução do somatório.

O método "Adivinhe a resposta, prove por indução" é uma abordagem indutiva que consiste em fazer uma suposição sobre a resposta de um problema e, em seguida, provar que essa suposição é verdadeira. Ao fazer uma conjectura inicial e usar a indução matemática para demonstrar que a resposta é válida para todos os casos, é possível chegar a uma solução correta e bem fundamentada. Esse método é especialmente útil em problemas que envolvem sequências ou estruturas recursivas.

A indução matemática é uma técnica de prova amplamente utilizada para estabelecer a veracidade de uma propriedade para todos os números naturais. Trata-se de uma técnica simples e robusta para provas matemáticas. A estrutura da prova por indução matemática consiste em dois passos:

- 1º Passo (passo base): Provar que a fórmula é verdadeira para o primeiro valor do somatório, substituindo _n_ na equação pelo primeiro valor;
- 2º Passo (indução propriamente dita): Supondo que $n > 0$ e que a fórmula é válida quando substituímos $n$ por $(n - 1)$. Utilizando a notação de somatório, temos $S_n = S_{n-1} + a_n$, onde $S_{n-1}$ é a equação resultante da substituição de $n$ por $(n - 1)$ e $a_n$ é o $n$-ésimo termo da sequência.

O método "Perturbe a soma" é uma estratégia que envolve adicionar ou subtrair termos em uma soma para simplificá-la ou transformá-la em uma forma mais manejável. Ao adicionar ou subtrair termos selecionados de forma estratégica, é possível aplicar as três regras de transformação de somatórios (distributividade, associatividade e comutatividade) e as duas propriedades de transformação de somas para obter uma nova expressão somatória que facilite a obtenção da fórmula fechada desejada. Essa técnica pode ser particularmente útil quando se deseja aplicar outras propriedades ou métodos para resolver o problema. 

O vídeo abaixo apresenta o método "Perturbe a Soma". Em seguida, temos dois exercícios resolvidos nos quais combinamos as três regras e as duas propriedades mencionadas para a resolução de somatórios. A correção desses exercícios está disponível no vídeo ao lado do enunciado. O conjunto de [Slides](https://pucminas.instructure.com/courses/249589/files/14739545?wrap=1 "unidade01b3_somatorios_metodos.pdf")[](https://pucminas.instructure.com/courses/249589/files/14739545/download?download_frd=1)

[Download Slides](https://pucminas.instructure.com/courses/249589/files/14739545/download?download_frd=1) utilizado nesses vídeos é o mesmo sobre os métodos gerais para resolução de somatórios.

**CONSIDERAÇÕES FINAIS DESTA SESSÃO DE ESTUDOS**

1. Abordamos o tema dos somatórios e sua importância na análise de algoritmos.
2. Apresentamos a notação sigma utilizada para representar somatórios na matemática. Essa notação expressa as somas de forma concisa e generalizada.
3. Mostramos as três regras básicas de manipulação de somas: distributividade, associatividade e comutatividade. Essas regras permitem simplificar expressões somatórias e obter resultados mais facilmente interpretáveis. Através da distributividade, é possível distribuir um fator comum a todos os termos da soma. A associatividade permite agrupar os termos de diferentes maneiras, mudando a ordem de avaliação. A comutatividade permite permutar a ordem dos termos sem afetar o resultado final da soma.
4. Explicamos as duas propriedades da manipulação de somas: combinação de conjuntos e base para a perturbação. A propriedade de combinação de conjuntos permite combinar termos somatórios com conjuntos disjuntos em um único somatório, facilitando a simplificação. Já a base para a perturbação envolve a introdução de termos adicionais em uma soma para facilitar a manipulação e obter resultados desejados.
5. Discutimos alguns métodos gerais para a resolução de somatórios, como o método de "Procurar" padrões e regularidades na expressão, o método de "Adivinhar a resposta, provar por indução" e o método de "Perturbar a soma". Cada um desses métodos oferece abordagens diferentes para resolver somatórios de forma eficiente.

Compreenda e retorne ao texto, vídeos e exercícios sempre que necessário. Até a próxima sessão de estudos.