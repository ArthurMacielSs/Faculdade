#include "Veiculo.hpp"
#include "Caminhao.hpp"
#include <iostream>


    Caminhao::Caminhao(std::string placa, int ano, int capacidade_kg, int num_eixos) : Veiculo(placa, ano, capacidade_kg){
        this->_num_eixos=num_eixos;
            
    }
    std::string Caminhao::tipo() {
        return "Caminhao";

    } 
    void Caminhao::print_info() {
        Veiculo::print_info();
         std::cout<<"Eixos: "<< _num_eixos;

    } 
    double Caminhao::custo_viagem(double km, double carga_kg) {
        double c1, c2;
        c1=0.8;
        c2=25;
        return c1*km + c2 * carga_kg;
    } 
    Caminhao::~Caminhao(){
        Veiculo::~Veiculo();
        std::cout<<"Destrutor Caminhao.";
    }