## NESTA SESSÃO

Em C#, os vetores podem ser ordenados a partir do uso do método Array.sort que implementa internamente o algoritmo Quicksort (Nas seções a seguir vamos explorar o passo-a-passo deste algoritmo). Para ilustrar o seu funcionamento, vamos começar com exemplos de ordenação com o método Array.sort.

Agora é sua vez de ordenar. Utilizando o _Array.Sort_, preencha um vetor com 20 valores inteiros e ordene. Ao final, imprima na tela o resultado desta ordenação. Veja a solução para esse [exercício](https://replit.com/@bigheadbh/ExemploOrdena01#main.cs)

[Links to an external site.](https://replit.com/@bigheadbh/ExemploOrdena01#main.cs).

Para ordenar os nossos tipos customizados, o C# disponibiliza o método _Comparison<T> Delegate_, de forma que ao implementá-lo o programador definir o critério de comparação entre dois objetos de mesmo tipo, definindo o maior e o menor deles.

De outra maneira, com a implementação da interface _IComparable_ é possível também definir critério de comparação para nossos tipos de forma que se torne possível a utilização do _Array.sort_.

Agora é sua vez!! Considerando a classe Aluno já definida em outras seções que possui nome e código de matrícula, modifique sua implementação com o uso da interface _IComparable_, de forma que você consiga executar o _Array.sort_ para ordenar um conjunto de cinco alunos pelo campo matrícula. Acompanhe a solução para essa [questão](https://replit.com/@bigheadbh/ExemploOrdena02#main.cs)

[Links to an external site.](https://replit.com/@bigheadbh/ExemploOrdena02#main.cs).

**REFLEXÃO**

Um curiosidade Interessante é lembrar que o método _Array.sort_ implementa o famoso algortimo Quicksort, uma das soluções mais conhecidas para ordenar elementos em memória primária.
