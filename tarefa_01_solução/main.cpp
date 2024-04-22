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
#include <vector>
#include "Grafo.h"

int main() {
    // Variáveis para armazenar o número de vértices e o número de operações
    int num_vertices, num_operacoes;
    std::cin >> num_vertices >> num_operacoes;

    // Criando um objeto da classe Grafo com o número de vértices especificado
    Grafo grafo(num_vertices);

    // Variável para armazenar o tipo de operação a ser realizada
    char operacao;

    // Loop para processar cada operação
    for (int i = 0; i < num_operacoes; ++i) {
        std::cin >> operacao; // Lendo o tipo de operação

        if (operacao == 'I') { // Inserir aresta
            int v1, v2;
            std::cin >> v1 >> v2;
            Aresta nova_aresta(v1, v2);
            grafo.insere_aresta(nova_aresta); // Chamando o método para inserir a aresta no grafo
        } else if (operacao == 'R') { // Remover aresta
            int v1, v2;
            std::cin >> v1 >> v2;
            Aresta aresta_remover(v1, v2);
            grafo.remove_aresta(aresta_remover); // Chamando o método para remover a aresta do grafo
        } else if (operacao == 'E') { // Obter o número de arestas
            std::cout << grafo.num_arestas() << std::endl; // Chamando o método para obter o número de arestas e imprimindo o resultado
        } else if (operacao == 'Q') { // Verificar se um conjunto de vértices forma uma clique
            int N;
            std::cin >> N;
            std::vector<int> conjuntoVertices(N); // Criando um vetor para armazenar os vértices do conjunto
            for (int j = 0; j < N; ++j)
                std::cin >> conjuntoVertices[j]; // Lendo os vértices do conjunto
            // Chamando o método para verificar se o conjunto forma uma clique e imprimindo o resultado
            if (grafo.eh_clique(N, conjuntoVertices.data()))
                std::cout << "SIM" << std::endl;
            else
                std::cout << "NAO" << std::endl;
        } else if (operacao == 'C') { // Verificar se existe um caminho restrito entre dois vértices
            int X, Y, W, Z;
            std::cin >> X >> Y >> W >> Z;
            // Chamando o método para verificar se existe um caminho restrito entre os vértices especificados e imprimindo o resultado
            if (grafo.existe_caminho_restrito(X, Y, W, Z))
                std::cout << "SIM" << std::endl;
            else
                std::cout << "NAO" << std::endl;
        } else if (operacao == 'P') { // Imprimir os graus dos vértices
            grafo.imprime_graus(); // Chamando o método para imprimir os graus dos vértices
        }
    }

    return 0;
}
