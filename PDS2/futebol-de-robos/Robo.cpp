#include <iostream>
#include "Ponto2D.hpp"

using namespace std;

struct Robo{
    double _energia;
    bool _com_bola;
    int id;
    Ponto2D position;
    

Robo (int i, Ponto2D ponto, bool bol){
    this->id= i;
    this->_com_bola= bol;
    this->position.px=ponto.px;
    this->position.py=ponto.py;
    this->_energia=100;
};

void mover (double v,double th, double t){


};

double calcular_distancia (Robo * robo){
    double dist = this->position.calcular_distancia(robo->position);
    return dist;
};

Robo * determinar_robo_mais_proximo(Robo** naves, int n){

};

void passar_bola(Robo ** time, int n){

}

void imprimir_status(){

};

};