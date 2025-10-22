#include "Projeto.hpp"

int Projeto::_prox_id = 1;

Projeto::Projeto() : _id(0), _nome(""), _descricao(""), _dono_id(-1), _num_tarefas(0) {}

Projeto::Projeto(const std::string& nome, const std::string& descricao) 
    : _nome(nome), _descricao(descricao), _dono_id(-1), _num_tarefas(0) {
    _id = _prox_id++;
}

int Projeto::get_id() const {
    return _id;
}

const std::string& Projeto::get_nome() const {
    return _nome;
}

const std::string& Projeto::get_descricao() const {
    return _descricao;
}

int Projeto::get_dono_id() const {
    return _dono_id;
}

const Tarefa* Projeto::get_tarefas() const {
    return _tarefas;
}

int Projeto::get_num_tarefas() const {
    return _num_tarefas;
}

void Projeto::set_nome(const std::string& nome) {
    _nome = nome;
}

void Projeto::set_descricao(const std::string& descricao) {
    _descricao = descricao;
}

void Projeto::set_dono_id(int dono_id) {
    _dono_id = dono_id;
}

bool Projeto::adicionar_tarefa(const std::string& descricao, int& out_tarefa_id) {
    if (_num_tarefas >= MAX_TAREFAS) {
        return false;
    }

    _tarefas[_num_tarefas] = Tarefa(descricao);
    out_tarefa_id = _tarefas[_num_tarefas].get_id();
    _num_tarefas++;
    return true;
}

bool Projeto::atualizar_tarefa(int id_tarefa, const std::string& novo_status) {
    for (int i = 0; i < _num_tarefas; i++) {
        if (_tarefas[i].get_id() == id_tarefa) {
            _tarefas[i].set_status(novo_status);
            return true;
        }
    }
    return false;
}

bool Projeto::remover_tarefa(int id_tarefa) {
    for (int i = 0; i < _num_tarefas; i++) {
        if (_tarefas[i].get_id() == id_tarefa) {
            for (int j = i; j < _num_tarefas - 1; j++) {
                _tarefas[j] = _tarefas[j + 1];
            }
            _num_tarefas--;
            return true;
        }
    }
    return false;
}

const Tarefa* Projeto::buscar_tarefa(int id_tarefa) const {
    for (int i = 0; i < _num_tarefas; i++) {
        if (_tarefas[i].get_id() == id_tarefa) {
            return &_tarefas[i];
        }
    }
    return nullptr;
}
