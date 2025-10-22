#include "Tarefa.hpp"

int Tarefa::_prox_id = 1;

Tarefa::Tarefa() : _id(0), _descricao(""), _status("aberta") {}

Tarefa::Tarefa(const std::string& descricao) : _descricao(descricao), _status("aberta") {
    _id = _prox_id++;
}

int Tarefa::get_id() const {
    return _id;
}

const std::string& Tarefa::get_descricao() const {
    return _descricao;
}

const std::string& Tarefa::get_status() const {
    return _status;
}

void Tarefa::set_descricao(const std::string& descricao) {
    _descricao = descricao;
}

void Tarefa::set_status(const std::string& status) {
    _status = status;
}
