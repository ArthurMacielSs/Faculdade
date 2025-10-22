#include "Processo.hpp"
#include <iostream>

Processo::Processo(int id, std::string nome, int prioridade) :
    _id(id),
    _nome(nome),
    _prioridade(prioridade),
    _proximo(nullptr) 
{}

double Processo::tempo_reservado_processo() {
    switch (this->_prioridade) {
        case BAIXA:
            return 0.5;
        case MEDIA:
            return 1.5;
        case ALTA:
            return 3.0;
        default:
            return 0.0;
    }
}

void Processo::imprimir_dados() {
    std::cout << this->_id << "\t" << this->_nome << "\t";
    switch (this->_prioridade) {
        case BAIXA:
            std::cout << "BAIXA";
            break;
        case MEDIA:
            std::cout << "MEDIA";
            break;
        case ALTA:
            std::cout << "ALTA";
            break;
    }
    std::cout << std::endl;
}

int Processo::getID() {
    return this->_id;
}

int Processo::getPrioridade() {
    return this->_prioridade;
}

std::string Processo::getNome() {
    return this->_nome;
}