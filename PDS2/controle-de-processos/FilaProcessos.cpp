#include "FilaProcessos.hpp"
#include <iostream>
#include <iomanip> 

FilaProcessos::FilaProcessos() :
    _head(nullptr),
    _tail(nullptr),
    _id_counter(1) 
{}


FilaProcessos::~FilaProcessos() {
    Processo* atual = _head;
    while (atual != nullptr) {
        Processo* proximo = atual->_proximo;
        delete atual;
        atual = proximo;
    }
}

void FilaProcessos::adicionar_processo(std::string nome, int prioridade) {
    Processo* novo_processo = new Processo(_id_counter, nome, prioridade);
    _id_counter++;

    if (_head == nullptr) {
        _head = novo_processo;
        _tail = novo_processo;
        return;
    }

    
    if (novo_processo->getPrioridade() > _head->getPrioridade()) {
        novo_processo->_proximo = _head;
        _head = novo_processo;
        return;
    }

    Processo* atual = _head;
    while (atual->_proximo != nullptr && novo_processo->getPrioridade() <= atual->_proximo->getPrioridade()) {
        atual = atual->_proximo;
    }

    novo_processo->_proximo = atual->_proximo;
    atual->_proximo = novo_processo;

    
    if (novo_processo->_proximo == nullptr) {
        _tail = novo_processo;
    }
}

Processo* FilaProcessos::remover_processo_maior_prioridade() {
    if (_head == nullptr) {
        return nullptr;
    }

    Processo* removido = _head;
    _head = _head->_proximo;


    if (_head == nullptr) {
        _tail = nullptr;
    }

    removido->_proximo = nullptr; 
    return removido;
}

Processo* FilaProcessos::remover_processo_por_id(int id) {
    if (_head == nullptr) {
        return nullptr;
    }

    if (_head->getID() == id) {
        return remover_processo_maior_prioridade();
    }

    Processo* anterior = _head;
    Processo* atual = _head->_proximo;

    while (atual != nullptr) {
        if (atual->getID() == id) {
            anterior->_proximo = atual->_proximo;
            
            if (anterior->_proximo == nullptr) {
                _tail = anterior;
            }
            atual->_proximo = nullptr; 
            return atual;
        }
        anterior = atual;
        atual = atual->_proximo;
    }

    return nullptr; 
}

void FilaProcessos::estimativa_tempo_para_execucao(int id) {
    double tempo_total = 0.0;
    Processo* atual = _head;

    while (atual != nullptr && atual->getID() != id) {
        tempo_total += atual->tempo_reservado_processo();
        atual = atual->_proximo;
    }
    
    
    if (atual != nullptr) {
        std::cout << std::fixed << std::setprecision(1);
        std::cout << "Tempo estimado para execucao do processo " << atual->getNome() 
                  << " (id=" << atual->getID() << ") eh " << tempo_total << " segundos." << std::endl;
    }
}

void FilaProcessos::imprimir_fila() {
    Processo* atual = _head;
    while (atual != nullptr) {
        atual->imprimir_dados();
        atual = atual->_proximo;
    }
}