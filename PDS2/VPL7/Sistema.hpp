#ifndef SISTEMA_HPP
#define SISTEMA_HPP

#include "Usuario.hpp"
#include "Projeto.hpp"
#include <string>

#define MAX_USUARIOS 100
#define MAX_PROJETOS 100

class Sistema {
private:
    Usuario _usuarios[MAX_USUARIOS];
    int _num_usuarios;
    Projeto _projetos[MAX_PROJETOS];
    int _num_projetos;

public:
    Sistema();

    // Usuários
    void adicionar_usuario(const std::string& nome, const std::string& email);
    void remover_usuario(int id);
    void buscar_usuario(int id) const;
    void listar_usuarios() const;

    // Projetos
    void adicionar_projeto(const std::string& nome, const std::string& descricao);
    void remover_projeto(int id);
    void buscar_projeto(int id) const;
    void listar_projetos() const;
    void atribuir_dono(int id_projeto, int id_usuario);

    // Tarefas
    void adicionar_tarefa(int id_projeto, const std::string& descricao);
    void atualizar_tarefa(int id_projeto, int id_tarefa, const std::string& status);
    void remover_tarefa(int id_projeto, int id_tarefa);
    void listar_tarefas(int id_projeto) const;
};

#endif
