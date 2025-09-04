#ifndef Robo_h
#define Robo_h

using namespace std;

struct Robo{
    double _energia;
    bool _com_bola;
    

Robo (int, Ponto2D, bool);

void mover (double v,double th, double t);

double calcular_distancia (Robo * robo);

Robo * determinar_robo_mais_proximo(Robo** naves, int n);

void passar_bola(Robo ** time, int n);

void imprimir_status();

};

#endif