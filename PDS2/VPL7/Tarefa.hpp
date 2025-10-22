#ifndef TAREFA_HPP
#define TAREFA_HPP

#include <string>

class Tarefa {
private:
    int _id;
    static int _prox_id;
    std::string _descricao;
    std::string _status;

public:
    Tarefa();
    Tarefa(const std::string& descricao);

    int get_id() const;
    const std::string& get_descricao() const;
    const std::string& get_status() const;

    void set_descricao(const std::string& descricao);
    void set_status(const std::string& status);
};

#endif
