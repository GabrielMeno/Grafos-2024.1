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

#ifndef GRAFO_H
#define GRAFO_H

#include "Aresta.h"
#include <vector>

class Grafo {
public:
    Grafo(int num_vertices); // Construtor
    ~Grafo(); // Destrutor
    int num_arestas(); // Retorna o número de arestas no grafo
    void insere_aresta(Aresta e); // Insere uma aresta no grafo
    void remove_aresta(Aresta e); // Remove uma aresta do grafo
    bool eh_clique(int N, int* conjuntoVertices); // Verifica se um conjunto de vértices é uma clique
    bool existe_caminho_restrito(int origem, int destino, int arestaOrigem, int arestaDestino); // Verifica se existe um caminho restrito entre dois vértices
    void imprime_graus(); // Imprime os graus dos vértices do grafo
private:
    int num_vertices_; // Número de vértices no grafo
    int num_arestas_; // Número de arestas no grafo
    std::vector<std::vector<bool>> matriz_adjacencia_; // Matriz de adjacência para representar o grafo
};

#endif /* GRAFO_H */

