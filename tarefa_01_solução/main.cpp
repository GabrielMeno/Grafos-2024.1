/*
 * Tarefa 01 - Grafo - Listas de Adjacencia
 *
 * GEN254 - Grafos - 2024/1
 *
 * Nome:      Gabriel Henrique Menoncin
 * Matricula: 2121101065
 * 
 * Nome:      José Vítor Tessaro de Bortoli
 * Matricula: 2121101041
 */

#include <iostream>
#include "Grafo.h"

int main() {
    int num_vertices, num_operacoes;
    std::cin >> num_vertices >> num_operacoes;

    // Criando um objeto da classe Grafo
    Grafo grafo(num_vertices);

    char operacao;
    for (int i = 0; i < num_operacoes; ++i) {
        std::cin >> operacao;

        // Verificando a operação a ser realizada
        if (operacao == 'I') { // Inserir aresta
            int v1, v2;
            std::cin >> v1 >> v2;
            Aresta nova_aresta(v1, v2);
            grafo.insere_aresta(nova_aresta);
        } else if (operacao == 'R') { // Remover aresta
            int v1, v2;
            std::cin >> v1 >> v2;
            Aresta aresta_remover(v1, v2);
            grafo.remove_aresta(aresta_remover);
        } else if (operacao == 'E') { // Obter número de arestas
            std::cout << grafo.num_arestas() << std::endl;
        } else if (operacao == 'Q') { // Verificar se um conjunto de vértices é uma clique
            int N;
            std::cin >> N;
            int conjuntoVertices[N];
            for (int j = 0; j < N; ++j)
                std::cin >> conjuntoVertices[j];
            if (grafo.eh_clique(N, conjuntoVertices))
                std::cout << "SIM" << std::endl;
            else
                std::cout << "NAO" << std::endl;
        } else if (operacao == 'C') { // Verificar se existe um caminho restrito entre dois vértices
            int X, Y, W, Z;
            std::cin >> X >> Y >> W >> Z;
            if (grafo.existe_caminho_restrito(X, Y, W, Z))
                std::cout << "SIM" << std::endl;
            else
                std::cout << "NAO" << std::endl;
        } else if (operacao == 'P') { // Imprimir os graus dos vértices
            grafo.imprime_graus();
        }
    }

    return 0;
}
