#include "Veiculo.hpp"
#include "Moto.hpp"
#include <iostream>


    Moto::Moto(std::string placa, int ano, int capacidade_kg, int cilindradas) : Veiculo(placa, ano, capacidade_kg){
        this->_cilindradas=cilindradas;
            
    }
    std::string Moto::tipo() {
        return "Moto";

    } 
    void Moto::print_info() {
        Veiculo::print_info();
         std::cout<<"Cilindradas: "<<_cilindradas;

    } 
    double Moto::custo_viagem(double km, double carga_kg) {
        double c1, c2;
        c1=0.8;
        c2=25;
        return c1*km + c2 * carga_kg;
    } 
    Moto::~Moto(){
        Veiculo::~Veiculo();
        std::cout<<"Destrutor Moto.";
    }