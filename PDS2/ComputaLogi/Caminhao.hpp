#ifndef MOTO_HPP
#define MOTO_HPP

#include "Veiculo.hpp"

class Caminhao : public Veiculo
{
private:
   int _num_eixos;

public:
    
    Caminhao(std::string placa, int ano, int capacidade_kg, int num_eixos);
    std::string tipo() override; //— retorna "Caminhao".
    void print_info() override; //— chama Veiculo::print_info() e imprime:
    //Eixos: <num_eixos>
    //Resultado final:
   // Tipo: <tipo>, Placa: <placa>, Ano: <ano>, Capacidade: <capacidade>, Eixos: <num_eixos>
    double custo_viagem(double km, double carga_kg);// — retorna 2.50*km + 60.0*carga_kg.

    ~Caminhao();
};

#endif