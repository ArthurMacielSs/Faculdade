#ifndef FROTA_HPP
#define FROTA_HPP

#include <vector>
#include "Veiculo.hpp"

class Frota
{
private:
   std::vector<Veiculo*> _veiculos;

public:   
    void add_carro(std::string placa, int ano, int capacidade_kg, int num_portas); //— cria um Carro (via new) e adiciona ao vetor.
    void add_moto(std::string placa, int ano, int capacidade_kg, int cilindradas); //— cria Moto e adiciona.
    void add_caminhao(std::string placa, int ano, int capacidade_kg, int num_eixos); //— cria Caminhao e adiciona.
    void list();
    //— Se vazio: imprimir Frota vazia!
    //— Caso contrário: chamar print_info() de cada veiculo, na ordem de cadastro.
    void find(int indice) const;
   // — Se índice invalido (fora do range): Erro: indice invalido
    //— Caso contrário: imprimir print_info() do veiculo correspondente.
    void remover(int indice);
    //— Se índice invalido: Erro: indice invalido
    //— Caso contrário: desaloca (imprimindo os destrutores na ordem correta) e remove do vetor.
    void viagem(int indice, double km, int carga_kg);
    //— Se índice invalido: Erro: indice invalido
    //— Se carga_kg > capacidade_kg(): Erro: carga excede capacidade
    //— Caso contrário: calcular via custo_viagem da derivada e imprimir Custo: X.YY (duas casas decimais).
    ~Frota(); //desalocar todos os veiculos do vetor (respeitando a ordem de destruição).

};

#endif
