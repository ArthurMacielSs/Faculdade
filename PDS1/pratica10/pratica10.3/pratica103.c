#include <string.h>
#include <stdlib.h>
#include "user.h"



struct address *create_address(const char *input) {
    struct address *addr = (struct address *)malloc(sizeof(struct address));
    if (addr == NULL) return NULL;

    // Copiar input pois strtok modifica a string
    char *input_copy = (char *)malloc(strlen(input) + 1);
    if (input_copy == NULL) {
        free(addr);
        return NULL;
    }
    strcpy(input_copy, input);

    // Tokenizar e extrair os campos
    char *token = strtok(input_copy, "|");
    if (token == NULL) {
        free(input_copy);
        free(addr);
        return NULL;
    }

    addr->line = (char *)malloc(strlen(token) + 1);
    if (addr->line == NULL) {
        free(input_copy);
        free(addr);
        return NULL;
    }
    strcpy(addr->line, token);

    token = strtok(NULL, "|");
    if (token == NULL) {
        free(input_copy);
        free(addr->line);
        free(addr);
        return NULL;
    }
    addr->number = atoi(token);

    token = strtok(NULL, "|");
    if (token == NULL) {
        free(input_copy);
        free(addr->line);
        free(addr);
        return NULL;
    }
    addr->zipcode = atoi(token);

    free(input_copy);
    return addr;
}

void free_address(struct address *addr) {
    if (addr != NULL) {
        free(addr->line);
        free(addr);
    }
}

// struct user *create_user(const char *input){
struct user *create_user(const char *input) {
    // struct user *u;
    struct user *u = (struct user *)malloc(sizeof(struct user)); // ✅ CORRIGIDO: aloca espaço para a struct
    if (u == NULL) return NULL;

    // strtok modifica a string, então criamos uma cópia
    // não existia nenhuma cópia da string original
    char *copy = (char *)malloc(strlen(input) + 1); // ✅ ADICIONADO: cria cópia da string original
    if (copy == NULL) {
        free(u);
        return NULL;
    }
    strcpy(copy, input); // ✅ ADICIONADO: copia o conteúdo da string original

    // não existia essa separação com strtok (ou estava errada)
    char *name_token = strtok(copy, "#"); // ✅ CORRIGIDO: separa nome
    char *age_token = strtok(NULL, "#");  // ✅ CORRIGIDO: separa idade
    char *addr_token = strtok(NULL, "#"); // ✅ CORRIGIDO: separa endereço completo

    // u->name = strdup(name_token);
    u->name = (char *)malloc(strlen(name_token) + 1); // ✅ CORRIGIDO: malloc correto
    if (u->name == NULL) {
        free(copy);
        free(u);
        return NULL;
    }
    strcpy(u->name, name_token); // ✅ CORRIGIDO: copia o nome

    // u->idade = age_token;
    u->idade = atoi(age_token); // ✅ CORRIGIDO: converte idade para inteiro

    // u->addr = addr_token;
    u->addr = create_address(addr_token); // ✅ CORRIGIDO: cria struct address corretamente
    if (u->addr == NULL) {
        free(u->name); // ✅ ADICIONADO: libera nome se create_address falhar
        free(u);
        free(copy);
        return NULL;
    }

    free(copy); // ✅ ADICIONADO: libera a string de cópia
    return u;
}

// void free_user(struct user *user){
void free_user(struct user *user) {
    if (user != NULL) {
        // faltava liberar name e address
        free(user->name);         // ✅ ADICIONADO: libera o campo name
        free_address(user->addr); // ✅ ADICIONADO: libera a struct address com a função correta
        free(user);               // ✅ CORRIGIDO: libera struct principal
    }
}