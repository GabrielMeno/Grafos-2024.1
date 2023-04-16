/*
 * Tarefa 01 - Grafo - Listas de Adjacencia
 *
 * GEN254 - Grafos - 2023/1
 *
 * Nome:      XXXX
 * Matricula: XXXX
 */

#include "Grafo.h"
#include <iostream>

Grafo::Grafo(int num_vertices) : num_vertices_(num_vertices), num_arestas_(0) {
}

int Grafo::num_arestas() {
    return num_arestas_;
}

void Grafo::insere_aresta(Aresta e) {
    if (e.v1 >= num_vertices_ || e.v2 >= num_vertices_) {
        std::cout << "Erro: aresta com vértice inexistente." << std::endl;
        return;
    }
    num_arestas_++;
}

void Grafo::remove_aresta(Aresta e) {
    if (e.v1 >= num_vertices_ || e.v2 >= num_vertices_) {
        std::cout << "Erro: aresta com vértice inexistente." << std::endl;
        return;
    }
    num_arestas_--;
}

int Grafo::grau_maximo() {
      int max_grau = 0;
    for (int i = 0; i < num_vertices_; i++) {
        int grau = 0;
        for (auto it = lista_arestas_.begin(); it != lista_arestas_.end(); it++) {
            if (it->v1 == i || it->v2 == i) {
                grau++;
            }
        }
        if (grau > max_grau) {
            max_grau = grau;
        }
    }
    return max_grau;
}

int Grafo::grau_minimo() {
    int min_grau = num_vertices_;
    for (int i = 0; i < num_vertices_; i++) {
        int grau = 0;
        for (auto it = lista_arestas_.begin(); it != lista_arestas_.end(); it++) {
            if (it->v1 == i || it->v2 == i) {
                grau++;
            }
        }
        if (grau < min_grau) {
            min_grau = grau;
        }
    }
    return min_grau;
}

void Grafo::imprime() {
    for (auto it = lista_arestas_.begin(); it != lista_arestas_.end(); it++) {
        std::cout << it->v1 << "-" << it->v2 << std::endl;
    }
}
