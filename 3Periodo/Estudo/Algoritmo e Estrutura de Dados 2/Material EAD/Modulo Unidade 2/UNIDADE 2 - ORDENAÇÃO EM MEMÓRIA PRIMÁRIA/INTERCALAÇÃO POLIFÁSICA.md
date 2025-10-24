## NESTA SESSÃO

A ordenação em memória secundária (ou externa) consiste em ordenar arquivos de tamanho maior que a memória primária disponível. Desta forma, as soluções propostas precisam se comportar diferente fazendo uso de memória primária como auxiliar.

O método mais importante e conhecido é o de ordenação por intercalação. Nele os blocos são combinados e ordenados em um único bloco e a intercalação é utilizada como operação auxiliar, complementando todo o processo. Nele, o arquivo é quebrado em blocos, ordenado o bloco na memória principal e em seguida intercalados.

**REFLEXÃO**

A grande diferença da ordenação em memória primária e secundária está na quantidade de itens que conseguimos ordenar. Quando os registros estão em arquivos é possível organizar e ordenar um número maior de elementos. Nesta seção vimos um pouco sobre ordenação polifásica, uma das diversas técnicas que existem para ordenação.