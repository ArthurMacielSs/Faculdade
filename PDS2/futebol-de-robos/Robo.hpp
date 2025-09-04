#ifndef ROBO_HPP
#define ROBO_HPP

#include "Ponto2D.hpp" // Inclui a definição de Ponto2D

struct Robo {
    // --- Membros ---
    double _energia;
    bool _com_bola;
    int id;
    Ponto2D position;

    Robo(int i, const Ponto2D& pos, bool bol);

    void mover(double v, double th, double t);

    double calcular_distancia(Robo* robo);

    Robo* determinar_robo_mais_proximo(Robo** naves, int n);

    void passar_bola(Robo** time, int n);

    void imprimir_status();
};

#endif