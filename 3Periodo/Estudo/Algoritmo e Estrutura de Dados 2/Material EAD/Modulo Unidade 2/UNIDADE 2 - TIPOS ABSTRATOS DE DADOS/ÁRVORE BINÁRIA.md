## NESTA SESSÃO

As árvores binárias são estruturas formadas por um conjunto finito de nós (vértices) conectados por arestas. A figura abaixo mostra três exemplos de árvores binárias em que os nós são as "bolinhas" e as arestas, os "tracinhos".

A árvore da Figura 1a contém sete nós e as das 1b e 1c, quinze. Tais árvores são ditas binárias porque seus nós têm zero, um ou dois filhos. Em árvores, temos os conceitos de pais e filhos. Por exemplo, na Figura 1a, o nó 5 é pai dos nós 3 e 7 e esses são filhos do primeiro.

Os nós que possuem filhos são chamados de nós internos e os sem filhos, de nós externos ou folhas. Na Figura 1a, os nós 5, 3, 7 e 2 são nós internos; e os nós 1, 4 e 6 são folhas. Na Figura 1b, os nós pares são internos e os ímpares, folhas. A Figura 1c tem apenas o nó 8 como folha, os demais são nós internos.

Outro conceito importante é o de nó raiz onde começamos a execução das operações básicas de pesquisa, inserção e remoção nas árvores. As raízes das árvores ilustradas nas Figuras 1a, 1b e 1c são os nós 5, 8 e 15, respectivamente. Uma árvore tem uma referência (ou ponteiro) chamada de raiz que aponta para o nó raiz. Na Figura 1, a raiz de cada árvore é representada por uma seta preta.

As árvores também têm o conceito de subárvore onde cada nó tem sua subárvore que consiste nele e todos seus descendentes. Por exemplo, na Figura 1a, a subárvore do nó 3 é composta por ele e pelos nós 1, 2 e 4. Outro exemplo de subárvore na Figura 1a é a do nó 7 que é composta por ele e pelo nó 6. Uma folha também é uma subárvore que contém um único nó.

![[Pasted image 20251024175540.png]]

Uma das principais métricas das árvores binárias é sua altura que corresponde ao número de arestas existentes no caminho entre a raiz e a folha mais distante. A altura da árvore ilustrada na Figura 1a é três porque temos esse número de arestas no caminho entre o nó raiz (nó 5) e a folha mais distante (nó 1). As alturas das árvores mostradas nas Figuras 1b e 1c são 3 e 14, respectivamente. Uma árvore binária é dita balanceada quando, para todos seus nós, a diferença entre a altura das suas subárvores à direita e esquerda é zero ou uma unidade. As árvores das Figuras 1a e 1b são balanceadas. Por outro lado, a da Figura 1c apresenta uma cadeia linear de nós.

As operações básicas (inserir, remover e pesquisar) em uma árvore binária demoram um tempo proporcional à sua altura. No caso de uma árvore binária balanceada com **n** nós, executamos tais operações com custo **θ(lg n)** no pior caso. Podemos ler o operador **θ** como aproximadamente ou proporcionalmente. Logo, o fato do custo em uma árvore binária balanceada ser **θ(lg n)** significa que executamos tais operações fazendo aproximadamente **lg n** comparações entre elementos da árvore. Lg é o logaritmo na base dois de **n**. Por exemplo, se uma árvore binária balanceada tiver 1024 nós, pesquisaremos um elemento nessa estrutura fazendo aproximadamente 10 comparações no pior caso. Isso porque o logaritmo na base dois de 1024 é dez. Por outro lado, em uma árvore contendo uma cadeia linear de nós, o custo das operações básicas é **θ(n)** no pior caso. Por exemplo, em uma árvore binária contendo uma cadeia linear com 1024 nós, o custo para pesquisar um elemento será de aproximadamente 1024 comparações no pior caso.

  
Um nó é uma classe autorreferencial que contém duas referências (ou ponteiros) para outros objetos do tipo nó. O código abaixo mostra a definição da classe nó em C#.

``` C#
class No {
   public int elemento; // Conteúdo do no.
   public No esq, dir;  // Filhos da esq e dir.

   /**
    * Construtor da classe.
    * @param elemento Conteúdo do no.
    */
   public No(int elemento) {
      this.elemento = elemento;
      this.esq = null;
      this.dir = null;
   }

   /**
    * Construtor da classe.
    * @param elemento Conteúdo do no.
    * @param esq No da esquerda.
    * @param dir No da direita.
    */
   public No(int elemento, No esq, No dir) {
      this.elemento = elemento;
      this.esq = esq;
      this.dir = dir;
   }
}
```

A principal vantagem das árvores binárias é sua eficiência nas operações de pesquisa, inserção e remoção que podem ser efetuadas com o custo de **θ(lg n)** no pior caso quando a árvore está balanceada. O processo de balanceamento acontece após as operações de inserção ou remoção de um elemento. O algoritmo de balanceamento verifica se existe algum nó desbalanceado no caminho entre a folha inserida/removida e a raiz. Um nó está desbalanceado quando a diferença entre a altura das suas subárvores à direita e esquerda é maior que uma unidade. Quando o algoritmo encontra um nó desbalanceado, ele faz uma rotação no nó em questão, alterando o valor de algumas referências do nó, de seus filhos e netos. Os três vídeos abaixo mostram o processo de balanceamento em árvores binárias. O primeiro vídeo e seu conjunto de [slides](about:invalid#) introduzem o conceito de balanceamento em árvores binárias e apresentam os tipos de rotação. Os dois vídeos em sequência e seu conjunto de [slides](about:invalid#) apresentam a árvore binária balanceada AVL. O segundo vídeo mostra os conceitos dessa árvore e o terceiro, um exemplo de construção da mesma.

**REFLEXÃO**

A principal vantagem das árvores binárias é a eficiência em termos de pesquisa, inserção e remoção quando comparamos tais estruturas com as listas. Elas também podem ser utilizadas em conjunto com as tabelas _hash_ para tratar eventuais colisões. As árvores apresentam muitas propriedades matemáticas interessantes. Por exemplo, o fato da altura de uma árvore binária balanceada ser _θ(lg n)_ no pior caso. Uma forma de melhorar nossas habilidades em Algoritmos e Estruturas de Dados é aprimorando nossos conhecimentos em Matemática.