#ifndef PROCESSO_HPP
#define PROCESSO_HPP
#include <string>

const int BAIXA = 0;
const int MEDIA = 1;
const int ALTA = 2;

struct Processo {
    int _id;
    std::string _nome;
    int _prioridade;
    Processo* _proximo; 

    Processo(int id, std::string nome, int prioridade);

    double tempo_reservado_processo();

    void imprimir_dados();

    int getID();

    int getPrioridade();

    std::string getNome();
};

#endif