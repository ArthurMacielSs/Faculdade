#ifndef Ponto2D_h
#define Ponto2D_h

using namespace std;

struct Ponto2D{
    double px;
    double py;

Ponto2D (double x, double y);

double calcular_distancia (Ponto2D * ponto);
};

#endif