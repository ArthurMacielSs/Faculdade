#include "Veiculo.hpp"
#include <iostream>

    Veiculo::Veiculo(std::string placa, int ano, int capacidade_kg){
        this->_placa= placa;
        this->_ano=ano;
        this->_capacidade_kg= capacidade_kg;
    }

    std::string Veiculo::placa()
    {
        return _placa;

    } // — retorna a placa do veiculo.
    int Veiculo::ano()
    {
        return _ano;
    } // — retorna o ano do veiculo.
    int Veiculo::capacidade_kg()
    {
        return _capacidade_kg;

    } // — retorna a capacidade em kg do veiculo.
    Veiculo::~Veiculo()
    {
       std::cout<<"Destrutor Veiculo";
    } // — destrutor; deve imprimir Destrutor Veiculo.
    void Veiculo::print_info() 
    {
        std::cout<<"Tipo: " << tipo();
        std::cout<<"Placa: "<< placa();
        std::cout<<"Ano: " <<ano();
        std::cout<<"Capacidade: "<< capacidade_kg();

    } 

    