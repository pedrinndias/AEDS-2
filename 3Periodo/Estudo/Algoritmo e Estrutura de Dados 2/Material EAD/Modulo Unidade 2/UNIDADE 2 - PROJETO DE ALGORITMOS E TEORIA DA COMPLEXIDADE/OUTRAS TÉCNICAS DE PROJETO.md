## NESTA SESSÃO

Esta sessão de estudos apresenta e detalha mais três técnicas para o projeto de algoritmos. As estratégias apresentadas são: **estratégias gulosa (_greedy approach_), de retrocesso (_backtracking_) e a programação dinâmica.** Cada uma delas está detalhada a seguir.

---

**ESTRATÉGIAS DE GULOSAS**

As estratégias gulosas de projeto de algoritmos, também conhecidas como algoritmos vorazes ou _greedy algorithms_ em inglês, consistem em heurísticas utilizadas para resolver problemas de otimização. Em cada etapa do processo, essas abordagens fazem escolhas localmente ótimas, com a expectativa de que, em conjunto, essas escolhas levem a uma solução global também ótima. Embora essas técnicas sejam atraentes devido à simplicidade no projeto e implementação, não oferecem garantia de encontrar a solução ótima em todos os casos. No entanto, são amplamente aplicadas em situações em que a busca pela solução ótima é impraticável devido a limitações de tempo ou recursos.

Um exemplo clássico da aplicação das estratégias gulosas é o algoritmo guloso para o Problema do Caixeiro Viajante, que tem como objetivo determinar o menor caminho que percorre todos os vértices de um grafo, retornando ao vértice inicial. Encontrar a solução ótima exigiria testar todas as possíveis rotas, levando a uma complexidade de tempo exponencial. Em contraste, o algoritmo guloso faz escolhas locais, selecionando em cada etapa o vértice vizinho mais próximo e ainda não visitado. Embora não garanta a solução ótima, sua simplicidade permite que seja executado em tempo razoável, resultando em uma complexidade de tempo quadrática. Além do Problema do Caixeiro Viajante, outros exemplos de algoritmos gulosos incluem a solução gulosa para o problema da mochila, o Algoritmo de Prim para encontrar a Árvore Geradora Mínima e o Algoritmo de Dijkstra para encontrar o caminho mínimo em um grafo ponderado. Especificamente, os algoritmos de Prim e Dijkstra são exemplos de estratégias gulosas que garantem a solução ótima para os problemas que se propõem a resolver.

Uma característica marcante dos algoritmos gulosos é sua abordagem sem retrocessos, o que significa que suas escolhas são irrevogáveis. Essa característica, aliada à eficiência em termos de tempo e recursos, torna os algoritmos gulosos uma opção atraente para resolver problemas de otimização em diversas áreas. Embora possam não alcançar a solução global ótima, eles são amplamente utilizados em aplicações práticas, frequentemente produzindo soluções suficientemente boas para atender a necessidades específicas. Além disso, esses algoritmos podem ser combinados com outras técnicas de otimização ou estratégias de resolução de problemas para a obtenção de soluções mais refinadas.

---

**ESTRATÉGIAS DE RETROCESSO (_BACKTRACKING_)**

O _backtracking_ é uma técnica aplicada na resolução de problemas combinatórios ou de otimização, nos quais buscamos uma solução em um conjunto de possibilidades. Essa abordagem consiste em refinar a busca exaustiva, eliminando o custo de explorar soluções descartáveis. O processo inicia com uma solução parcial e, em seguida, testa cada possível extensão dessa solução, retrocedendo quando uma extensão não leva a uma solução válida. Um exemplo de aplicação do _backtracking_ é mostrar os números binários de quatro dígitos que têm somente um dígito igual a 1. A busca exaustiva testa todas as 16 combinações possíveis e o _backtracking_ retrocede quando uma solução parcial tem mais de uma ocorrência do dígito um. Outro caso é o Problema do Caixeiro Viajante, no qual um algoritmo com _backtracking_ evita testar soluções parciais quando elas se tornam maiores que a solução mínima conhecida, otimizando o processo. O _backtracking_ é apropriado para problemas que possuem a propriedade de soluções candidatas parciais, construídas gradativamente e avaliadas a cada passo. É importante que testes rápidos possam determinar se uma solução parcial pode ser completada até uma solução válida.

O _backtracking_ é realizado construindo soluções adicionando um componente de cada vez e retrocedendo quando necessário. Algumas de suas aplicações incluem problemas de satisfação de restrições (como palavras-cruzadas), _parsers_ e linguagens de programação lógica. Entre suas vantagens estão a simplicidade para resolver problemas complexos e o suporte oferecido por linguagens de programação lógica. Entretanto, ele pode exigir muita memória para problemas grandes, e a redução de retrocessos se aproxima do custo da busca exaustiva. Por vezes, é necessário incorporar heurísticas, com o custo da perda de garantia de otimalidade. Mesmo assim, o _backtracking_ é uma técnica poderosa e eficiente para resolver diversos problemas de otimização e combinatórios.

---

**PROGRAMAÇÃO DINÂMICA**

A Programação Dinâmica é uma técnica baseada em tabelas e amplamente aplicada na resolução de problemas combinatórios ou de otimização. Ela é especialmente adequada quando a solução de um problema pode ser calculada a partir de soluções anteriormente calculadas e memorizadas para subproblemas. Esses subproblemas são sobrepostos e, juntos, compõem o problema original. A aplicabilidade da Programação Dinâmica é encontrada em problemas que possuem a propriedade de subestrutura ótima, onde a solução ótima para o problema global contém soluções ótimas para seus subproblemas, e também na superposição de subproblemas, onde um algoritmo reexamina o mesmo problema várias vezes.

A eficiência da Programação Dinâmica é influenciada pelo tamanho dos subproblemas. Se o somatório do tamanho dos subproblemas é da ordem de 𝚯(n), é provável que a complexidade seja polinomial. Por outro lado, se a divisão do problema de tamanho n resulta em n subproblemas de tamanho n-1 cada um, a complexidade é provável que seja exponencial. Um exemplo clássico de aplicação da Programação Dinâmica é a otimização do cálculo do número de Fibonacci de forma recursiva, onde a técnica evita o estouro do número de chamadas ao recalcular valores conhecidos, tornando o algoritmo mais eficiente. Ao usar a programação dinâmica, é possível reduzir drasticamente o tempo de execução de algoritmos que, de outra forma, seriam inviáveis de serem resolvidos de maneira eficiente.

---

**CONSIDERAÇÕES FINAIS DESTA SESSÃO DE ESTUDOS**

1. Discutimos as estratégias gulosas de projeto de algoritmos. Elas consistem em uma classe de abordagens heurísticas que fazem escolhas localmente ótimas em cada etapa, na esperança de alcançar uma solução global ótima. Embora não garantam a solução ideal, esses algoritmos são amplamente aplicados em problemas de otimização onde a busca pela solução ótima é impraticável devido a restrições de tempo ou recursos.
2. Apresentamos a técnica de _backtracking_ que consiste em refinar a busca exaustiva, eliminando soluções descartáveis, retrocedendo quando necessário. Ele é usado em problemas que possuem soluções candidatas parciais e é aplicado em diversas áreas, como problemas de satisfação de restrições e o Problema do Caixeiro Viajante. Embora seja poderoso e eficiente, pode exigir muita memória e não garante a solução ótima para todos os casos.
3. Mostramos a programação dinâmica, uma técnica baseada em solucionar subproblemas sobrepostos, armazenando seus resultados em tabelas para evitar recálculos.

Compreenda e retorne ao texto, vídeos e exercícios sempre que necessário. Até a próxima sessão de estudos.

**REFLEXÃO**

As técnicas de projeto de algoritmos apresentadas nesta sessão de estudos podem ser levadas para nossa vida cotidiana e profissional, onde enfrentamos escolhas e desafios diários. A estratégia gulosa nos ensina a tomar decisões que parecem benéficas a curto prazo, buscando soluções ótimas no momento presente, enquanto o retrocesso nos relembra que é preciso aceitar e aprender com as escolhas que não nos levaram aos resultados desejados, possibilitando ajustes de rumo. A programação dinâmica nos mostra que ao reconhecer e reutilizar lições do passado, superando desafios e construindo sobre bases sólidas, alcançamos progresso e eficiência duradouros em nossa jornada pessoal e profissional.