#include "Sistema.hpp"
#include <iostream>

Sistema::Sistema() : _num_usuarios(0), _num_projetos(0) {}


void Sistema::adicionar_usuario(const std::string& nome, const std::string& email) {
    if (_num_usuarios < MAX_USUARIOS) {
        _usuarios[_num_usuarios] = Usuario(nome, email);
        std::cout << "Usuario adicionado: " << _usuarios[_num_usuarios].get_id() 
                  << " " << _usuarios[_num_usuarios].get_nome() 
                  << " " << _usuarios[_num_usuarios].get_email() << std::endl;
        _num_usuarios++;
    }
}

void Sistema::remover_usuario(int id) {
    int indice = -1;
    for (int i = 0; i < _num_usuarios; i++) {
        if (_usuarios[i].get_id() == id) {
            indice = i;
            break;
        }
    }

    if (indice == -1) {
        std::cout << "Erro: usuario " << id << " nao existe" << std::endl;
        return;
    }


    for (int i = indice; i < _num_usuarios - 1; i++) {
        _usuarios[i] = _usuarios[i + 1];
    }
    _num_usuarios--;


    for (int i = 0; i < _num_projetos; i++) {
        if (_projetos[i].get_dono_id() == id) {
            _projetos[i].set_dono_id(-1);
        }
    }

    std::cout << "Usuario removido: " << id << std::endl;
}

void Sistema::buscar_usuario(int id) const {
    for (int i = 0; i < _num_usuarios; i++) {
        if (_usuarios[i].get_id() == id) {
            std::cout << "Usuario " << _usuarios[i].get_id() 
          << ": " << _usuarios[i].get_nome() 
          << " " << _usuarios[i].get_email() << std::endl;

            return;
        }
    }
    std::cout << "Usuario " << id << " nao encontrado" << std::endl;
}

void Sistema::listar_usuarios() const {
    if (_num_usuarios == 0) {
        std::cout << "Nenhum usuario" << std::endl;
        return;
    }

    for (int i = 0; i < _num_usuarios; i++) {
        std::cout << _usuarios[i].get_id() << " " 
                  << _usuarios[i].get_nome() << " " 
                  << _usuarios[i].get_email() << std::endl;
    }
}


void Sistema::adicionar_projeto(const std::string& nome, const std::string& descricao) {
    if (_num_projetos < MAX_PROJETOS) {
        _projetos[_num_projetos] = Projeto(nome, descricao);
        std::cout << "Projeto adicionado: " << _projetos[_num_projetos].get_id() 
                  << " " << _projetos[_num_projetos].get_nome() 
                  << " " << _projetos[_num_projetos].get_descricao() << std::endl;
        _num_projetos++;
    }
}

void Sistema::remover_projeto(int id) {
    int indice = -1;
    for (int i = 0; i < _num_projetos; i++) {
        if (_projetos[i].get_id() == id) {
            indice = i;
            break;
        }
    }

    if (indice == -1) {
        std::cout << "Erro: projeto " << id << " nao existe" << std::endl;
        return;
    }

    for (int i = indice; i < _num_projetos - 1; i++) {
        _projetos[i] = _projetos[i + 1];
    }
    _num_projetos--;

    std::cout << "Projeto removido: " << id << std::endl;
}

void Sistema::buscar_projeto(int id) const {
    for (int i = 0; i < _num_projetos; i++) {
        if (_projetos[i].get_id() == id) {
            std::cout << "Projeto " << _projetos[i].get_id() 
                      << ": " << _projetos[i].get_nome() 
                      << " " << _projetos[i].get_descricao();
            if (_projetos[i].get_dono_id() != -1) {
                std::cout << " dono=" << _projetos[i].get_dono_id();
            }
            std::cout << std::endl;
            return;
        }
    }
    std::cout << "Projeto " << id << " nao encontrado" << std::endl;
}

void Sistema::listar_projetos() const {
    if (_num_projetos == 0) {
        std::cout << "Nenhum projeto" << std::endl;
        return;
    }

    for (int i = 0; i < _num_projetos; i++) {
        std::cout << _projetos[i].get_id() << " " 
                  << _projetos[i].get_nome() << " " 
                  << _projetos[i].get_descricao();
        if (_projetos[i].get_dono_id() != -1) {
            std::cout << " dono=" << _projetos[i].get_dono_id();
        }
        std::cout << std::endl;
    }
}

void Sistema::atribuir_dono(int id_projeto, int id_usuario) {
    int indice_projeto = -1;
    for (int i = 0; i < _num_projetos; i++) {
        if (_projetos[i].get_id() == id_projeto) {
            indice_projeto = i;
            break;
        }
    }

    if (indice_projeto == -1) {
        std::cout << "Erro: projeto " << id_projeto << " nao existe" << std::endl;
        return;
    }

    bool usuario_existe = false;
    for (int i = 0; i < _num_usuarios; i++) {
        if (_usuarios[i].get_id() == id_usuario) {
            usuario_existe = true;
            break;
        }
    }

    if (!usuario_existe) {
        std::cout << "Erro: usuario " << id_usuario << " nao existe" << std::endl;
        return;
    }

    _projetos[indice_projeto].set_dono_id(id_usuario);
    std::cout << "Atribuido dono: projeto " << id_projeto << " -> usuario " << id_usuario << std::endl;
}

void Sistema::adicionar_tarefa(int id_projeto, const std::string& descricao) {
    int indice_projeto = -1;
    for (int i = 0; i < _num_projetos; i++) {
        if (_projetos[i].get_id() == id_projeto) {
            indice_projeto = i;
            break;
        }
    }

    if (indice_projeto == -1) {
        std::cout << "Erro: projeto " << id_projeto << " nao existe" << std::endl;
        return;
    }

    int id_tarefa;
    if (_projetos[indice_projeto].adicionar_tarefa(descricao, id_tarefa)) {
        std::cout << "Tarefa adicionada: projeto " << id_projeto 
                  << " tarefa " << id_tarefa << " " << descricao << std::endl;
    }
}

void Sistema::atualizar_tarefa(int id_projeto, int id_tarefa, const std::string& status) {
    int indice_projeto = -1;
    for (int i = 0; i < _num_projetos; i++) {
        if (_projetos[i].get_id() == id_projeto) {
            indice_projeto = i;
            break;
        }
    }

    if (indice_projeto == -1) {
        std::cout << "Erro: projeto " << id_projeto << " nao existe" << std::endl;
        return;
    }

    if (_projetos[indice_projeto].atualizar_tarefa(id_tarefa, status)) {
        std::cout << "Tarefa atualizada: projeto " << id_projeto 
                  << " tarefa " << id_tarefa << " status=" << status << std::endl;
    } else {
        std::cout << "Erro: tarefa " << id_tarefa << " nao existe no projeto " << id_projeto << std::endl;
    }
}

void Sistema::remover_tarefa(int id_projeto, int id_tarefa) {
    int indice_projeto = -1;
    for (int i = 0; i < _num_projetos; i++) {
        if (_projetos[i].get_id() == id_projeto) {
            indice_projeto = i;
            break;
        }
    }

    if (indice_projeto == -1) {
        std::cout << "Erro: projeto " << id_projeto << " nao existe" << std::endl;
        return;
    }

    if (_projetos[indice_projeto].remover_tarefa(id_tarefa)) {
        std::cout << "Tarefa removida: projeto " << id_projeto 
                  << " tarefa " << id_tarefa << std::endl;
    } else {
        std::cout << "Erro: tarefa " << id_tarefa << " nao existe no projeto " << id_projeto << std::endl;
    }
}

void Sistema::listar_tarefas(int id_projeto) const {
    int indice_projeto = -1;
    for (int i = 0; i < _num_projetos; i++) {
        if (_projetos[i].get_id() == id_projeto) {
            indice_projeto = i;
            break;
        }
    }

    if (indice_projeto == -1) {
        std::cout << "Erro: projeto " << id_projeto << " nao existe" << std::endl;
        return;
    }

    if (_projetos[indice_projeto].get_num_tarefas() == 0) {
        std::cout << "Nenhuma tarefa no projeto " << id_projeto << std::endl;
        return;
    }

    const Tarefa* tarefas = _projetos[indice_projeto].get_tarefas();
    for (int i = 0; i < _projetos[indice_projeto].get_num_tarefas(); i++) {
        std::cout << tarefas[i].get_id() << " " 
                  << tarefas[i].get_descricao() << " " 
                  << tarefas[i].get_status() << std::endl;
    }
}
