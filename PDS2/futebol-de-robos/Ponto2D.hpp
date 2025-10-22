#ifndef PONTO2D_HPP
#define PONTO2D_HPP

struct Ponto2D {
    double px;
    double py;

    // Construtor padrão adicionado para cumprir a "Dica 1"
    Ponto2D(); 

    // Construtor que recebe as coordenadas
    Ponto2D(double x, double y);

    double calcular_distancia(Ponto2D* ponto);
};

#endif