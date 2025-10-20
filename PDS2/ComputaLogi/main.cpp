#include <iostream>
#include <string>
#include <sstream>
#include "Frota.hpp"

int main() {
    Frota _frota;
    std::string _linha;
    std::string _placa;
    int _ano;
    int _capaciade_kg;
    int _indice;
    

    while (std::getline(std::cin, _linha)) {
        if (_linha.empty()) continue;
        std::istringstream iss(_linha);
        std::string _comando;
        iss >> _comando;

        if (_comando == "add_c") {
            int _portas;
            std::getline(std::cin,_placa);
            std::cin >> _ano;
            std::cin >> _capaciade_kg;
            std::cin >> _portas;
            _frota.add_carro(_placa,_ano,_capaciade_kg,_portas);
        }

        else if (_comando == "add_m") {
            int _cilindradas;
            std::getline(std::cin,_placa);
            std::cin >> _ano;
            std::cin >> _capaciade_kg;
            std::cin>>_cilindradas;
            _frota.add_moto(_placa,_ano,_capaciade_kg,_cilindradas);

        }
        else if (_comando == "add_k") {
            int _num_eixos;
            std::getline(std::cin,_placa);
            std::cin >> _ano;
            std::cin >> _capaciade_kg;
            std::cin>>_num_eixos;
            _frota.add_caminhao(_placa,_ano, _capaciade_kg, _num_eixos);
        }

        else if (_comando == "list") {
           _frota.list();
        }
        else if (_comando == "find") {
            std::cin>> _indice;
            _frota.find(_indice);
        }
        else if (_comando == "rm") {
            std::cin>> _indice;
            _frota.remover(_indice);
            
        }
        else if (_comando == "viagem") {
            int _km;
            int _carga_kg;
            std::cin>> _indice;
            _frota.viagem(_indice,_km, _carga_kg);
          
        }
    }

    return 0;
}