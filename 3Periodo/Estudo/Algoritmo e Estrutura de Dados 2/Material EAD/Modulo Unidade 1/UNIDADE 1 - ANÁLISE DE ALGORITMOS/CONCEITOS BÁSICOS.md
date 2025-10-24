
Esta sessão de estudos introduz e contextualiza nosso microfundamento, conectando-o com outros microfundamentos vistos anteriormente. Em especial, Matemática Básica, Algoritmos e Estruturas de Dados, e Algoritmos de Ordenação e Pesquisa.

No final desta sessão, você deverá:

- Recordar algoritmos e a sintaxe _C-Like_;
- Relembrar os conceitos matemáticos sobre potência, logaritmo, piso e teto, e funções;
- Rever a ordenação e a pesquisa em memória principal.

## NESTA SESSÃO

A compreensão dos fundamentos de projetos e análise de algoritmos demanda um conhecimento sólido em Matemática e Algoritmos. Por isso, esta sessão apresenta um nivelamento com conceitos importantes dessas áreas. Este nivelamento contém textos e exercícios. Os vídeos explicando os assuntos abordados nesta sessão foram apresentados em  microfundamentos vistos anteriormente. 

---
**INTRODUÇÃO AOS ALGORITMOS E À SINTAXE C-_LIKE_**

Um algoritmo é uma sequência precisa e não ambígua de instruções ou passos que descreve uma solução para um problema ou tarefa específica. Ele pode ser expresso em linguagem natural, como o português e o inglês, ou em representações gráficas, como fluxogramas. Ele também pode ser implementado em linguagens de programação ou descrito em pseudocódigo, que é uma combinação de linguagem natural e elementos de programação. A estrutura básica de um algoritmo normalmente envolve três componentes: entrada, processamento e saída. A palavra "algoritmo" é uma homenagem ao matemático persa Muhammad ibn Musa al-Khwarizmi. Ele viveu no século IX e fez contribuições fundamentais para o desenvolvimento da Matemática e da Computação. O nome al-Khwarizmi foi latinizado para "_Algoritmi_" e, ao longo do tempo, evoluiu para "algoritmo" em várias línguas modernas.

A formação de um profissional da Computação deve focar no desenvolvimento de algoritmos independente da linguagem de programação. Quem domina algoritmos é capaz de programar em qualquer linguagem. Os códigos apresentados neste microfundamento estão em _C-Like_, uma sintaxe baseada na linguagem C. Alguns exemplos de linguagens do tipo _C-Like_ são C, C++, Java, C#, Python e JavaScript. O Prof. Rodrigo Richard Gomes da PUC Minas disponibilizou uma [playlist](https://www.youtube.com/watch?v=-Z7E-TKFeas&list=PLh_HYI46SWL1Z-chODT0kyl2C6YH7ZhLj&pp=iAQB) [Links to an external site.](https://www.youtube.com/watch?v=-Z7E-TKFeas&list=PLh_HYI46SWL1Z-chODT0kyl2C6YH7ZhLj&pp=iAQB) apresentando e comparando algumas linguagens _C-Like_ e é interessante assistir tal lista de vídeos.

---

**MATEMÁTICA BÁSICA: POTÊNCIA**

A potência, o logaritmo, o teto, o piso e as funções são conceitos básicos da matemática necessários para a análise de complexidade. A potência é a operação matemática que multiplica um número por si mesmo repetidas vezes. Essa operação é comum em diversas áreas da Computação, como algoritmos de cálculo numérico, processamento de imagens, simulação de sistemas dinâmicos e criptografia. As linguagens de programação do tipo C-Like representam o operador de potência com o símbolo "^". A Matemática usa o mesmo símbolo para representar a potência, na forma $a^n$ ou "a^n", onde $a$ é a base e $n$ é o expoente. Lê-se "a elevado a n" ou "a elevado à potência de n". Por exemplo, se a base é 2 e o expoente é 3, a potência $2^3$ representa a multiplicação de 2 por ele mesmo três vezes, o que resulta em $2^3 = 2 \times 2 \times 2 = 8$. A seguir, temos algumas propriedades envolvendo a operação de potência:

* Qualquer número elevado a 0 é igual a 1;
* Qualquer número elevado a 1 é igual a ele mesmo;
* Quando multiplicamos potências com a mesma base, podemos somar seus expoentes (e.g., $2^3 \times 2^2 = 2^{(3+2)} = 2^5 = 32$);
* Quando dividimos potências com a mesma base, podemos subtrair seus expoentes. (e.g., $\frac{2^5}{2^2} = 2^{(5-2)} = 2^3 = 8$);
* Quando elevamos uma potência a outra, podemos multiplicar seus expoentes. (e.g., $(2^3)^2 = 2^{(3*2)} = 2^6 = 64$).

Outra aplicação de potência é a notação científica que permite escrever números maiores (ou menores, no caso da parte decimal) de maneira mais simples e compacta. Essa notação representa um número da forma $a \times 10^b$, onde $a$ é a mantissa, consiste em um número real entre $[1, 10[$ e corresponde à parte mais significativa do número; e $b$, um número inteiro que indica a potência de 10. Por exemplo, na área de Redes de Computadores, o número teórico de endereços no *Internet Protocol versão 6* (IPv6) é igual a $3,4 \times 10^{38}$, o que é mais claro e compacto do que escrever um número com trinta e oito casas decimais.

---

**MATEMÁTICA BÁSICA: LOGARITMO**

O logaritmo é a operação inversa da potência, indicando quantas vezes o número deve ser dividido pela base para obter o resultado 1. Ele pode ser visto como o expoente ao qual um número deve ser elevado para obter um determinado resultado. Por exemplo, o logaritmo na base 2 de 8 é 3, pois 2 elevado a 3 é igual a 8. Esse exemplo pode ser escrito como $log_2(8) = 3$ ou $lg(8) = 3$, sendo "lg" o logaritmo na base dois como utilizado neste material.

Três bases tradicionalmente usadas no estudo de logaritmos são as bases 10, 2 e a do número de Euler. A base 10 é comum porque o sistema decimal é o principal sistema de numeração utilizado pelo homem. A base 2 é a padrão na Computação onde tradicionalmente os números são representados no sistema de numeração binário. Vários algoritmos (e.g., pesquisa binária) têm um custo computacional de ordem logarítmica porque, em cada passo desses algoritmos, eles reduzem pela metade seus escopos de trabalho. A base com o número de Euler possui diversas aplicações na Matemática, Ciência e Engenharias. Esse número é uma constante matemática irracional cujo valor é aproximadamente igual a 2, 71828. Um logaritmo cuja base é o número de Euler é chamado de logaritmo natural, $ln\ x$. Algumas propriedades tradicionais no estudo dos logaritmos são:

* $log_b(1) = 0$
* $log_b(b) = 1$
* $log_b(a \times c) = log_b(a) + log_b(c)$
* $log_b(\frac{a}{c}) = log_b(a) - log_b(c)$
* $log_b(a^c) = c \times log_b(a)$
* $log_b(c) = \frac{log(c)}{log(b)}$

As linguagens de programação têm funções para calcular logaritmos. Por exemplo, a função _**double log(double)**_ na biblioteca _**math.h**_ das linguagens C/C++ retorna o logaritmo natural do valor passado como parâmetro. As linguagens Java e C# têm o mesmo método (ou função) na biblioteca _**Math**_; salvo que os nomes de métodos em C# começam com uma letra maiúscula. Algumas linguagens (e.g., C/C++) têm as funções _**double log10(double)**_ e _**double log2(double)**_ que retornam os logaritmos de um parâmetro nas bases dez e dois, respectivamente. Caso seja necessário obter o logaritmo em outra base, podemos utilizar as duas propriedades citadas acima para a troca de base.

---

**MATEMÁTICA BÁSICA: PISO E TETO**

Os conceitos matemáticos de piso e teto são aplicados aos números reais. Alguns exemplos de aplicação dessas operações na Computação envolvem arredondamento de números, cálculo de índices, divisões e análise de algoritmos O piso de um número corresponde ao maior número inteiro que é menor ou igual ao número em questão. O teto de um número corresponde ao menor número inteiro que é maior ou igual ao referido número. Formalmente, temos que se $x$ é um número real, o piso de $x$ é denotado por $\lfloor x \rfloor$, por exemplo, $\lfloor 3,14 \rfloor = 3$, $\lfloor 5,8 \rfloor = 5$ e $\lfloor -2,5 \rfloor = -3$. Por outro lado, o teto de $x$ é denotado por $\lceil x \rceil$ e como exemplos temos que $\lceil 3,14 \rceil = 4$, $\lceil 5,8 \rceil = 6$ e $\lceil -2,5 \rceil = -2$.

---

**MATEMÁTICA BÁSICA: FUNÇÕES MATEMÁTICAS**

Uma função é uma relação entre dois conjuntos $X$ e $Y$ onde cada elemento $x \in X$ tem um único valor correspondente $y \in Y$. O conjunto $X$ é chamado de domínio e o $Y$, de contradomínio ou imagem. O domínio de uma função é o conjunto de todos os valores de entrada para os quais a função está definida. O contradomínio é o conjunto de saída cujos valores possíveis são obtidos através de uma função que mapeia os elementos pertencentes ao domínio. Um projetista de algoritmos deve conhecer funções matemáticas porque elas permitem descrever numericamente o comportamento dos algoritmos em termos de um custo (e.g., tempo e espaço). Um exemplo de aplicação de funções na área de Algoritmos acontece quando desejamos estudar o tempo de execução de um algoritmo de ordenação à medida em que aumentamos o tamanho do *array* (arranjo ou vetor) a ser ordenado. Nesse caso, o domínio da função (eixo x) é o tamanho do *array* e o contradomínio (eixo y), o tempo de execução do algoritmo. A Tabela 1 mostra o nome e um exemplo de algumas funções frequentemente utilizadas na análise de algoritmos.

**Tabela 1: Nome e exemplo de algumas funções matemáticas frequentemente utilizadas na análise de algoritmos.**

| Nome da função     | Exemplo                                |
| ------------------ | -------------------------------------- |
| Cúbica             | $f(n) = n^3$                           |
| Quadrática         | $f(n) = n^2$                           |
| Linear-logarítmica | $f(n) = n \times lg(n)$                |
| Linear             | $f(n) = n$                             |
| De raiz quadrada   | $f(n) = \sqrt{n} = sqrt(n)$            |
| Logarítmica        | $f(n) = lg(n)$                         |
| Constante          | $f(n) = c$, onde **c** é uma constante |

O uso de funções matemáticas na análise de algoritmos permite que o projetista de algoritmos perceba a tendência de crescimento de um algoritmo à medida que se aumenta o parâmetro de entrada. Por exemplo, as Figuras 1 a 5 apresentam o gráfico de crescimento das funções exemplificadas na Tabela 1 considerando diferentes valores máximos no eixo $y$. O valor máximo desse eixo nas Figuras 1 a 5 é igual a $1, 25 \times 10^9$, $10^6$, $10^4$ e $10^3$, respectively. O eixo $y$ da Figura 1 apresenta uma escala logarítmica para facilitar a visualização da forte tendência de crescimento da função cúbica em relação às demais. A Figura 1 mostra que o resultado da função cúbica domina e torna desprezível o das demais funções avaliadas à medida que aumentamos os valores de entrada no eixo $x$. Por exemplo, o cubo de $1, 25 \times 10^9$ é da ordem de $10^{27}$ e seu quadrado, da ordem de $10^{18}$.

![[Pasted image 20251024113904.png]]

  
A Figura 2 destaca que o resultado da função quadrática também domina o das funções linear-logarítmica, linear, de raiz quadrada e logarítmica. O resultado da função cúbica na Figura 2 “desaparece” no início do eixo X porque o crescimento dessa função é fortemente maior que o das demais funções. As Figuras 3 e 4 detalham que o crescimento das funções linear-logarítmica e linear é superior ao das de raiz quadrada e logarítmica. O resultado das funções cúbica e quadrática “desaparecem” no início dos gráficos das Figuras 3 e 4 porque o crescimento das mesmas é significativamente maior que o das demais. A Figura 5 cujo maior valor do eixo Y é igual 100 proporciona uma impressão que as curvas cúbica, quadrática, linear-logarítmica e linear se parecem com assíntotas verticais perto do crescimento reduzido das funções de raiz quadrada e logarítmica.

![[Pasted image 20251024114007.png]]

![[Pasted image 20251024114018.png]]

![[Pasted image 20251024114027.png]]

![[Pasted image 20251024114037.png]]

Outra função importante na análise de algoritmos é a função exponencial que pode ser representada como $f(n) = a^n$, sendo que "$a$" é uma constante e "$n$", uma variável pertencente ao conjunto domínio. Uma propriedade importante da função exponencial é que sua taxa de crescimento é proporcional ao seu valor, fazendo com que o quão maior seja $f(n)$, maior será sua taxa de crescimento. Um algoritmo é considerado intratável quando sua função de complexidade de tempo é exponencial, pois à medida que aumentamos sua entrada, seu tempo de execução aumenta exponencialmente. Por exemplo, a solução ótima para o problema do caixeiro viajante pode ser encontrada facilmente quando temos entradas menores (e.g., cinco ou seis entradas), contudo, aumentando o número de entradas, rapidamente, o tempo de execução dessa solução aumenta para alguns anos, séculos ou milênios.

---

**PESQUISA EM MEMÓRIA PRINCIPAL**

A pesquisa em memória principal é um dos problemas clássicos na área da Computação. Ela consiste em encontrar um elemento específico dentro de um conjunto de dados (e.g., um _array_). Os dois algoritmos tradicionais de pesquisa em memória principal são as pesquisas sequencial e binária. A sequencial é um método simples e direto. Esse algoritmo verifica os elementos do _array_ um a um, do início ao fim, até que o elemento desejado seja encontrado ou que todos os elementos tenham sido examinados. Por outro lado, a pesquisa binária é um algoritmo mais eficiente, contudo, requerindo que o _array_ esteja ordenado. A pesquisa binária compara o elemento procurado com o localizado no meio do _array_. Se eles forem iguais, temos uma pesquisa positiva. Caso contrário, se o elemento procurado é menor que o localizado no meio do _array_, repetimos o processo considerando apenas os elementos do _subarray_ à esquerda da posição central. Se ele é maior, repetimos considerando o _subarray_ da direita. O processo é repetido enquanto o elemento procurado não for encontrado e o _subarray_ em avaliação tiver posições não verificadas. Cada comparação reduz o escopo de busca pela metade. Abaixo, temos o código em _C-Like_ da pesquisa sequencial e da binária.

### Pesquisa Sequencial

``` java
boolean resp = false;
for (int i = 0; i < n; i++) {
    if (array[i] == x) {
        resp = true;
        i = n;
    }
}
```


### Pesquisa Binária

``` java
boolean resp = false;
int dir = n - 1, esq = 0, meio, diferença;
while (esq <= dir) {
    meio = (esq + dir) / 2;
    diferença = (x - array[meio]);
    if (diferença == 0) {
        resp = true;
        esq = n;
    } else if (diferença > 0) {
        esq = meio + 1;
    } else {
        dir = meio - 1;
    }
}
```


---

**ORDENAÇÃO EM MEMÓRIA PRINCIPAL**

A ordenação de elementos é um dos problemas mais importantes da Computação. Os algoritmos de ordenação são aplicados em diversas áreas. Por exemplo, os bancos de dados recebem consultas para as quais devem retornar um conjunto ordenado de elementos. Outros exemplos são em algoritmos de rede, inteligência artificial e ciência dos dados nos quais suas decisões são baseadas em dados ordenados. A literatura apresenta diversos algoritmos de ordenação que se diferenciam por suas estratégias de ordenação. Esta sessão de estudos apresenta três algoritmos de ordenação tradicionais: Seleção, Inserção e _Quicksort_.

O Seleção percorre o _array_, procurando a posição do menor elemento. Em seguida, ele troca o menor elemento com o da primeira posição do _array_. O segundo passo do algoritmo repete o processo, desconsiderando a primeira posição e fazendo com que os dois menores elementos fiquem nas duas primeiras posições. Os demais passos também repetem o processo, sempre desconsiderando as posições que contêm os elementos anteriormente ordenados. O algoritmo termina quando a parte a ser ordenada tem somente um elemento porque esse é o maior elemento e está na última posição do _array_. Abaixo, temos o código em _C-Like_ do Seleção.

### Algoritmo de Seleção

``` java
for (int i = 0; i < (n - 1); i++) {
    int menor = i; 
    for (int j = (i + 1); j < n; j++){
        if (array[menor] > array[j]){
            menor = j;
        }
    }
    swap(menor, i);
}
```

O Inserção insere sistematicamente os elementos do _array_ em uma lista ordenada. Inicialmente, o algoritmo considera que a primeira posição é a lista ordenada. Em seguida, se o elemento da segunda posição é menor que o da primeira, ele troca esses dois elementos, garantindo que a lista ordenada tem tamanho dois. O próximo passo insere o elemento da terceira posição na lista ordenada. Nesse caso, o algoritmo copia o "novo" elemento para uma variável temporária e o compara com os elementos da lista ordenada, analisando-os da direita para a esquerda. Enquanto o "novo" elemento é maior que os elementos existentes na lista ordenada, o algoritmo desloca cada elemento da lista ordenada em uma posição para à direita. Quando o algoritmo encontra a posição do "novo" elemento, ele o insere na lista. O algoritmo repete esse processo até que todos os elementos do _array_ sejam inseridos na lista ordenada. Abaixo, temos o código em _C-Like_ do Inserção.

### Algoritmo de Inserção

``` java
for (int i = 1; i < n; i++) {
    int tmp = array[i];
    int j = i - 1;
    while ( (j >= 0) && (array[j] > tmp) ){
        array[j + 1] = array[j];
        j--;
    }
    array[j + 1] = tmp;
}
```

O Quicksort (ordenação rápida) é um dos algoritmos mais utilizados para ordenação. Seu funcionamento básico consiste em escolher um elemento qualquer como pivô para um processo de partição dos elementos do _array_ em dois _subarrays_. Esse processo compara cada elemento do _array_ com o pivô e reorganiza o _array_ de tal forma que todos os elementos menores que o pivô ficam no _subarray_ à esquerda e os maiores, no _subarray_ à direita. Os elementos iguais ao pivô podem ficar em qualquer um dos dois subconjuntos. O próximo passo do algoritmo repete o processo em cada um dos _subarrays_ de tal forma que para cada _subarray_ tem um novo pivô e cada _subarray_ é particionado em dois novos _subarrays_. O algoritmo repete o processo de partição até que todos os _subarrays_ tenham somente um elemento. No final, cada elemento do _array_ está em sua posição correta de ordenação.  Abaixo, temos o código em _C-Like_ do Quicksort.

### Quicksort

``` Java
void quicksort() {
    quicksort(0,n-1);
}

void quicksort(int esq, int dir) {
    int i = esq,    
        j = dir,
        pivo = array[(esq+dir)/2];
    while (i <= j) {
        while (array[i] < pivo){ 
            i++;
        }
        while (array[j] > pivo){
            j--;
        }
        if (i <= j) {   
            swap(i, j);
            i++;
            j--;
        }
    }
    if (esq < j){
        quicksort(esq, j);
    }
    if (i < dir){
        quicksort(i, dir);
    }
}
```

