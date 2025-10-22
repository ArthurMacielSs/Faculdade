#include "Frota.hpp"
#include "Caminhao.hpp"
#include "Carro.hpp"
#include "Moto.hpp"
#include "Veiculo.hpp"

#include <iostream>
#include <iomanip>

    void Frota::add_carro(std::string placa, int ano, int capacidade_kg, int num_portas){
        Carro *_novo_Carro = new Carro(placa, ano, capacidade_kg, num_portas);
        _veiculos.push_back(_novo_Carro);
    }

    void Frota::add_moto(std::string placa, int ano, int capacidade_kg, int cilindradas) //— cria Moto e adiciona.
    {
        Moto* _nova_Moto = new Moto(placa, ano, capacidade_kg, cilindradas);
        _veiculos.push_back(_nova_Moto);
    }

    void Frota::add_caminhao(std::string placa, int ano, int capacidade_kg, int num_eixos){
        Caminhao* _novo_caminhao = new Caminhao(placa, ano, capacidade_kg, num_eixos);
        _veiculos.push_back(_novo_caminhao);
    } 

    void Frota::list(){
        if(_veiculos.empty()==1){
            std::cout <<"Frota vazia!";
        }
        else{
            for(int i=0; i<_veiculos.size(); i++){
                _veiculos.at(i)->print_info();
            }
        }

    }
    void Frota::find(int indice) const {
        if(indice>_veiculos.size()){
            std::cout << "Erro: indice invalido";
        }
        else{
            _veiculos.at(indice)->print_info();
        }

    }
  
    void Frota::remover(int indice){
        if(indice>_veiculos.size()){
            std::cout << "Erro: indice invalido";
        }
        else{
            delete _veiculos.at(indice);
            auto aux = _veiculos.begin();
            aux += indice;
            _veiculos.erase(aux);
        }

    }
    void Frota::viagem(int indice, double km, int carga_kg){
         if(indice>_veiculos.size()){
            std::cout << "Erro: indice invalido";
        }
        else if(carga_kg > _veiculos.at(indice)->capacidade_kg()){
                std::cout << "Erro: carga excede capacidade";

        }
        else {
            double custo = _veiculos.at(indice)->custo_viagem(km, carga_kg);
            std::cout<< std::setprecision(2);
            std::cout << "Custo: " << custo;
        }
    }
   
    Frota::~Frota(){
    for (int i=0; i<_veiculos.size(); i++){
         delete _veiculos.at(i);


    }
    for (int i=0; i<_veiculos.size(); i++){
        _veiculos.pop_back();

    } 
}