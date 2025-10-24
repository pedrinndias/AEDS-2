
## NESTA SESSÃO

A **Teoria da Complexidade** é uma área da Computação que estuda a dificuldade dos problemas computacionais e classifica os algoritmos de acordo com sua eficiência. A maioria dos problemas computacionais podem ser divididos em dois grupos principais: os que têm solução polinomial, com algoritmos eficientes cuja complexidade de tempo é representada por funções polinomiais, como a pesquisa binária e a ordenação; e os que não se conhece uma solução polinomial. O segundo grupo contém algoritmos com soluções não-polinomiais, menos eficientes e muitas vezes exponenciais, como os problemas do Caixeiro Viajante e da Mochila. Os algoritmos polinomiais resultam de uma compreensão profunda da estrutura do problema, permitindo estratégias eficientes para a resolução. Algoritmos exponenciais geralmente derivam de abordagens de força bruta. A distinção entre problemas tratáveis e intratáveis está relacionada à existência de algoritmos polinomiais eficientes para sua resolução. Os problemas tratáveis possuem esses algoritmos e os intratáveis não têm algoritmos polinomiais conhecidos. Isso não implica que os intratáveis sejam impossíveis de resolver, apenas que não se conhece um algoritmo de tempo polinomial para eles.

Um conceito importante na Teoria da Complexidade é o de algoritmo não determinístico que são algoritmos capazes de fazer escolhas "mágicas" entre opções, permitindo encontrar soluções mais rapidamente em alguns casos. Esses algoritmos têm complexidade de tempo constante 𝚯(1) porque podem "adivinhar" a solução correta em uma única etapa. O conceito de algoritmo não determinístico é apenas teórico e não preocupamos se é ou não possível implementá-los em um computador. Outro conceito importante é o de problemas de decisão, também conhecidos como problemas "Sim/Não", têm respostas binárias e são fundamentais na Teoria da Complexidade para analisar e classificar problemas de forma estruturada.

---

**CLASSES P E NP**

As classes P (_Polynomial-time Algorithms_) e NP (_Nondeterministic Polinomial Time Algorithms_) são importantes na Teoria da Complexidade. A Classe P é composta por problemas resolvidos por algoritmos determinísticos em tempo polinomial, enquanto a Classe NP inclui problemas resolvidos por algoritmos não-determinísticos em tempo polinomial ou verificados por algoritmos determinísticos em tempo polinomial.

---

**P = NP ou P ≠ NP?**

A questão fundamental na Teoria da Complexidade é determinar se a classe P é igual a NP ou se são distintas (P ≠ NP). Sabemos que algoritmos determinísticos são apenas um caso especial de algoritmos não-determinísticos, o que nos permite afirmar que P está contido em NP (P ⊂ NP). No entanto, a incerteza reside em saber se existem algoritmos determinísticos polinomiais para todos os problemas em NP. Provar que P ≠ NP parece demandar técnicas ainda desconhecidas, e essa é uma das grandes questões em aberto na Ciência da Computação e um dos Problemas do Milênio estabelecidos pelos matemáticos.

Descrever a classe NP é uma tarefa complexa, mas acredita-se que ela é muito maior do que P. Essa diferença é relevante, pois existem muitos problemas práticos em NP cuja pertinência à classe P é desconhecida, e não possuímos algoritmos determinísticos eficientes para resolvê-los. Entretanto, se conseguirmos provar que um problema não pertence a P, isso significa que não precisamos procurar uma solução eficiente para ele, embora a esperança de descobrir um algoritmo eficiente sempre permaneça. A maioria dos pesquisadores não acredita que P seja igual a NP, embora haja um esforço considerável para provar o contrário. Atualmente, essa questão continua em aberto, desafiando a comunidade científica a buscar respostas definitivas.

O vídeo abaixo introduz a discussão se P = NP ou P ≠ NP. Acesse o conjunto de [Slides](https://pucminas.instructure.com/courses/249589/files/14739556?wrap=1 "unidade02h-teoriaComplexidade.pdf")[](https://pucminas.instructure.com/courses/249589/files/14739556/download?download_frd=1)

[Download Slides](https://pucminas.instructure.com/courses/249589/files/14739556/download?download_frd=1) utilizado nesse vídeo e nos demais apresentados nesta sessão de estudos.

---

**CLASSE NP-COMPLETO**

A Teoria da Complexidade estuda a dificuldade computacional dos problemas e, nesse contexto, a classe NP-Completo é relevante. Suponha que alguém descubra um algoritmo determinístico que resolva em tempo polinomial um problema que não pertencia à classe P. Isso não implica em P = NP, apenas indica que o problema não havia sido corretamente estudado. Existe um conjunto de problemas em NP, denominados NP-Completo (NPC), para os quais, se algum deles for provado estar em P, implicará em P = NP. O primeiro problema a ser identificado como NPC foi a Satisfabilidade (SAT). Um problema é considerado NP-Completo se estiver em NP e for NP-Difícil, ou seja, quando um problema conhecido como NPC pode ser polinomialmente transformado nele. Para comprovar que um problema é NP-Completo, é necessário mostrar que está em NP e, adicionalmente, que é NP-Difícil por meio de redução polinomial a partir de outro problema NPC. Cook apresentou o Teorema de Cook, que estabelece que a Satisfabilidade é NP-Completo, e a transitividade da redução polinomial garante que se um problema tem solução polinomial, então a Satisfabilidade também a possui. Assim, a classe NP-Completo é fundamental para compreender a relação entre P e NP e a complexidade dos problemas computacionais.

---

**CONCLUSÕES**

A Teoria da Complexidade abrange as classes P, NP, NP-Difícil e NPC. Ainda não existe prova concreta de que P é diferente de NP, e caso alguém encontre um algoritmo polinomial para resolver qualquer problema em NPC, isso implicaria que todos os problemas em NP também teriam solução polinomial, resultando em P igual a NP. Da mesma forma, se for comprovado que algum problema em NP não possui solução polinomial, então todos os problemas em NPC também não a possuiriam, indicando que P seria diferente de NP. Contudo, até o momento, não há consenso de que NP é igual a P. Embora seja um problema em aberto, o estudo de NPC tem relevância prática ao fornecer um método para determinar se um novo problema é fácil ou difícil de ser resolvido, permitindo que pesquisadores continuem buscando algoritmos eficientes e soluções mais adequadas para os desafios computacionais.

O vídeo abaixo termina essa introdução à teoria da complexidade discutindo as consequências da classe NP-Complexo. Acesse o conjunto de [Slides](https://pucminas.instructure.com/courses/249589/files/14739556?wrap=1 "unidade02h-teoriaComplexidade.pdf")[](https://pucminas.instructure.com/courses/249589/files/14739556/download?download_frd=1)

[Download Slides](https://pucminas.instructure.com/courses/249589/files/14739556/download?download_frd=1) utilizado nesse vídeo e nos demais apresentados nesta sessão de estudos.

---

**CONSIDERAÇÕES FINAIS DESTA SESSÃO DE ESTUDOS**

1. A Teoria da Complexidade classifica problemas computacionais em dois grupos: os com solução polinomial e algoritmos eficientes, e os sem solução polinomial conhecida, com algoritmos menos eficientes, como o Caixeiro Viajante. A distinção entre tratáveis e intratáveis depende da existência de algoritmos polinomiais eficientes para resolvê-los, mas a intratabilidade não significa que sejam impossíveis de resolver.
    
2. A Classe P é composta por problemas resolvidos por algoritmos determinísticos em tempo polinomial, enquanto a Classe NP inclui problemas resolvidos por algoritmos não-determinísticos em tempo polinomial ou verificados por algoritmos determinísticos em tempo polinomial. 
    
3. A Teoria da Complexidade busca determinar se P é igual a NP ou distintos, sendo uma questão em aberto na Ciência da Computação.
    
4. NP é consideravelmente maior que P, envolvendo problemas práticos sem solução determinística eficiente, mas a igualdade entre P e NP é amplamente desacreditada e permanece uma incógnita desafiadora.
    
5. A classe NP-Completo é crucial na Teoria da Complexidade, abrangendo problemas que podem ser polinomialmente transformados entre si, e sua compreensão é essencial para entender a relação entre P e NP e a complexidade dos problemas computacionais. O primeiro problema identificado como NP-Completo foi a Satisfabilidade (SAT), e provar que um problema pertence a essa classe requer demonstrar que está em NP e é NP-Difícil através de redução polinomial a partir de outro problema NPC.
    

Compreenda e retorne ao texto, vídeos e exercícios sempre que necessário. Até a próxima sessão de estudos.

**REFLEXÃO**

A Teoria da Complexidade nos convida a uma reflexão sobre os limites do conhecimento humano e a complexidade intrínseca dos problemas enfrentados em diversas áreas. Essa teoria nos lembra da importância da humildade intelectual, da busca por abordagens criativas e colaborativas, e da priorização de desafios mais abordáveis. Reconhecendo que nem todos os problemas têm soluções simples, somos incentivados a perseverar e buscar sabedoria na busca de soluções que possam impactar positivamente o mundo complexo em que vivemos.