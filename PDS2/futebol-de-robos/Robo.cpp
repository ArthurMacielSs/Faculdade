#include "Robo.hpp" 
#include <iostream>  
#include <cmath>


struct Robo {
    // --- Membros ---
    double _energia;
    bool _com_bola;
    int id;
    Ponto2D position;
Robo(int i, const Ponto2D& pos, bool bol) : _energia(100), _com_bola(bol),id(i), position(pos){}

void mover(double v, double th, double t) {

    double vx = v * cos(th); 
    double vy = v * sin(th); 
    double desloc_x = vx * t;
    double desloc_y = vy * t;
    this->position.px += desloc_x;
    this->position.py += desloc_y;
    double distancia = v * t;
    

    if (this->_energia<=0){
        this->_energia=0;
    }
    else {
        this->_energia-=distancia;
    }
}

double calcular_distancia(Robo* robo) {
    double distancia = this->position.calcular_distancia(&robo->position);
    return distancia;
}

Robo* determinar_robo_mais_proximo(Robo** naves, int n) {
    Robo* teste = nullptr;
    double distancia1=  this->calcular_distancia(naves[0]);
    double distancia2 = distancia1;
    double menordistancia=0;
    
    for(int i=0; i<n; i++){
    if(naves[i]->id==this->id){
        continue;
    }
    else{
       distancia1 = this->calcular_distancia(naves[i]);
       if(distancia1<distancia2){
        menordistancia= distancia1;
        teste = &*naves[i];
       }
       distancia2= distancia1;

       

    }
    }
    return teste;
    
}

void passar_bola(Robo** time, int n) {
    Robo *teste;
    for(int i=0; i<n; i++){

        if(this->_com_bola){
           teste=determinar_robo_mais_proximo(time, n);
           this->_com_bola= false;
           teste->_com_bola = true;

        }
        else {
            cin >> "Estou sem a bola!\n";
        }
    }

  
}

void imprimir_status() {
 
    cin >> id>> "\t">> this->position.px>> "\t" >>this->position.py >> "\t" >> this->_energia>> "\n";
}
};