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

#include "Grafo.h"
#include <iostream>

Grafo::Grafo(int num_vertices) : num_vertices_(num_vertices), num_arestas_(0) {
    // Inicializando a matriz de adjacência com todas as entradas como falso
    matriz_adjacencia_.resize(num_vertices, std::vector<bool>(num_vertices, false));
}

Grafo::~Grafo() {}

int Grafo::num_arestas() {
    return num_arestas_;
}

void Grafo::insere_aresta(Aresta e) {
    // Verificando se a aresta já existe no grafo
    if (!matriz_adjacencia_[e.v1][e.v2]) {
        matriz_adjacencia_[e.v1][e.v2] = true;
        matriz_adjacencia_[e.v2][e.v1] = true;
        ++num_arestas_;
    }
}

void Grafo::remove_aresta(Aresta e) {
    // Verificando se a aresta existe no grafo
    if (matriz_adjacencia_[e.v1][e.v2]) {
        matriz_adjacencia_[e.v1][e.v2] = false;
        matriz_adjacencia_[e.v2][e.v1] = false;
        --num_arestas_;
    }
}

bool Grafo::eh_clique(int N, int* conjuntoVertices) {
    // Verificando se todos os pares de vértices no conjunto são adjacentes
    for (int i = 0; i < N; ++i) {
        for (int j = i + 1; j < N; ++j) {
            if (!matriz_adjacencia_[conjuntoVertices[i]][conjuntoVertices[j]]) {
                return false;
            }
        }
    }
    return true;
}

bool Grafo::existe_caminho_restrito(int origem, int destino, int arestaOrigem, int arestaDestino) {
    // Buscando um caminho entre origem e destino, excluindo a aresta especificada
    std::vector<bool> visitado(num_vertices_, false);
    std::vector<int> fila;
    fila.push_back(origem);
    visitado[arestaOrigem] = true;

    while (!fila.empty()) {
        int atual = fila.front();
        fila.erase(fila.begin());

        for (int i = 0; i < num_vertices_; ++i) {
            if (matriz_adjacencia_[atual][i] && !visitado[i] && !(atual == arestaOrigem && i == arestaDestino)) {
                if (i == destino) {
                    return true;
                }
                fila.push_back(i);
                visitado[i] = true;
            }
        }
    }
    return false;
}

void Grafo::imprime_graus() {
    // Calculando e imprimindo o grau de cada vértice
    for (int i = 0; i < num_vertices_; ++i) {
        int grau = 0;
        for (int j = 0; j < num_vertices_; ++j) {
            if (matriz_adjacencia_[i][j]) {
                ++grau;
            }
        }
        std::cout << i << ": " << grau << std::endl;
    }
}

