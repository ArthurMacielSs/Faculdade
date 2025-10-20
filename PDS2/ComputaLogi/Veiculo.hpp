#ifndef VEICULO_HPP
#define VEICULO_HPP

#include <iostream>


class Veiculo
{
private:
   std::string _placa;
   int _ano;
   int _capacidade_kg;

public:

  
    std::string placa();// — retorna a placa do veiculo.
    int ano(); //— retorna o ano do veiculo.
    int capacidade_kg(); //— retorna a capacidade em kg do veiculo.
    virtual ~Veiculo();// — destrutor; deve imprimir Destrutor Veiculo.
    virtual std::string tipo() = 0;// — retorna o tipo (ex.: "Carro", "Moto", "Caminhao").
    virtual void print_info() = 0; //— imprime o prefixo comum (nesta ordem):
   // Tipo: <tipo>, Placa: <placa>, Ano: <ano>, Capacidade: <capacidade>,
    //Obs.: as derivadas complementam com o seu campo especifico logo após esse prefixo.
    virtual double custo_viagem(double km, double carga_kg);// — calcula o custo de uma viagem conforme a derivada.

};

#endif
