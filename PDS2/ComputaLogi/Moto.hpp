#ifndef MOT_HPP
#define MOT_HPP

#include "Veiculo.hpp"

class Moto : public Veiculo
{
private:
   int _cilindradas;

public:
    
    Moto(std::string placa, int ano, int capacidade_kg, int cilindradas);
    std::string tipo() override; //— retorna "Moto".
    void print_info() override; //— chama Veiculo::print_info() e imprime:
   // Cilindradas: <cilindradas>
   // Resultado final:
    //Tipo: <tipo>, Placa: <placa>, Ano: <ano>, Capacidade: <capacidade>, Cilindradas: <cilindradas>
    double custo_viagem(double km, double carga_kg); //— retorna 0.80*km + 25.0*carga_kg.
    ~Moto() override;
};

#endif
