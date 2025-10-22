#include "Veiculo.hpp"
#include "Carro.hpp"
#include <iostream>


    Carro::Carro(std::string placa, int ano, int capacidade_kg, int num_portas) : Veiculo(placa, ano, capacidade_kg){
        this->_num_portas=num_portas;
            
    }
    std::string Carro::tipo() {
        return "Carro";

    } //— deve retornar "Carro".
    void Carro::print_info() {
        Veiculo::print_info();
         std::cout<<"Portas: "<<_num_portas;

    } 
    double Carro::custo_viagem(double km, double carga_kg) {
        double c1, c2;
        c1=1.2;
        c2=40.0;
        return c1*km + c2 * carga_kg;

    } 

       Carro::~Carro(){
        Veiculo::~Veiculo();
        std::cout<<"Destrutor Carro.";
    }

  
    
