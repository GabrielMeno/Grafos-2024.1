**Teste de Entrada**

4 10

I 0 2

I 0 1

I 2 1

I 3 1

Q 3 0 2 1

R 2 0

E

C 0 2 1 2

E

P

**Número de vértices e número de operações: A primeira linha da entrada 4 10 indica que o grafo terá 4 vértices e que serão realizadas 10 operações no grafo.**

4 10 

**Inserir arestas: As operações I são inserções de arestas. Por exemplo, I 0 2 indica que uma aresta será inserida entre o vértice 0 e o vértice 2.**

I 0 2

I 0 1

I 2 1

I 3 1


**Verificar se um conjunto de vértices forma uma clique: A operação Q seguida por um número N e N vértices indica que o programa deve verificar se o conjunto de vértices especificado forma uma clique.**

Q 3 0 2 1

**Remover arestas: As operações R são remoções de arestas. Por exemplo, R 2 0 indica que a aresta entre o vértice 2 e o vértice 0 será removida.**

R 2 0

**Obter o número de arestas: A operação E retorna o número de arestas no grafo.**

E

**Verificar se existe um caminho restrito entre dois vértices: A operação C seguida pelos vértices origem e destino, e pelas arestas que devem ser evitadas, verifica se há um caminho entre os vértices origem e destino que não inclua as arestas especificadas.**

C 0 2 1 2


E


**Imprimir os graus dos vértices do grafo: A operação P imprime os graus dos vértices do grafo.**

P = Qualquer letra diferente de P não vai funcionar pq não esta no switchCase 



**A saida para essa entrada fica:**

SIM

3

NAO

3

0: 1

1: 3

2: 1

3: 1


Na operação de verificar se um conjunto de vértices forma uma clique (Q), "SIM" indica que o conjunto de vértices forma uma clique, ou seja, todos os vértices estão conectados entre si. "NAO" indica que o conjunto de vértices não forma uma clique.
Na operação de verificar se existe um caminho restrito entre dois vértices (C), "SIM" indica que existe um caminho entre os vértices especificados que não passa pelas arestas especificadas. "NAO" indica que não existe tal caminho restrito.

Isso indica que o conjunto de vértices {0, 2, 1} forma uma clique, o número de arestas no grafo é 3, não há um caminho restrito entre os vértices 0 e 2 que evite a aresta entre os vértices 1 e 2, e os graus dos vértices são conforme listados.
