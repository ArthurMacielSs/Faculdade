#include "Ponto2D.hpp"
#include <cmath> // Para sqrt e pow

// Implementação do construtor padrão
Ponto2D::Ponto2D() : px(0), py(0) {}

// Implementação do construtor com parâmetros
Ponto2D::Ponto2D(double x, double y) : px(x), py(y) {}

// Implementação da função de distância
double Ponto2D::calcular_distancia(Ponto2D* ponto) {
    return sqrt(pow(this->px - ponto->px, 2) + pow(this->py - ponto->py, 2));
}