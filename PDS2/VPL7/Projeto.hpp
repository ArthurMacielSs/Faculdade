#ifndef PROJETO_HPP
#define PROJETO_HPP

#include <string>
#include "Tarefa.hpp"

#define MAX_TAREFAS 100

class Projeto {
private:
    int _id;
    static int _prox_id;
    std::string _nome;
    std::string _descricao;
    int _dono_id;
    Tarefa _tarefas[MAX_TAREFAS];
    int _num_tarefas;

public:
    Projeto();
    Projeto(const std::string& nome, const std::string& descricao);

    int get_id() const;
    const std::string& get_nome() const;
    const std::string& get_descricao() const;
    int get_dono_id() const;
    const Tarefa* get_tarefas() const;
    int get_num_tarefas() const;

    void set_nome(const std::string& nome);
    void set_descricao(const std::string& descricao);
    void set_dono_id(int dono_id);

    bool adicionar_tarefa(const std::string& descricao, int& out_tarefa_id);
    bool atualizar_tarefa(int id_tarefa, const std::string& novo_status);
    bool remover_tarefa(int id_tarefa);
    const Tarefa* buscar_tarefa(int id_tarefa) const;
};

#endif