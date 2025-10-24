
## NESTA SESSÃO

As listas flexíveis são estruturas formadas por um conjunto de células autorreferenciais que se conectam formando uma sequência encadeada de células. A Figura 1 mostra um exemplo de lista flexível em que cada célula contém dois atributos elemento (int) e prox (referência para outra célula). A lista contém duas referências (ou ponteiros) chamados primeiro e último que apontam para a primeira e a última célula. A primeira célula da lista flexível é o nó cabeça, uma célula "vazia" cuja função é inicializar as referências primeiro e último. O conteúdo dessa célula é desconsiderado da lista. Por exemplo, a lista da Figura 1 contém apenas os números 1, 3, 5, 7 e 9. A existência do nó cabeça é opcional, contudo, simplifica e otimiza a implementação da lista flexível. Isso porque a existência do nó cabeça permite que os métodos de inserção tratem a inserção em uma lista vazia da mesma forma que a em uma lista contendo elementos. A implementação da lista sem o nó cabeça exige que a primeira tarefa dos métodos de inserir seja verificar se o ponteiro primeiro é igual a vazio (_null_). Nos exercícios complementares, pedimos para que você faça uma lista flexível sem usar o nó cabeça.

Outra característica da lista flexível apresentada nesta sessão é que ela é simplesmente encadeada. Assim, os elementos só podem ser acessados a partir da primeira célula e uma célula nunca consegue acessar as células anteriores a ela

![[Pasted image 20251024175357.png]]

A lista flexível apresentada nesta sessão contém os atributos _primeiro_ e _último_, métodos construtores e os métodos _InserirInicio_, _InserirFim_, _Inserir_, _RemoverIicio_, _RemoverFim_, _Remover_ e _Mostrar_. Outros métodos poderiam ser implementados como métodos de pesquisa e ordenação. A lista apresentada nesta sessão aborta o programa caso aconteça a remoção em uma lista vazia. Essa situação poderia ser tratada de forma diferente. Por exemplo, retornando uma mensagem ou um _status_ para o usuário ou programador. Outras adaptações também podem ser efetuadas em nossa lista.

Uma célula é uma classe autorreferencial que contém uma referência (ou ponteiro) para outro objeto do tipo célula. O código abaixo mostra a definição da classe célula em C#.

``` C#
class Celula {
   public int elemento; // Elemento inserido na célula.
   public Celula prox; // Aponta para a célula prox.

   /**
    * Construtor da classe.
    */
   public Celula() {
      this.elemento = 0;
      this.prox = null;
   }

   /**
    * Construtor da classe.
    * @param elemento int inserido na célula.
    */
   public Celula(int elemento) {
      this.elemento = elemento;
      this.prox = null;
   }
}
```

Os métodos de _Inserir(posição,elemento)_ e _Remover(posição)_ apresentados em nossa lista flexível fazem referência ao método _Tamanho()_ que retorna o tamanho de nossa fila flexível. Quando executamos esse método para a lista da Figura 1, ele retorna quatro que corresponde ao número de elementos existentes na mesma. Abaixo, apresentamos o código desse método que possui um contador _tamanho_ inicializado com zero e incrementado na estrutura de repetição para cada célula "útil" de nossa lista.

``` C#
 /**
    * Calcula e retorna o tamanho, em numero de elementos, da lista.
    * @return resp int tamanho
    */
   public int Tamanho() {
      int tamanho = 0;
      for(Celula i = primeiro; i != ultimo; i = i.prox, tamanho++);
      return tamanho;
   }
```

**REFLEXÃO**

Podemos encadear células para criar várias estruturas como, por exemplo, pilha, fila, lista ordenada e lista duplamente ordenada. A pilha é uma implementação onde a inserção e a remoção acontecem no início da estrutura e a referência último e o nó cabeça são desnecessários. A fila é similar a lista, tendo apenas os métodos de _InserirFim_ e _RemoverInicio_. A lista ordenada deve ter apenas um método de inserção que garante que os elementos serão inseridos na ordem desejada. Finalmente, a lista duplamente encadeada deve ter uma célula contendo duas referências _prox_ e _ant_, uma para apontar para a próxima célula (igual ao da nossa lista) e outra para apontar para a célula anterior. Os métodos de inserir e remover devem conectar e desconectar ambas as referências: _prox_ e _ant_.