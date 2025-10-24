
## NESTA SESSÃO

A ideia central do algoritmo de seleção é, em cada iteração, escolher o menor elemento da parte não ordenada para colocá-lo na parte ordenada. Essa escolha se repete, até que todos os elementos sejam inseridos na parte ordenada. Assim, ao final, teremos como resultado o vetor ordenado. Abaixo pode ser visto uma pequena animação que apresenta o funcionamento do algoritmo

![[número 1.gif]]

Como todo algoritmo de ordenação, o Algoritmo de seleção efetua comparações e movimentações de dados em memória primária para alcançar o seu objeto. Dependendo do tamanho do vetor, essas operações podem demandar bastante tempo.

**REFLEXÃO**

Nesta seção podemos observar que o custo em **comparações** para o algoritmo de Seleção é sempre n² independente da configuração da base de dados. Nas seções a seguir vamos discutir e apresentar soluções menos custosas.