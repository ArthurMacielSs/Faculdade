#ifndef CARRO_HPP
#define CARRO_HPP

#include "Veiculo.hpp"

class Carro : public Veiculo
{
private:
   int _num_portas;

public:
  
    std::string tipo() override; //— deve retornar "Carro".
    void print_info() override; //— chama Veiculo::print_info() e imprime em seguida:
    //Portas: <num_portas> 
   // Resultado final:
   // Tipo: <tipo>, Placa: <placa>, Ano: <ano>, Capacidade: <capacidade>, Portas: <num_portas>
    double custo_viagem(double km, double carga_kg) override; //— retorna 1.20*km + 40.0*carga_kg.

  
    
};

#endif
