// NÃO ALTERE ESSA LINHA
#include "avaliacao_basica_controle.hpp"

#include "FilaProcessos.hpp"
#include <iostream>

int main() {
    FilaProcessos fila;
    char comando;

    while (std::cin >> comando) {
        switch (comando) {
            case 'a': {
                std::string nome;
                int prioridade;
                std::cin >> nome >> prioridade;
                fila.adicionar_processo(nome, prioridade);
                break;
            }
            case 'r': {
                Processo* removido = fila.remover_processo_maior_prioridade();
                if (removido != nullptr) {
                    delete removido; 
                break;
            }
            case 'i': {
                int id;
                std::cin >> id;
                Processo* removido = fila.remover_processo_por_id(id);
                if (removido != nullptr) {
                    delete removido; 
                }
                break;
            }
            case 'p': {
                fila.imprimir_fila();
                break;
            }
            case 'e': {
                int id;
                std::cin >> id;
                fila.estimativa_tempo_para_execucao(id);
                break;
            }
            case 'b': {
                avaliacao_basica();
                break;
            }
        }
    }

    return 0;
}