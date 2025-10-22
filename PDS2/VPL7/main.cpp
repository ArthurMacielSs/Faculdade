#include <iostream>
#include <string>
#include <sstream>
#include "Sistema.hpp"

int main() {
    Sistema sistema;
    std::string linha;

    while (std::getline(std::cin, linha)) {
        if (linha.empty()) continue;

        std::istringstream iss(linha);
        std::string comando;
        iss >> comando;

        if (comando == "adicionar_usuario") {
            std::string nome, email;
            iss >> nome >> email;
            sistema.adicionar_usuario(nome, email);
        }
        else if (comando == "remover_usuario") {
            int id;
            iss >> id;
            sistema.remover_usuario(id);
        }
        else if (comando == "buscar_usuario") {
            int id;
            iss >> id;
            sistema.buscar_usuario(id);
        }
        else if (comando == "listar_usuarios") {
            sistema.listar_usuarios();
        }
        else if (comando == "adicionar_projeto") {
            std::string nome, descricao;
            iss >> nome >> descricao;
            sistema.adicionar_projeto(nome, descricao);
        }
        else if (comando == "remover_projeto") {
            int id;
            iss >> id;
            sistema.remover_projeto(id);
        }
        else if (comando == "buscar_projeto") {
            int id;
            iss >> id;
            sistema.buscar_projeto(id);
        }
        else if (comando == "listar_projetos") {
            sistema.listar_projetos();
        }
        else if (comando == "atribuir_dono") {
            int id_projeto, id_usuario;
            iss >> id_projeto >> id_usuario;
            sistema.atribuir_dono(id_projeto, id_usuario);
        }
        else if (comando == "adicionar_tarefa") {
            int id_projeto;
            std::string descricao;
            iss >> id_projeto >> descricao;
            sistema.adicionar_tarefa(id_projeto, descricao);
        }
        else if (comando == "atualizar_tarefa") {
            int id_projeto, id_tarefa;
            std::string status;
            iss >> id_projeto >> id_tarefa >> status;
            sistema.atualizar_tarefa(id_projeto, id_tarefa, status);
        }
        else if (comando == "remover_tarefa") {
            int id_projeto, id_tarefa;
            iss >> id_projeto >> id_tarefa;
            sistema.remover_tarefa(id_projeto, id_tarefa);
        }
        else if (comando == "listar_tarefas") {
            int id_projeto;
            iss >> id_projeto;
            sistema.listar_tarefas(id_projeto);
        }
    }

    return 0;
}