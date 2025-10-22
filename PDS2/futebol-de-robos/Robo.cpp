#include "Robo.hpp" 
#include <iostream>
#include <cmath>
#include <limits> // Para std::numeric_limits

Robo::Robo(int i, Ponto2D pos, bool bol) : 
    _energia(100), 
    _com_bola(bol), 
    id(i), 
    position(pos) 
{}

void Robo::mover(double v, double th, double t) {
    double vx = v * cos(th); 
    double vy = v * sin(th); 
    double desloc_x = vx * t;
    double desloc_y = vy * t;
    
    this->position.px += desloc_x;
    this->position.py += desloc_y;
    
    double distancia_percorrida = sqrt(pow(desloc_x, 2) + pow(desloc_y, 2));
    this->_energia -= distancia_percorrida;

    if (this->_energia < 0) {
        this->_energia = 0;
    }
}

double Robo::calcular_distancia(Robo* robo) {
    return this->position.calcular_distancia(&robo->position);
}

Robo* Robo::determinar_robo_mais_proximo(Robo** naves, int n) {
    Robo* robo_mais_proximo = nullptr;
    double menor_distancia = std::numeric_limits<double>::max();

    for (int i = 0; i < n; i++) {
        // Pula a verificação se o robô for ele mesmo
        if (naves[i]->id == this->id) {
            continue;
        }

        double distancia_atual = this->calcular_distancia(naves[i]);
        if (distancia_atual < menor_distancia) {
            menor_distancia = distancia_atual;
            robo_mais_proximo = naves[i];
        }
    }
    return robo_mais_proximo;
}

void Robo::passar_bola(Robo** time, int n) {
    if (this->_com_bola) {
        Robo* robo_alvo = this->determinar_robo_mais_proximo(time, n);
        if (robo_alvo != nullptr) { // Verifica se encontrou um robô
            this->_com_bola = false;
            robo_alvo->_com_bola = true;
        }
    } else {
        std::cout << "Estou sem a bola!" << std::endl;
    }
}

void Robo::imprimir_status() {
    std::cout << this->id << "\t" 
              << this->position.px << "\t" 
              << this->position.py << "\t" 
              << this->_com_bola << "\t" 
              << this->_energia << std::endl;
}