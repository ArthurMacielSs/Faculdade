#include <iostream>
#include "Ponto2D.hpp"
#include <cmath>

using namespace std;

struct Ponto2D{
    double px;
    double py;

Ponto2D (double x, double y){
    this->px = x;
    this->py = y;
}

double calcular_distancia (Ponto2D * ponto){
    double distancia = sqrt( pow(this->px - ponto->px, 2) + pow(this->py - ponto->py, 2));

    return distancia;
}
};